/* 
 * File:
 * Author: Justin Diaz
 * Date: July 1st, 2020 8pmish
 * Purpose: Outputting numbers 1-4 in desired way 
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Set random number seed here when needed
    
    //Declare variables or constants here
    
        //Numbers 1-4
    float num1, 
          num2,
          num3,
          num4;
          
    //7 characters or less
    
    //Initialize or input data here
    
        //User inputting Numbers 1-4
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    
    //Display initial conditions, headings here

        //displaying Numbers 1-4 in desired way
    cout<<setw(9)<<num1<<setw(10)<<setprecision(1)<<fixed<<num1<<setw(10)<<setprecision(2)<<fixed<<num1<<endl;
    cout<<setw(9)<<setprecision(0)<<num2<<setw(10)<<setprecision(1)<<fixed<<num2<<setw(10)<<setprecision(2)<<fixed<<num2<<endl;
    cout<<setw(9)<<setprecision(0)<<num3<<setw(10)<<setprecision(1)<<fixed<<num3<<setw(10)<<setprecision(2)<<fixed<<num3<<endl;
    cout<<setw(9)<<setprecision(0)<<num4<<setw(10)<<setprecision(1)<<fixed<<num4<<setw(10)<<setprecision(2)<<fixed<<num4;
    
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}

