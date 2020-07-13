  
/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on June 28, 2020, 10:40 PM
 * Purpose:  Calculates the number of gallons needed to paint two coats on a 
 *           wooden fence that is 6 feet high and 100 feet long
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
    
    int nmbGal; // Number of Gallons of Paint Needed
    
    float hghtFen, // Height of Fence 
          lgthFen, // Length of Fence  
          arFenPt, // Total Area That Needs To Be Painted          
          sqftGal; // The Area Covered By Each Gallon of Paint 
   
    //Initialize all known variables
    
    sqftGal = 340.0f;  // In ft^2
    hghtFen = 6.0f;    // In ft
    lgthFen = 100.0f;  // In ft
    arFenPt = hghtFen * lgthFen * 2.0f * 2;  // Calculation Needed To Find Total
                                             // Area That Needs To Be Painted In ft^2
    
    nmbGal = arFenPt/sqftGal + 1;       // Calculated Needed to find The Number  
                                        // of Gallons Needed to Paint The Fence
            
    //Process Inputs to Outputs -> Mapping Process
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
    cout<<"Amount Covered Per Gallon  = "<<sqftGal<<" ft^2"<<endl;
    cout<<"Height of Fence            = "<<hghtFen<<" ft"<<endl;
    cout<<"Length of Fence            = "<<lgthFen<<" ft"<<endl;
    cout<<"Number of Gallons Needed   = "<<nmbGal<<endl;
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
