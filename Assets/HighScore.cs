
using UnityEngine;
using UnityEngine.UI;

public class HighScore : MonoBehaviour
{
    public Text score;
    void Start() {
        score.text = PlayerPrefs.GetInt("score",0).ToString();
    }
}
