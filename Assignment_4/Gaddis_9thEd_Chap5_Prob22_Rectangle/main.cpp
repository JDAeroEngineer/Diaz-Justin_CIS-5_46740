/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 11, 2020, 11:22 PM
 * Purpose:  Creates a rectangle made out of an inputted character with 
 *           an inputted number of columns and rows.
 */

//System Libraries

#include <iostream>   //I/O Library
using namespace std;

//User Libraries

//Global Constants only

//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {
    
    //Set the random number seed here
    
    //Declare all variables for this function
    
    int numCr;      //Number inputted for # of columns and rows
    char x;         //Character inputted to make up rectangle
        
    //Initialize all known Variables
            
          // User inputs wanted information
    cin>>numCr>>x;
    
    //Process inputs to Outputs -> Mapping Process
    
          //Processing rectangle with given information
    for (int i = 0; i < numCr; i++){
        for (int i = 0 ; i < numCr; i++){
        cout<<x;
        }
        if (i == numCr-1) break;
        cout<<endl;
    }
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    
    //Exist Stage Right
    
    return 0;
}