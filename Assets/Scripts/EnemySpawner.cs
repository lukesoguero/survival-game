using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemySpawner : MonoBehaviour
{
    public float spawnRate = 10f;
    public float speedIncreaseRate = 30f;
    public GameObject enemyPrefab;
    public Transform[] spawnPoints;
    public ObjectPooler pool;

    private float lastSpawn;
    private float lastSpeedIncrease;
    // Start is called before the first frame update
    void Start()
    {
        pool.Initialize(enemyPrefab, 5);
        lastSpawn = -spawnRate;  // ensures that an enemy spawns immediately
        lastSpeedIncrease = Time.time; // we dont want to speed up enemies initially
    }

    // Update is called once per frame
    void Update()
    {
        if (lastSpawn < Time.time - spawnRate) {
            // pick random spawn point
            int index = Random.Range(0, spawnPoints.Length);
            // spawn enemy using pool, enemy won't spawn if all enemies in pool are already spawned
            GameObject enemy = pool.Spawn(spawnPoints[index]);
            if (enemy != null) {
                // make enemy faster
                if (lastSpeedIncrease < Time.time - speedIncreaseRate) {
                    NavMeshAgent agent = enemy.GetComponent<NavMeshAgent>();
                    agent.speed += 1;
                }
            }
            lastSpawn = Time.time;
        }
    }
}
