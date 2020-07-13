/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 3, 2020, 12:05 AM
 * Purpose: Calculates the sine, cosine, and tangent of an angle that is inputted
 */

//System Libraries

#include <iostream>  //I/O Library
#include <cmath>     //Math Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants Only

const float PI = 4 * atan(1.0);  //Declaring the Mathematical constant PI

//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {
    
    //Set the random number seed here
    
    //Declare all variables for this function
    
    float iptangl,  //User inputted angle
          rad;      //Converted inputted angle into radians
    
    //Initialize all known variables
    
               //Outputting desired words
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    
    cin>>iptangl;  //User inputting angle
    
    //Process Inputs to Outputs -> Mapping Process
    
    rad = iptangl * (PI/180.0);  // Calculation to convert angle in degrees to radians
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
                    //Outputted the Sine, Cosine, and Tangent of the inputted angle
    cout<<setprecision(0)<<fixed<<"sin("<<iptangl<<") = "<<setprecision(4)<<fixed<<sin(rad)<<endl;
    cout<<setprecision(0)<<fixed<<"cos("<<iptangl<<") = "<<setprecision(4)<<fixed<<cos(rad)<<endl;
    cout<<setprecision(0)<<fixed<<"tan("<<iptangl<<") = "<<setprecision(4)<<fixed<<tan(rad);
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
