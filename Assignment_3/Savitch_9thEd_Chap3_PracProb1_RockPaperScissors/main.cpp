/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 9, 2020, 2:19 PM
 * Purpose:  Determines the winner of a Rock, Paper, Scissors game
 */

//System Libraries

#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only

//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {
    
    //Set the random number seed here
    
    //Declare all variables for this function
    
    char x, y;   // x = User 1 choice , y = User 2 choice
    
    //Initialize all known variables
    
          //Outputs the desired words and users inputs Rock, Paper, or Scissors
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>x>>y;
    
    x=((x>=97)?x-32:x); //Converts lower case user 1 input to upper case 
    y=((y>=97)?y-32:y); //Converts lower case user 2 input to upper case 
    
    //Process Inputs to Outputs -> Mapping Process
              
                 //Processes Scenerios
    if (x==y){
        cout<<"Nobody Wins.";
    }
    if (x>y){
        if (x=='R' && y=='S'){
            cout<<"Rock breaks scissors.";
        }
        else if (x=='P' && y=='R'){
            cout<<"Paper covers rock.";
        }
        else if (x=='S' && y=='P'){
            cout<<"Scissors cuts paper.";
        }
        else if (x=='S' && y=='R'){
            cout<<"Rock breaks scissors.";
        }
        else if (x=='R' && y=='P'){
            cout<<"Paper covers rock.";
        }
        else if (x=='P' && y=='S'){
            cout<<"Scissors cuts paper.";
        }
    }
    if (x<y){
        if (x=='R' && y=='S'){
            cout<<"Rock breaks scissors.";
        }
        else if (x=='P' && y=='R'){
            cout<<"Paper covers rock.";
        }
        else if (x=='S' && y=='P'){
            cout<<"Scissors cuts paper.";
        }
        else if (x=='S' && y=='R'){
            cout<<"Rock breaks scissors.";
        }
        else if (x=='R' && y=='P'){
            cout<<"Paper covers rock.";
        }
        else if (x=='P' && y=='S'){
            cout<<"Scissors cuts paper.";
        } 
    }      
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
