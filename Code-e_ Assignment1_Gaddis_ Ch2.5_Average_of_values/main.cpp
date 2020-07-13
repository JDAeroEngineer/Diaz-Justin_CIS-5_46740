/* 
 * Author: Justin Diaz
 * Date: July 1st, 2020 8:30pmish
 * Purpose:  calculates average between 5 numbers
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    
         // 5 numbers with the sum and the average of those numbers
    float num1,
          num2,
          num3,
          num4,
          num5,
          sum,
          avg;
    
    //Input or initialize values Here
    
         // User inputs 5 numbers
    cin>>num1>>num2>>num3>>num4>>num5;
         // calculations for sum and average 
    sum = num1 + num2 + num3 + num4 +num5;
    avg = sum/5;
    
    //Process/Calculations Here
    
    //Output Located Here
         // Outputs the average of 5 numbers
     cout<<"Input 5 numbers."<<endl;
     cout<<"The average is "<<avg;
     
    //Exit
    return 0;
}