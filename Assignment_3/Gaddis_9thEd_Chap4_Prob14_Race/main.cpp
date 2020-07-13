/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 8, 2020, 10:54 AM
 * Purpose:  Tells who comes in first, second, third, in a race of three people
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
           
    string name1, name2, name3;   //Housing the names of the runners
    int nme1Tm,     //Time for name 1
        nme2Tm,     //Time for name 2
        nme3Tm;     //Time for name 3
    
    //Initialize all known variables
    
                //Outputting desired words and inputting names along with times
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>name1>>nme1Tm>>name2>>nme2Tm>>name3>>nme3Tm;
            
    //Process Inputs to Outputs -> Mapping Process
                  
                //Cannot accept negative values for times 
    while (nme1Tm<0 || nme2Tm<0 || nme3Tm<0){
        cout<<"Error; Cannot Accept Negative Times. Input Times With Positive "
                <<"Values";
        cin>>name1>>nme1Tm>>name2>>nme2Tm>>name3>>nme3Tm;
    }
                //Ranking names in respect to their times and outputting first,
                //second, third.
    if (nme1Tm<nme2Tm&&nme2Tm<nme3Tm){
        cout<<name1<<"\t"<<setw(3)<<nme1Tm<<endl<<name2<<"\t"<<setw(3)<<nme2Tm
                <<endl<<name3<<"\t"<<setw(3)<<nme3Tm;
    }
    else if (nme2Tm<nme1Tm&&nme1Tm<nme3Tm){
        cout<<name2<<"\t"<<setw(3)<<nme2Tm<<endl<<name1<<"\t"<<setw(3)<<nme1Tm
                <<endl<<name3<<"\t"<<setw(3)<<nme3Tm;
    }
    else if (nme1Tm<nme3Tm&&nme3Tm<nme2Tm){
        cout<<name1<<"\t"<<setw(3)<<nme1Tm<<endl<<name3<<"\t"<<setw(3)<<nme3Tm
                <<endl<<name2<<"\t"<<setw(3)<<nme2Tm;
    }
    else if (nme2Tm<nme3Tm&&nme3Tm<nme1Tm){
        cout<<name1<<"\t"<<setw(3)<<nme1Tm<<endl<<name2<<"\t"<<setw(3)<<nme2Tm
                <<endl<<name3<<"\t"<<setw(3)<<nme3Tm;
    }
    else if (nme3Tm<nme2Tm&&nme2Tm<nme1Tm){
        cout<<name3<<"\t"<<setw(3)<<nme3Tm<<endl<<name2<<"\t"<<setw(3)<<nme2Tm
                <<endl<<name1<<"\t"<<setw(3)<<nme1Tm;
    }
    else {
        cout<<name3<<"\t"<<setw(3)<<nme3Tm<<endl<<name1<<"\t"<<setw(3)<<nme1Tm
                <<endl<<name2<<"\t"<<setw(3)<<nme2Tm;
    }
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
