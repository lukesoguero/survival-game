using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Health : PowerUp
{
    private Player player;
    // Start is called before the first frame update
    void Start()
    {
         player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
    }

    // Update is called once per frame
    void Update()
    {

    }
    void OnTriggerEnter(Collider collision){

        //collide with health gain heart
        if(collision.gameObject.tag == "Player"  && player.health < 5){
            player.health ++;
            Destroy(this.gameObject);
        }
    }

}
