/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 13, 2020, 5:30 PM
 * Purpose:  Showing max of first 2 numbers inputted then showing max
 *           of all 3 numbers inputted.
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
    
    float a,           //User input 1 
          b,           //User input 2
          c,           //User input 3
          maxFr2,      //Max input of first 2 inputted
          maxAll3;     //Max of all 3 inputs
    
    //Initialize all known Variables
    
             //User inputs 3 numbers
    cout<<"Enter first number:"<<endl<<endl;
    cin>>a;
    cout<<"Enter Second number:"<<endl<<endl;
    cin>>b;
    cout<<"Enter third number:"<<endl<<endl;
    cin>>c;
    
    //Process inputs to Outputs -> Mapping Process
    
            //Processing max of first 2 numbers inputted
    (a>b? maxFr2 = a : maxFr2 = b);
    
            //Processing max of all 3 numbers inputted
    if (a>b && a>c){
        maxAll3 = a;
    }
    
    if (b>a && b>c){
        maxAll3 = b;
    }
    
    if (c>a && c>b){
        maxAll3 = c;
    }
  
    //Display the Inputs/Outputs
     
            //Outputting largest number from first 2 numbers inputted
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<maxFr2<<endl<<endl;
     
            //Outputting largest number from all 3 numbers inputted
    cout<<"Largest number from three parameter function:"<<endl;
    cout<<maxAll3<<endl;
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exist Stage Right
    
    return 0;
}
                  