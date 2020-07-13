 /* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on June 27, 2020, 10:13 PM
 * Purpose:  Calculates the amount Kathryn paid for the stocks alone,
 *           the amount of commission paid to the stock broker, and 
 *           the total amount Kathryn paid for the stocks + commission.  
 */

//System Libraries

#include <iostream> //I/O Library
using namespace std;

//User Libraries

//Global Constants Only

//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here

int main(int argc, char** argv) {
    
    //Set the random number seed here
    
    //Declare all variables for this function
    
    float Stck,    // The Individual Stock Kathyrn Purchased
          perCom,  // The Percent Commission Being Paid To Stock Broker                             
          nmbStk;  // The Amount of Stocks being bought 
          
    int totStck, // The Total Amount Kathryn Paid For Stocks Alone
        Comsn,   // The Commission That Kathryn Paid To Her Stock Broker
        totPaid; // The Total Amount Kathryn Paid, Stocks + Commission
          
    //Initialize all known variables
          
     nmbStk = 750.0f; 
     perCom = 0.02f;          // 2% In Decimal Form
     Stck = 35.0f;                   // Price of Each Stock, In Dollars    
     totStck = nmbStk * Stck;           // Calculation To Find Amount Paid For Stocks Alone, In Dollars
     Comsn = (nmbStk * Stck)*(perCom);    // Calculation To Find Commission Paid to Stock Broker, In Dollars
     totPaid = (nmbStk * Stck) + Comsn; // Calculation To Find Total Paid Stocks + Commission, In Dollars
    
    //Process Inputs to Outputs -> Mapping Process
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    
     cout<<"Total Amount Paid for the Stocks ="<<" $"<<totStck<<endl;
     cout<<"Amount Paid for Commission       ="<<" $"<<Comsn<<endl;
     cout<<"Total Amount Paid                ="<<" $"<<totPaid<<endl;
      
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
     
    return 0;
}
