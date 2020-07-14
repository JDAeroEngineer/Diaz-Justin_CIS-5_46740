/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 11, 2020, 6:50 PM
 * Purpose:  Shows largest and smallest number of numbers inputted
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
    
    int numb,       //Numbers inputted by user
        smllNum,    //Smallest number inputted
        bigNum;     //Biggest number inputted
    
    //Initialize all known Variables
               
          //User inputs integers   
    cin>>numb;
    
    smllNum = bigNum = numb;
    
    //Process inputs to Outputs -> Mapping Process
    
             //user inputs integers until -99 
    while (numb != -99){
         if (numb < smllNum){
            smllNum = numb;
         }
         if (numb > bigNum){
            bigNum = numb;
         }
         cin>>numb;
    }
    
    //Display the Inputs/Outputs

               //Displaying smallest number and largest number
    cout<<"Smallest number in the series is "<<smllNum<<endl;
    cout<<"Largest  number in the series is "<<bigNum;
    
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exist Stage Right
    
    return 0;
}