/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on June 26, 2020, 11:50 PM
 * Purpose:  Outputs (in cents) the amount of money someone has, made up of   
 *           Quarters, Dimes, Nickels
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
    
        int Qtr, // Quarters
            Dms, // Dimes
            Nkl; // Nickels
                  
    //Initialize all known variables
    
    cout<< "Enter # of Quarters" <<endl;
    cin>>Qtr;    // User Inputs # of Quarters
            
    cout<< "Enter # of Dimes" <<endl;
    cin>>Dms;    // User Inputs # of Dimes
            
    cout<< "Enter # of Nickels" <<endl;
    cin>>Nkl;    // User Inputs # of Nickels 
            
    //Process Inputs to Outputs -> Mapping Process
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
    cout<<"Number of Quarter              = "<<Qtr<<endl;
    cout<<"Number of Dimes                = "<<Dms<<endl;
    cout<<"Number of Nickels              = "<<Nkl<<endl;
    cout<<"Total Amount of Money You Have = "<<(Qtr*25)+(Dms*10)+(Nkl*5)<<"¢"<<endl;
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
    
    
