using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[ExecuteInEditMode]
public class LegMovement : MonoBehaviour
{
    public float stepThreshold = 0.2f;
    public float stepDuration = 0.5f;
    public float stepCooldown = 1f;
    public float stepOffset;
    public Vector3 stepNormal;
    public Transform pole;
    public Vector3 restingPosition;
    public Vector3 desiredPosition;
    public Vector3 velocity;

    private float lastStep;

    // Start is called before the first frame update
    void Start()
    {
        lastStep = Time.time + stepCooldown * stepOffset;
        TakeStep();
    }

    // Update is called once per frame
    void Update()
    {
        // update target position
        float percent = Mathf.Clamp01((Time.time - lastStep) / stepDuration);
        Vector3 newPosition = Vector3.Lerp(restingPosition, desiredPosition, percent);
        if (velocity != Vector3.zero) {
            newPosition += stepNormal * StepCurve(percent);
        }
        transform.position = newPosition;
    }

    public void TakeStep() {
        RaycastHit hit;
        Vector3 castPoint = pole.position + velocity/4f;
        if (Physics.Raycast(castPoint, pole.TransformDirection(Vector3.down), out hit, Mathf.Infinity)) {
            restingPosition = transform.position;
            desiredPosition = hit.point;
            stepNormal = hit.normal;
        }
        lastStep = Time.time;
    }

    // returns foot height at given distance along curve
    float StepCurve(float percent) {
        return Mathf.Sqrt(0.3f*(0.25f-Mathf.Pow(percent-0.5f, 2)));
    }
}
