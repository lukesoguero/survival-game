using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{

    private Inventory inventory;
    public Camera fpsCam;

    public int range = 100000;
    public int damage = 1;

    public ParticleSystem gunFlash;


    // Start is called before the first frame update
    void Start()
    {

        inventory = GameObject.FindGameObjectWithTag("Inventory").GetComponent<Inventory>();

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0)){
            Debug.Log("pressed button");
            Shoot();
        }
    }

    void Shoot(){
        gunFlash.Play();
        RaycastHit hit;
        if(Physics.Raycast(fpsCam.transform.position, fpsCam.transform.forward, out hit, range)){
            Debug.Log(hit.transform.name);
            Enemy enemy = hit.transform.GetComponent<Enemy>();
            if(enemy != null){
                Debug.Log("exists");
                enemy.TakeDamage(damage);
            }


        }
    }

}
