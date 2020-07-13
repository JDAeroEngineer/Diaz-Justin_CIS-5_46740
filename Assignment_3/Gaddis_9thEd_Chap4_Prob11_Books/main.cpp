/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 7, 2020, 4:17 PM
 * Purpose:  Calculates the amount of points someone had based on the number
 *           of books they bought 
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
    
    int numBkP, //Number of books bought
        pntErn; //Number of points earned
    
    //Initialize all known variables
 
                //Outputs desired words and User inputs number of books bought
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>numBkP;
            
                //if someone buys 0 books 0 points are earned
    if (numBkP == 0){   
        pntErn = 0;
        cout<<"Books purchased =  "<<numBkP<<endl;
        cout<<"Points earned   = "<<pntErn;
    }
                //if someone buys 1 books 5 points are earned
    if (numBkP == 1){
        pntErn = 5;
        cout<<"Books purchased =  "<<numBkP<<endl;
        cout<<"Points earned   = "<<pntErn;
    }
                //if someone buys 2 books 15 points are earned
    if (numBkP == 2){
        pntErn = 15;
        cout<<"Books purchased =  "<<numBkP<<endl;
        cout<<"Points earned   = "<<pntErn;
    }
                //if someone buys 3 books 30 points are earned
    if (numBkP == 3){
        pntErn = 30;
        cout<<"Books purchased =  "<<numBkP<<endl;
        cout<<"Points earned   = "<<pntErn;
    }
                //if someone buys 4 or more books 60 points are earned
    if (numBkP >= 4){
        pntErn = 60;
        cout<<"Books purchased =  "<<numBkP<<endl;
        cout<<"Points earned   = "<<pntErn;
    }
    //Process Inputs to Outputs -> Mapping Process
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
