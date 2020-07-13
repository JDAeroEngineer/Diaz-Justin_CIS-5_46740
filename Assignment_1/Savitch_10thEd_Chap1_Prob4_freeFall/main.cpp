  
/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on June 27, 2020, 5:26 PM
 * Purpose:  Outputs Distance (in ft) Fallen, Given Seconds In The Air by User.
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
    
    int Scds;    // Seconds Inputed
    float Gvty,  // Gravity
          Prod,  // Product of Acceleration (Gravity) * time^2
          Dist;  // Distance Traveled During Freefall
          
    //Initialize all known variables
            
    Gvty = 32.0f; // Gravity = 32 ft/s
  
    cout<< "Enter Time of Freefall in Seconds" <<endl;
    cin>>Scds;      // User Inputs Seconds
    
    Prod = Gvty*(Scds*Scds);
    Dist = Prod/2.0f;
    
    //Process Inputs to Outputs -> Mapping Process
    
    cout<<"Time of Freefall in Seconds ="<<Scds<<"s"<<endl;
    cout<<"Total Distance Traveled     ="<<Dist<<"ft"<<endl;
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
