/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 7, 2020, 5:20 PM
 * Purpose: Computes the bank's service fees after inputing the 
 *          beginning balance and the number of checks written.
 */

//System Libraries

#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants Only

//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {

    //Set the random number seed here

    //Declare all variables for this function
    
    int bnkFee;    //Monthly Bank Fee
    float begBal,  //Beginning Balance of account 
          nmbChk,  //Number of Checks written
          chkFee,  //Check Fee
          lowBal,  //Low Balance
          newBal;  //New Balance 
    const float montFee  = 10.0f; //Monthly Fee
    
    //Initialize all known variables
 
                //Outputs desired words and User inputs number of checks written 
                //and beginning balance
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>begBal>>nmbChk;
   
    //Process Inputs to Outputs -> Mapping Process
    
    while (nmbChk < 0){
        cout<<"Error: Cannot accept negative number of checks";
    }
    while (begBal < 0){
        cout<<"Your Account is Overdrawn";
    }
                //if someone buys fewer than 20 checks
    if (begBal > 0 && nmbChk < 20.0f && nmbChk > 0 ){
        chkFee = (nmbChk * .10f);
        if (begBal < 400){
            lowBal = 15.0f;
            newBal = begBal - chkFee - montFee - lowBal;
        }
        else {
            lowBal = 0.0f;
            newBal = begBal - chkFee - montFee - lowBal;
        }   
    }
                //if someone buys greater than or equal to 20 but less than or equal to 39, checks
    else if (begBal > 0 && nmbChk >= 20 && nmbChk<=39){
        chkFee = (nmbChk * .08f);
        if (begBal < 400){
            lowBal = 15.0f;
            newBal = begBal - chkFee - montFee - lowBal;
        }
        else {
            lowBal = 0.0f;
            newBal = begBal - chkFee - montFee - lowBal;
        } 
    }
                //if someone buys greater than or equal to 40 but less than or equal to 59, checks
    else if (begBal > 0 && nmbChk >= 40 && nmbChk<=59){
        chkFee = (nmbChk * .06f);
        if (begBal < 400){
            lowBal = 15.0f;
            newBal = begBal - chkFee - montFee - lowBal;
        }
        else {
            lowBal = 0.0f;
            newBal = begBal - chkFee - montFee - lowBal;
        }
    }
               //if someone buys greater than or equal to 60 number of checks
    else {
        chkFee = (nmbChk * .04f);
        if (begBal < 400){
            lowBal = 15.0f;
            newBal = begBal - chkFee - montFee - lowBal;
        }
        else {
            lowBal = 0.0f;
            newBal = begBal - chkFee - montFee - lowBal;
        }
       }
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
              //Outputing the desired numbers
        cout<<setprecision(2)<<fixed<<showpoint;
        cout<<"Balance     $"<<setw(9)<<begBal<<endl;
        cout<<"Check Fee   $"<<setw(9)<<chkFee<<endl;
        cout<<"Monthly Fee $"<<setw(9)<<montFee<<endl;
        cout<<"Low Balance $"<<setw(9)<<lowBal<<endl;
        cout<<"New Balance $"<<setw(9)<<newBal;
        
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
