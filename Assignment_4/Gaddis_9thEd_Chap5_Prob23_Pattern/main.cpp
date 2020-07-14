/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 11, 2020, 11:47 PM
 * Purpose:  displays a sideways triangle
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
    
    int x;    //variable for inputted 10
    
    //Initialize all known Variables
    
        //User inputs desired size of sideways triangle 
    cin>>x;
    
    //Process inputs to Outputs -> Mapping Process
    
               //Creating ascending portion of sideways triangle
    for (int iA = 0; iA < x; iA++){
        for (int k = 0; k <= iA ; k++){
            cout<<"+";
        }
        cout<<endl<<endl;
    }
               //Creating descending portion of sideways triangle 
    for (int iD = x; iD> 0; iD--){
        for (int k = iD; k > 0; k--){
            cout<<"+";
        }
        if (iD == 1) break;
        else cout<<endl<<endl;
    }
    
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    
    //Exist Stage Right
    
    return 0;
}