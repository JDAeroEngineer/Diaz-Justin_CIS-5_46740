  
/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on June 26, 2020, 5:20 PM
 * Purpose:  User Inputs 2 Integers then the program outputs the
 *           sum of those 2 integers and the product of those 2 integers
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
    
    int int1, // Integer 1
        int2, // Integer 2
        sum,  // Sum of both Integers
        prod; // Product of both Integers
    
    //Initialize all known variables
    
    cout<< "Enter Integer 1" <<endl;
    cin>>int1;   // User Inputs Integer 1
    
    cout<< "Enter Integer 2" <<endl;
    cin>>int2;   // User Inputs Integer 2
    
    //Process Inputs to Outputs -> Mapping Process
    
    sum = int1 + int2;  // Calculation for sum of integer 1 & 2
    prod = int1 * int2; //Calculation for Product of Integer 1 & 2
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
    cout<<"Integer 1                  = "<<int1<<endl;
    cout<<"Integer 2                  = "<<int2<<endl;
    cout<<"Sum of Integer 1 & 2       = "<<sum<<endl;
    cout<<"Product of Integer 1 & 2   = "<<prod<<endl;
    
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
