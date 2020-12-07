using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerUpSpawner : MonoBehaviour
{
    public float spawnRate = 15f;
    public GameObject[] powerUps;
    public Transform[] spawnPoints;

    private float lastSpawn;
    // Start is called before the first frame update
    void Start()
    {
        lastSpawn = -spawnRate; // ensures that a powerup spawns immediately
    }

    // Update is called once per frame
    void Update()
    {
        if (lastSpawn < Time.time - spawnRate) {
            // pick random spawn point
            int spawnIndex = Random.Range(0, spawnPoints.Length);
            // pick random power up
            int powerUpIndex = Random.Range(0, powerUps.Length);
            Instantiate(powerUps[powerUpIndex], spawnPoints[spawnIndex]);
            lastSpawn = Time.time;
        }
    }
}
