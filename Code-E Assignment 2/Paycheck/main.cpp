/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 3, 2020, 12:23 AM
 * Purpose:  Calculates gross pay of a job that pays double time after the 40 hours
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
    
    float grosPay, //Gross pay
          payRte,  //Pay rate
          hrsWrk;  //hours worked
    
    //Initialize all known variables
    
         //user inputs pay rate and hours worked
    cin>>payRte>>hrsWrk;
    
        //Calculates gross pay depending on whether or not you worked overtime
    if (hrsWrk>40){
            grosPay = (payRte*40.0f) + (2*payRte) * (hrsWrk - 40);
    }else{ 
        grosPay = payRte*hrsWrk;
    }
    //Process Inputs to Outputs -> Mapping Process
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
          //outputs desired words and gross pay in desired format
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Paycheck = $"<<setw(7)<<grosPay;
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
