/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 11, 2020, 1:23 PM
 * Purpose:  Calculates the amount paid to a person after inputting 
 *           number of days they worked.
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
   
    int antPidD,     //Amount paid to worker in dollars
        dysWrkd,     //Number of days worked   
        amntPid,     //Amount paid to worker
        dollPla,     //Dollars place for output
        penPla;      //Pennies place for output
    
    //Initialize all known variables
    
    antPidD = 1;
    
         //User inputs days worked
    cin>>dysWrkd;
    
    antPidD = amntPid;
    
    while (dysWrkd < 1){
        cout<<"Error:Negative days worked is not valid"<<endl;
        cin>>dysWrkd;
    }
    
    //Process Inputs to Outputs -> Mapping Process
    
         //Calculation for amount paid to worker
    for (int num = 2; num <= dysWrkd ; num++){
        amntPid *= 2;
        antPidD += amntPid;
    }      
    dollPla = antPidD /100;
    penPla = antPidD%100;
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
     
          //Outputs amount paid
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Pay = $"<<dollPla<<"."<<(penPla < 10? "0":"")<<penPla;
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}


