/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 6, 2020, 10:08 PM
 * Purpose:  Calculates the new retroactive amount paid to 
 *           employee, their new annual salary and new monthly 
 *           salary after a 7.6% pay increase.
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
    
    const float incPer = .076f; //The percentage of increase in pay
    float preAnn,               //The previous annual pay
          retroPy,              //The retroactive pay
          newMon,               //New Monthly pay
          newSaly;              //New Annual salary
    
    //Initialize all known variables
   
    //Process Inputs to Outputs -> Mapping Process
            
          //User Inputs old annual salary
    cout<<"Input previous annual salary."<<endl;
    cin>>preAnn;
    
    //Maps known values to the unknown objectives
    
    retroPy = (incPer * preAnn)/2.0;        //calculation for retroactive pay
    newSaly = (preAnn * incPer) + preAnn;   //New annual salary
    newMon  = newSaly/12.0;                 //New Monthly salary
           
    //Display the Inputs/Outputs
    
            //Outputted Retroactive pay, New Annual pay, and New Monthly pay
    cout<<setprecision(2)<<fixed;
    cout<<"Retroactive pay    = $"<<setw(7)<<retroPy<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<newSaly<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<newMon;
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
