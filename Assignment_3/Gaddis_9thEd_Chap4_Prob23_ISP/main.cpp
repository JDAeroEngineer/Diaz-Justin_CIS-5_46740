/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 8, 2020, 10:50 PM
 * Purpose:  Calculates customer's monthly bill
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
    
    char pckChse; //The package the customer chose
    int numHrs;   //The number of hours customer used service
    float monBil; //Monthly Bill
          
    //Initialize all known variables
    
           //Outputting desired words and inputting package chosen and amount 
           //of hours used 
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pckChse>>numHrs;
    
    //Process Inputs to Outputs -> Mapping Process
                
           //Cannot Accept number of hours greater than 744 and cannot accept 
           //packages other than A, B, C
    while (numHrs > 744 || pckChse != 'A' && pckChse != 'B'&& pckChse != 'C'){
        cout<<"Error: Cannot Accept Number of Hours greater than 744 & Cannot"<<
                " Accept Package Choice Besides A or B or C. Input Acceptable "<<
                "Values";
        cin>>pckChse>>numHrs;   
    }      
           //Processing Scenarios if user chooses package A
    if (pckChse == 'A' && numHrs <= 10){
         monBil = 9.95f;    
    }
    if (pckChse == 'A' && numHrs > 10){
         monBil =((numHrs - 10) * 2) + 9.95f;
    }
           //Processing Scenarios if user chooses package B
    if (pckChse == 'B' && numHrs <= 20){
         monBil = 14.95f;    
    }
    if (pckChse == 'B' && numHrs > 20){
         monBil =((numHrs - 20) * 1) + 14.95f;   
    }
          //Processing Scenarios if user chooses package C
    if (pckChse == 'C'){
         monBil = 19.95f;
    }
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
           
           //Outputting Monthly Bill
    cout<<"Bill = $ "<<monBil;
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
