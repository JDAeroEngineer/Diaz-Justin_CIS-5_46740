/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 12, 2020, 10:59 PM
 * Purpose:  Calculating price in 2 years from 2 items due to an inflation rate
 */

//System Libraries

#include <iostream>   //I/O Library
#include <iomanip>    //Formatting Library
using namespace std;

//User Libraries

//Global Constants only

//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {
    
    //Set the random number seed here
    
    //Declare all variables for this function
            
    float pceTdy,    //Price of item today  
          pce1Yr,    //Price of item, 1 year ago
          infla1,    //Inflation rate of item
          prce1Y,    //Price of item , in 1 year
          prce2Y,    //Price of item , in 2 years
          infla2;    //Second Inflation rate of item
    
    char resp;      //Response to whether or not the program should run again
    
    //Initialize all known Variables
             
    do {
        if (resp == 'y')cout<<endl;
        
                  //User entering current price of item
        cout<<"Enter current price:"<<endl;
        cin>>pceTdy;

                  //User inputting price of item from 1 year ago
        cout<<"Enter year-ago price:"<<endl;
        cin>>pce1Yr;
                   
                  //Calculation for rate of inflation 
        infla1 = ((pceTdy - pce1Yr) / pce1Yr)*100.0f;
                
                  //Outputting Inflation rate as a percent 
        cout<<setprecision(2)<<fixed;
        cout<<"Inflation rate: "<<infla1<<"%"<<endl<<endl;
        
                  //Calculating price in one year
        prce1Y = ((infla1/100.0f) * pceTdy) + pceTdy;
               
                  //Calculating inflation rate for year 2 as a decimal
        infla2 = (prce1Y - pceTdy)/pceTdy;
        
                 //Calculating price of item after second year
        prce2Y = (infla2 * prce1Y) + prce1Y;
                
                 //Outputting price in one year and in two years
        cout<<"Price in one year: $"<<prce1Y<<endl;
        cout<<"Price in two year: $"<<prce2Y<<endl<<endl;
                
                 //Asking user if the code should run again
        cout<<"Again:"<<endl;
        cin>>resp;
    } while (resp == 'y');
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exist Stage Right
    
    return 0;
}
