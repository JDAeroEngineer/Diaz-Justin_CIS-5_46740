/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 12, 2020, 9:56 PM
 * Purpose: Calculate rate of inflation  
 */

//System Libraries

#include <iostream>   //I/O Library
#include <iomanip>    //Formatting Library
using namespace std;

//User Libraries

//Global Constants only

//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {
    
    //Set the random number seed here
    
    //Declare all variables for this function
    
    float pceTdy,   //Price of merchandise today  
          pce1Yr,   //Price of merchandise 1 year ago
          infla;    //Inflation rate    
     
    char resp;      //Response to whether or not the program should run again
   
    //Initialize all known Variables
    
    do {
        if (resp == 'y')cout<<endl;
        
                   //User entering current price of item
        cout<<"Enter current price:"<<endl;
        cin>>pceTdy;

                   //User inputting price of item from 1 year ago
        cout<<"Enter year-ago price:"<<endl;
        cin>>pce1Yr;
                   
                   //Calculation for rate of inflation 
        infla = ((pceTdy - pce1Yr) / pce1Yr)*100.0f;
                 
                   //Outputting Inflation rate as a percent 
        cout<<setprecision(2)<<fixed;
        cout<<"Inflation rate: "<<infla<<"%"<<endl<<endl;
                  
                   //Asking user if the code should run again
        cout<<"Again:"<<endl;
        cin>>resp;
    } while (resp == 'y');
   
    //Process inputs to Outputs -> Mapping Process
    
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    
    //Exist Stage Right
    
    return 0;
}
