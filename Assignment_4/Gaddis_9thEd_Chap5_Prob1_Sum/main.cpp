/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 11, 2020, 12:43 PM
 * Purpose:  Sums up all numbers before the inputted number
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
    
    int sum,      //Sum of all number starting at 1 to number inputted
        inpNum;   //User inputed number
    
    //Initialize all known variables
    
    sum = 0;
    
          //User inputting Number
    cin>>inpNum;
    
    //Process Inputs to Outputs -> Mapping Process
          
          //processing the calculation to find "sum"
    for (int num = 1; num <= inpNum; num++){
        sum += num;
    }
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
         //Outputting sum  
    cout<<"Sum = "<<sum;
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}


