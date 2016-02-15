using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float speed;
	public Text countText;
	public Text winText;

	private Rigidbody rb;
	private int count;

	void Start()
	{
		rb = GetComponent<Rigidbody> ();
		count = 0;
		SetCountText ();
		winText.text = "";
	}
	
	void FixedUpdate()
	{
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
		}
	}

	void SetCountText() 
	{
		countText.text = "Count: " + count.ToString ();
		if (count >= 37) {
			winText.text = "You win!";
		}
	}

}
