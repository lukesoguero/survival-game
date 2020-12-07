using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPooler : MonoBehaviour
{
    private List<GameObject> pool;

    // instantiates given number of objects in pool
    public void Initialize(GameObject prefab, int size) {
        pool = new List<GameObject>();
        for (int i = 0; i < size; i++) {
            GameObject obj = Instantiate(prefab);
            obj.SetActive(false);
            pool.Add(obj);
        }
    }

    // spawns an object at given transform if pool is not empty
    public GameObject Spawn(Transform t) {
        foreach (GameObject obj in pool) {
            if (!obj.activeSelf) {
                obj.SetActive(true);
                obj.transform.position = t.position;
                obj.transform.rotation = t.rotation;
                return obj;
            }
        }
        return null;
    }
}
