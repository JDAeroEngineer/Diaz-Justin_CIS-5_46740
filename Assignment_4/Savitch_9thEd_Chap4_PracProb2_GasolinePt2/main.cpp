/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 12, 2020, 2:58 PM
 * Purpose:  Calculates miles per gallon achieved from 2 cars
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
    
    int numLit1,    //Number of Liters used in car 1
        numMil1,    //Number of miles gotten out of the liters used in car 1 
        numLit2,    //Number of Liters used in car 2
        numMil2;    //Number of miles gotten out of the liters used in car 2 
    
    float milGal1,  //Miles per gallon achieved in car 1
          numGal1,  //Number of Gallons used in car 1
          milGal2,  //Miles per gallon achieved in car 2
          numGal2;  //Number of Gallons used in car 2
    
    char req;      //Response to whether or not the program should run again
    
    //Initialize all known Variables
              
    do {
        if (req == 'y')cout<<endl;
        
                 //User inputs number of liters of gasoline used in car 1
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>numLit1;

                 //User inputs number of miles traveled in car 1
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>numMil1;

                 //calculation to turn liters into gallons for car 1
                 //and calculation to find miles per gallon for car 1
        numGal1 = liter * numLit1;
        milGal1 = numMil1/numGal1;
        
                 //outputting miles per gallon for car 1
        cout<<setprecision(2)<<fixed;
        cout<<"miles per gallon: "<<milGal1<<endl<<endl;
        
        //User inputs number of liters of gasoline used in car 2
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>numLit2;

                 //User inputs number of miles traveled in car 2
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>numMil2;

                 //calculation to turn liters into gallons for car 2
                 //and calculation to find miles per gallon for car 2
        numGal2 = liter * numLit2;
        milGal2 = numMil2/numGal2;
        
                 //outputting miles per gallon for car 2
        cout<<setprecision(2)<<fixed;
        cout<<"miles per gallon: "<<milGal2<<endl<<endl;
                
                 //Figuring out which car is more fuel efficient
        if (milGal1 > milGal2){
        cout<<"Car 1 is more fuel efficient"<<endl<<endl;
        }
        if (milGal2 > milGal1){
        cout<<"Car 2 is more fuel efficient"<<endl<<endl;
        }
                 //asking user if they want to run the code again
        cout<<"Again:"<<endl;
        cin>>req;
    } while (req == 'y');
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exist Stage Right
    
    return 0;
}