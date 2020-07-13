/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 6, 2020, 8:02 PM
 * Purpose:  Calculates the amount of soda can friend can drink without dieing
 */

//System Libraries

#include <iostream>  //I/O Libraryp
using namespace std;

//User Libraries

//Global Constants Only

//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {
    
    //Set the random number seed here
    
    //Declare all variables for this function
    
    const float totSwet = .001f, //amount of sweetener per can
                gramLbs = 45359.2f/100; 
    
    int numbCan;       //Number of Cans without killing friend 
    
    float masDet,      //Mass of Dieter in lbs
          masDetg,     //Mass of Dieter in Grams   
          masKill,     //Mass of Sweetener to kill friend 
          masMous,     //Mass of Mouse
          masKilM,     //Mass of Sweetener to kill Mouse
          masSoda,     //Mass of Soda can 
          masSweS;         
     
    //Initialize all known variables
    
    masSoda = 350.0f;
    masMous = 35.0f;
    masKilM = 5.0f;
    
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>masDet;
    
    //Process Inputs to Outputs -> Mapping Process
    
    //Maps known values to the unknown objectives
    
    masDetg = gramLbs * masDet;
    masKill = (masKilM * masDetg)/masMous;
    masSweS = masKill/totSwet;
    numbCan = masSweS/masSoda; 
  
    //Display the Inputs/Outputs
    
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<numbCan<<" cans";
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
