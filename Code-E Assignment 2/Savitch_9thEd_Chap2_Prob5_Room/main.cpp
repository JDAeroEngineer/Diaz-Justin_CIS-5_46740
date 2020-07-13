/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 6, 2020, 4:11 PM
 * Purpose:  Tells user if there is either an excess amount of people in a room 
 *           or too few amount of people in a room
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
    
    int maxCap,  //Max Capacity of Room
        amntPpl, //Amount of People
        incPpl,  //Increase of People 
        decPpl;  //Decrease of People
        
    //Initialize all known variables
    
            cin>>maxCap>>amntPpl;  //User inputs max capacity and amount of people 
    
    //Process Inputs to Outputs -> Mapping Process
                  
            //If Max Capacity is greater than or equal to amount of people outputs 
            //amount of people you have to decrease by.
    if (maxCap >= amntPpl){
        incPpl = maxCap - amntPpl;
        cout<<"Input the maximum room capacity and the number of people"<<endl;
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<incPpl<<" will be allowed without violation.";
    }
            //If Max Capacity is less than or equal to amount of people outputs 
            //amount of people you have to increase by.
    if (maxCap <= amntPpl){
        decPpl = amntPpl - maxCap;
        cout<<"Input the maximum room capacity and the number of people"<<endl;
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<decPpl<<" to avoid fire violation.";
    }
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
        
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
