/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 7, 2020, 11:48 AM
 * Purpose:  Sorts 3 name into alphabetical order
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
           
         //Housing names for alphabetizing     
string name1, name2, name3;
    
    //Initialize all known variables
          
            //Outputting desired words and Inputting names to alphabetize 
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
           
            //Creating all scenerios 
    if (name1<name2&&name2<name3){
        cout<<name1<<endl<<name2<<endl<<name3;
    }
    if (name1<name3&&name3<name2){
        cout<<name1<<endl<<name3<<endl<<name2;
    }
    if (name2<name1&&name1<name3){
        cout<<name2<<endl<<name1<<endl<<name3;
    }
    if (name2<name3&&name3<name1){
        cout<<name2<<endl<<name3<<endl<<name1;
    }
    if (name3<name2&&name2<name1){
        cout<<name3<<endl<<name2<<endl<<name1;
    }
    if (name3<name1&&name1<name2){
        cout<<name3<<endl<<name1<<endl<<name2;
    }
    
    //Process Inputs to Outputs -> Mapping Process
    
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
