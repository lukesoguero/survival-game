using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyFollow : MonoBehaviour
{
    Transform target;
    NavMeshAgent agent;
    public float attackCooldown = 1f;

    private float lastAttack;
    
    // Start is called before the first frame update
    void Start()
    {
        target = PlayerManager.instance.player.transform;
        agent = GetComponent<NavMeshAgent>();
        agent.updateUpAxis = true;
        lastAttack = 0f;
    }

    // Update is called once per frame
    void Update()
    {
        agent.SetDestination(target.position);

        float distance = Vector3.Distance(target.position, transform.position);

        if (distance <= agent.stoppingDistance) {
            FaceTarget();
            if (lastAttack < Time.time - attackCooldown) {
                Player player = target.GetComponent<Player>();
                player.health -= 1;
                lastAttack = Time.time;
            }
        }
    }

    void FaceTarget() {
        Vector3 direction = (target.position - transform.position).normalized;
        Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
        transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 5f);
    }
}
