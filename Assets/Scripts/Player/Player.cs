using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public Transform player;
    public int health = 5;


    void Update(){

    }

    IEnumerator StarSpeedPowerUpTime(){

        Debug.Log("Start 5 sec");
        player.GetComponent<PlayerMovement>().speed *= 2;
        yield return new WaitForSeconds(5);
        //player.speed = 12;
        Debug.Log("Times Up");
        player.GetComponent<PlayerMovement>().speed /= 2;
    }
    void OnTriggerEnter(Collider collision){
        if(collision.gameObject.tag == "Speed"){

            Destroy(collision.gameObject);
            StartCoroutine(StarSpeedPowerUpTime());
        }
    }

    void PickupWeapon(){
        
    }
}
