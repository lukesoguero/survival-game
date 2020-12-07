using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    private Player player;
    private bool hasEntered = false;
    private int health = 10;
    public GameObject enemy;
    public GameController gameController;


    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
        gameController = GameObject.FindGameObjectWithTag("GameController").GetComponent<GameController>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnTriggerEnter(Collider collision){
        //collide with enemy lose heart
        if(collision.gameObject.tag == "Player" && hasEntered == false && player.health >= 1){
            player.health --;
            hasEntered = true;
        }
    }
    void OnTriggerExit(Collider collision){
        hasEntered = false;
    }

    public void TakeDamage(int amount){
        health -= amount;
        Debug.Log("took damage");
        if(health <= 0){
            Die();
        }
    }

    void Die(){
        enemy.SetActive(false);
        health = 10;
        gameController.score ++;
    }
}
