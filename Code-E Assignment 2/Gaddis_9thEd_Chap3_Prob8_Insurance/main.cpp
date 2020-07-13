/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 2, 2020, 11:26 PM
 * Purpose:  Calculates the amount of insurance you should buy
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
    
    float cstofhs, //cost of your house
          ctofinc; //cost of insurance
            
    //Initialize all known variables
    
    cin>>cstofhs;  //user inputs cost of house
    
    //Process Inputs to Outputs -> Mapping Process
    
    ctofinc = (cstofhs * 0.8f);   //calculation of the cost of insurance
            
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
   
           //outputs cost of insurance and desired words
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cout<<"You need $"<<ctofinc<<" of insurance.";
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}


