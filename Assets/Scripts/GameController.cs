using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour
{
    public GameObject gameController;
    public GameObject player;
    public GameObject ui;
    public TMP_Text timeText;
    public TMP_Text scoreText;
    private float seconds;
    private bool timerActive = true;
    //private int minuteCount;
    //private int hourCount;
    public int score = 0;
    // Update is called once per frame
    void Update(){
        UpdateTimer();
        UpdateScore();
        UpdatePlayerHealth();
    }
    // variation of the observer pattern is used here
    private void UpdatePlayerHealth(){
        //player at 5/5 health
        if(player.GetComponent<Player>().health == 5){
            Color newColor = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
            newColor.a = 0;
            Color newColorFilled = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
            newColorFilled.a = 1;
            ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColorFilled;
            ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColorFilled;
            ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColorFilled;
            ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColorFilled;
            ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColorFilled;
        }
        //player at 4/5 health
        else if(player.GetComponent<Player>().health == 4){
            Color newColor = ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color;
            newColor.a = 0;
            Color newColorFilled = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
            newColorFilled.a = 1;
            ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColorFilled;
            ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColorFilled;
            ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColorFilled;
            ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColorFilled;
        }
        //player at 3/5 health
        else if(player.GetComponent<Player>().health == 3){
            Color newColor = ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color;
            newColor.a = 0;
            Color newColorFilled = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
            newColorFilled.a = 1;
            ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColorFilled;
            ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColorFilled;
            ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColorFilled;
        }
        //player at 2/5 health
        else if(player.GetComponent<Player>().health == 2){
            Color newColor = ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color;
            newColor.a = 0;
            Color newColorFilled = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
            newColorFilled.a = 1;
            ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColorFilled;
            ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColorFilled;
        }
        //player at 1/5 health
        else if(player.GetComponent<Player>().health == 1){
            Color newColor = ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color;
            newColor.a = 0;
            Color newColorFilled = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
            newColorFilled.a = 1;
            ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColorFilled;
        }
        //player at 0/5 health
        else{
            Color newColor = ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color;
            newColor.a = 0;
            Color newColorFilled = ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color;
            newColorFilled.a = 1;
            ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColor;
            ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColor;
            PlayerDied();
        }
    }
    private void PlayerDied(){
        //freeze player movement
        player.GetComponent<PlayerMovement>().ableToMove = false;
        //enable game over panel ui
        ui.GetComponent<UI>().gameOverPanel.SetActive(true);
        //stop timer
        timerActive = false;
        //hide original time and score text

        timeText.enabled = false;
        scoreText.enabled = false;
        //set final score and time
        ui.GetComponent<UI>().gameOverScoreText.GetComponent<TextMeshProUGUI>().text = "Score: " + (int)score;
        ui.GetComponent<UI>().gameOverTimeText.GetComponent<TextMeshProUGUI>().text = "Time: " + (int)seconds;
        // save high score
        if (score > PlayerPrefs.GetInt("score")) {
            PlayerPrefs.SetInt("score", score);
        }
        StartCoroutine(ExitToMainMenu(5));
    }
    private void UpdateTimer(){
        if(timerActive == true){
             seconds += Time.deltaTime;
             timeText.GetComponent<TextMeshProUGUI>().text = (int)seconds + " ";
             /*if(secondsCount >= 60){
                 minuteCount++;
                 secondsCount = 0;
             }else if(minuteCount >= 60){
                 hourCount++;
                 minuteCount = 0;
             }*/
         }
     }
     private void UpdateScore(){
         scoreText.GetComponent<TextMeshProUGUI>().text = "Score: " + (int)score;
     }

    IEnumerator ExitToMainMenu(float time) {
        yield return new WaitForSeconds(time);
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex-1);
    }
}
