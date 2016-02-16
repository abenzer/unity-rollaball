using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float speed;
	public Text countText;
	public Text winText;
	public Text timerText;
	public bool hasWon;
	public AudioClip chomp;
	public AudioClip cheer;

	private Rigidbody rb;
	private int count;

	void Start()
	{
		rb = GetComponent<Rigidbody> ();
		count = 0;
		SetCountText ();
		winText.text = "";
		timerText.text = "";
		hasWon = false;
	}
	
	void FixedUpdate()
	{
		if (hasWon == false) { 
			double timeSinceStartup = System.Math.Round (Time.timeSinceLevelLoad, 2);
			timerText.text = timeSinceStartup.ToString ();
		}

		// desktop
		if(SystemInfo.deviceType == DeviceType.Desktop) {
			float moveHorizontal = Input.GetAxis ("Horizontal");
			float moveVertical = Input.GetAxis ("Vertical");

			Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

			rb.AddForce (movement * speed);

		// iphone
		} else {
			Vector3 movement = new Vector3 (Input.acceleration.x*60, 0.0f, Input.acceleration.y*60);
			// Adding force to rigidbody
			rb.AddForce(movement * speed * Time.deltaTime);
		}
	}

	void OnTriggerEnter(Collider other) 
	{
		if (other.gameObject.CompareTag ("Pick Up")) 
		{
			other.gameObject.SetActive (false);
			count = count + 1;
			SetCountText ();
			AudioSource.PlayClipAtPoint(chomp, transform.position, 1.0F);  
		}
	}

	void SetCountText() 
	{
		countText.text = count.ToString () + "/37";
		if (count >= 37) {
			winText.text = timerText.text;
			timerText.text = "";
			hasWon = true;
			AudioSource.PlayClipAtPoint(cheer, transform.position);
		}
	}

}
