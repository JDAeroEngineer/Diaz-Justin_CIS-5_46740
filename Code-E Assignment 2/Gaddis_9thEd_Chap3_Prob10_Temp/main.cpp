/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 2, 2020, 11:40 PM
 * Purpose:  Converts temperature from Fahrenheit to Celsius
 */

//System Libraries

#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants Only

//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {
    
    //Set the random number seed here
    
    //Declare all variables for this function
    
    float tmpinf,   //Temperature in Fahrenheit
          tmpincl;  //Temperature in Celsius
    
    //Initialize all known variables
    
    cin>>tmpinf;  //user inputs temperature in Fahrenheit 
    
    //Process Inputs to Outputs -> Mapping Process
    
            //calculation to convert from Fahrenheit to Celsius
    tmpincl = (5.0/9) * (tmpinf-32);
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
       
           //outputs temperatures in Fahrenheit and Celsius in desired format and desired words
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cout<<setprecision(1)<<fixed;
    cout<<tmpinf<<" Degrees Fahrenheit = "<<tmpincl<<" Degrees Centigrade";
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
