using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using System.Diagnostics;

public class playercontroller : MonoBehaviour
{
    [SerializeField] private UI_InputWindow inputWindow;
    public float moveSpeed =1f;
    public float collisionOffset = 0.05f;
    public ContactFilter2D movementFilter;
    Vector2 movementInput;
    Rigidbody2D rb;

    List<RaycastHit2D> castCollisions = new List<RaycastHit2D>();

    // Start is called before the first frame update
    void Start()
    {
        print("aaa");
        rb = GetComponent<Rigidbody2D>();
        
    }

    // Update is called once per frame
    private void FixedUpdate(){
        if(movementInput!= Vector2.zero){
           bool success = TryMove(movementInput);
           if(!success){
               success = TryMove(new Vector2(movementInput.x, 0));
               if(!success){
                   success = TryMove(new Vector2(0, movementInput.y));
               }
           }
        }
    }
    private bool TryMove(Vector2 direction){
       int count = rb.Cast(
            direction,
            movementFilter,
            castCollisions,
            moveSpeed * Time.fixedDeltaTime+collisionOffset);
            if(count == 0){

            rb.MovePosition(rb.position + direction * moveSpeed * Time.fixedDeltaTime);
            return true;
            }
            else{return false;}
    }

    void OnMove(InputValue movementValue){
        movementInput = movementValue.Get<Vector2>();
    }

    void OnCollisionEnter2D(Collision2D col)
    {
  
        if(col.gameObject.tag == "py"){
            
            
            System.Diagnostics.Process.Start("explorer.exe", "C:\\final_project2.exe");


        }

        if(col.gameObject.tag == "c"){
            print("yes");
            
           System.Diagnostics.Process.Start("explorer.exe", "C:\\graph.exe");

        }

        if(col.gameObject.tag == "q"){
            
            
            Application.Quit();
            print("quit");


        }
    }






}
