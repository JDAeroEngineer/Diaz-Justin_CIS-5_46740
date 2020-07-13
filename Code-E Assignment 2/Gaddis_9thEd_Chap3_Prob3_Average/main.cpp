/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 1, 2020, 8:52 PM
 * Purpose:  Calculates the average of five test codes
 */

//System Libraries

#include <iostream> //I/O Library
#include <iomanip>  // Formatting Library
using namespace std;

//User Libraries

//Global Constants Only

//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {
    
    //Set the random number seed here
    
    //Declare all variables for this function
    
    float tstScr1, //Test Score 1
          tstScr2, //Test Score 2
          tstScr3, //Test Score 3
          tstScr4, //Test Score 4
          tstScr5, //Test Score 5
          sumTsts, //Sum of test scores
          avgScr;  //Average of test scores
         
            
    //Initialize all known variables
    
    cin>>tstScr1>>tstScr2>>tstScr3>>tstScr4>>tstScr5; //User inputs five test scores
    sumTsts = tstScr1 + tstScr2 + tstScr3 + tstScr4 + tstScr5; //Sum of all test scores 
    avgScr = sumTsts/5; //Calculation for average of five test scores
    
    //Process Inputs to Outputs -> Mapping Process
           
          //Outputs desired words and the average with one decimal place
    cout<<"Input 5 numbers to average."<<endl;  
    cout<<"The average = "<<setprecision(1)<<fixed<<avgScr;
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
