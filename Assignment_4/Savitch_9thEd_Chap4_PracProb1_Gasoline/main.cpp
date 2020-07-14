/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 12, 2020, 1:10 PM
 * Purpose:  Calculates miles per gallon achieved from car
 */

//System Libraries

#include <iostream>   //I/O Library
#include <iomanip>    //Formatting Library
using namespace std;

//User Libraries

//Global Constants only
        
const float liter = 0.264179f;  // conversion from liters to gallons

//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {
    
    //Set the random number seed here
    
    //Declare all variables for this function
    
    int numLit,    //Number of Liters used
        numMil;    //Number of miles gotten out of the liters used 
            
    float milGal,  //Miles per gallon achieved
          numGal;  //Number of Gallons used
    
    char req;      //Response to whether or not the program should run again
    
    //Initialize all known Variables
              
    do {
        if (req == 'y')cout<<endl;
                 //User inputs number of liters of gasoline used
        cout<<"Enter number of liters of gasoline:"<<endl<<endl;
        cin>>numLit;

                 //User inputs number of miles traveled
        cout<<"Enter number of miles traveled:"<<endl<<endl;
        cin>>numMil;

                 //calculation to turn liters into gallons
                 //and calculation to find miles per gallon
        numGal = liter * numLit;
        milGal = numMil/numGal;
                 //outputting miles per gallon
        cout<<setprecision(2)<<fixed;
        cout<<"miles per gallon:"<<endl;
        cout<<milGal<<endl;
                 //asking user if they want to run the code again
        cout<<"Again:"<<endl;
        cin>>req;
    } while (req == 'y');
    
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exist Stage Right
    
    return 0;
}