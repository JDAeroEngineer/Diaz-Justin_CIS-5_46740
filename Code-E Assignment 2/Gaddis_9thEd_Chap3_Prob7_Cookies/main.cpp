/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 2, 2020, 10:55 PM
 * Purpose:  Calculates the amount of calories you consumed 
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
    
    float cokietn,  //cookies eaten
          clprcki,  //calories per cookie
          cal;      //calories
    
    //Initialize all known variables
    
    cin>>cokietn;   //user inputs amount of cookies eaten
    
    //Process Inputs to Outputs -> Mapping Process
    
    cal = cokietn * 75.0f;  //calculation for amount of calories consumed
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
           
            //outputs number of calories consumed and desired words
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cout<<"You consumed "<<cal<<" calories.";
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
