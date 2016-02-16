using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class Restart : MonoBehaviour {

	public void RestartGame() {

		Scene scene = SceneManager.GetActiveScene(); 
		SceneManager.LoadScene(scene.name);

		Debug.Log ("restart!");
	}
}
