using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpiderMovement : MonoBehaviour
{
    public float speed = 2f;
    public Vector3 velocity;

    public LegMovement[] legs;
    private int index;
    //public bool dynamicGait = false;
    public float timeBetweenSteps = 0.25f;
    public float maxTargetDistance = 1f;

    private float lastStep = 0;
    private Vector3 oldPosition; // used to calculate velocity

    void Start() {
        oldPosition = transform.position;
    }

    void Update() {
        CalculateOrientation();

        velocity = (transform.position - oldPosition) / Time.deltaTime;
        oldPosition = transform.position;
        //transform.position += transform.forward * speed * Time.deltaTime;

        if (Time.time > lastStep + (timeBetweenSteps / legs.Length) && legs != null) {
            if (legs[index] == null) return;
            legs[index].stepDuration = Mathf.Min(0.5f, timeBetweenSteps / 2f);
            legs[index].velocity = velocity;
            legs[index].TakeStep();
            lastStep = Time.time;
            index = (index + 1) % legs.Length;
        }
    }

    private void CalculateOrientation() {
        Vector3 up = Vector3.zero;

        Vector3 point, a, b, c;

        // Takes The Cross Product Of Each Leg And Calculates An Average Up
        for (int i = 0; i < legs.Length; i++) {
            point = legs[i].restingPosition;
            a = (transform.position - point).normalized;
            b = ((legs[(i+1)%legs.Length].restingPosition) - point).normalized;
            c = Vector3.Cross(a, b);
            up += c + (legs[i].stepNormal == Vector3.zero ? transform.forward : legs[i].stepNormal);

            Debug.DrawRay(point, a, Color.red, 0);

            Debug.DrawRay(point, b, Color.green, 0);

            Debug.DrawRay(point, c, Color.blue, 0);
        }
        up /= legs.Length;
        Debug.DrawRay(transform.position, up, Color.red, 0);

        // Asigns Up Using Vector3.ProjectOnPlane To Preserve Forward Orientation
        transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(Vector3.ProjectOnPlane(transform.forward, up), up), 10.0f * Time.deltaTime);
    }
}
