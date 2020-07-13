/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on June 25, 2020, 11:47 PM
 * Purpose: Calculates the percentage the military budget takes up of the
 *          federal budget  
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
    
    float milBdgt, // Military Budget 
          fedBdgt, // Federal Budget
          mlPrcnt; // Military Budget Percent
    
    //Initialize all known variables
    
    milBdgt = 7.0e11f; // Military Budget = 700 Billion
    fedBdgt = 4.1e12f; // Federal Budget = 4.1 Trillion 
    
    //Process Inputs to Outputs -> Mapping Process3
    
     mlPrcnt = milBdgt/fedBdgt*100; // Calculation for Military Budget Percent         
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
     
    cout<<"2018 Federal Budget     = $"<<fedBdgt/1.0e12<<" Trillion"<<endl;
    cout<<"2018 Military Budget    =   $"<<milBdgt/1.0e11<<" Billion"<<endl;
    cout<<"Military Budget Percent =   "<<mlPrcnt<<"%"<<endl;

    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    return 0;
}