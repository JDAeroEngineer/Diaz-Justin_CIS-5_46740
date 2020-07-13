/* 
 * File:   main.cpp
 * Author:  Justin Diaz
 * Created on July 6, 2020, 7:15 PM
 * Purpose: Reads in ten whole numbers and outputs  
 *          sum of all the numbers greater than zero, the 
 *          sum of all the numbers less than zero, and the sum 
 *          of all the numbers, whether positive, negative, or zero.
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
    
    int number;  //Inputted 10 numbers
    int totNeg,  //Total negative numbers
        totPos;  //Total positive numbers
    
    //Initialize all known variables
    
    totNeg = totPos = 0;
    
    //Process Inputs to Outputs -> Mapping Process
    
    //Maps known values to the unknown objectives
              
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
             //User Inputs the 10 numbers
    cin>>number;
    totPos += number>0?number:0;
    totNeg += number<0?number:0;
    
    cin>>number;
    totPos += number>0?number:0;
    totNeg += number<0?number:0;
    
    cin>>number;
    totPos += number>0?number:0;
    totNeg += number<0?number:0;
    
    cin>>number;
    totPos += number>0?number:0;
    totNeg += number<0?number:0;
    
    cin>>number;
    totPos += number>0?number:0;
    totNeg += number<0?number:0;
    
    cin>>number;
    totPos += number>0?number:0;
    totNeg += number<0?number:0;
    
    cin>>number;
    totPos += number>0?number:0;
    totNeg += number<0?number:0;
    
    cin>>number;
    totPos += number>0?number:0;
    totNeg += number<0?number:0;
    
    cin>>number;
    totPos += number>0?number:0;
    totNeg += number<0?number:0;
    
    cin>>number;
    totPos += number>0?number:0;
    totNeg += number<0?number:0;
    
    //Display the Inputs/Outputs
    
              //Outputs the negative sum, positive sum, and total sum
    cout<<"Negative sum = "<<setw(3)<<totNeg<<endl;
    cout<<"Positive sum = "<<setw(3)<<totPos<<endl;
    cout<<"Total sum    = "<<setw(3)<<totPos+totNeg;
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}