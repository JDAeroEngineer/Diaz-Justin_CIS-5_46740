  
/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on June 28, 2020, 3:23 PM
 * Purpose:  Calculates Average Temperatures in New York City, Denver, 
 *           and Phoenix after a 2 percent increase. 
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
    
    int tmpNyc, // Temperature in New York City 
        tmpDen, // Temperature in Denver
        tmpPhx; // Temperature in Phoenix
    float nwtpNyc, // Updated Temperature in New York City 
          nwtpDen, // New Temperature in Denver
          nwtpPhx, // New Temperature in Phoenix
          incTp;   // Percent New Temperatures Increased By
    
    //Initialize all known variable
    
    incTp = 0.02f; // The Percent In Decimal Form
    
           // All Temperatures expressed in Degrees Fahrenheit 
    tmpNyc = 85;   
    tmpDen = 88;   
    tmpPhx = 106;  
    
           //Calculations To Find New Temperatures In The Indicated Cities
    nwtpNyc = (tmpNyc * incTp) + tmpNyc; 
    nwtpDen = (tmpDen * incTp) + tmpDen;
    nwtpPhx = (tmpPhx * incTp) + tmpPhx;
           
    //Process Inputs to Outputs -> Mapping Process
   
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
    cout<<" New Temperature in New York City = "<<nwtpNyc<<"°F"<<endl;
    cout<<" New Temperature in Denver        = "<<nwtpDen<<"°F"<<endl;
    cout<<" New Temperature in Phoenix       = "<<nwtpPhx<<"°F"<<endl; 
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
