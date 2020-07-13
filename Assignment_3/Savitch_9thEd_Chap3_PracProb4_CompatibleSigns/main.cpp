/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 9, 2020, 6:06 PM
 * Purpose:  Gathers users signs and states whether or not they are
 *           compatible
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
    
    string sig1,   //User inputs sign 1
           sig2;  //User inputs sign 2
           
    //Initialize all known variables
    
               //Outputs desired words and user inputs signs
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sig1>>sig2;
    
    
    //Process Inputs to Outputs -> Mapping Process
    
                  //Processing scenarios by elements
    if (sig1=="Aries"||sig1=="Leo"||sig1=="Sagittarius"&&sig2=="Aries"||
        sig2=="Leo"||sig2=="Sagittarius"){
        cout<<sig1<<" and "<<sig2<<" are compatible Fire signs.";
    }
    else if ((sig1=="Taurus"||sig1=="Virgo"||sig1=="Capricorn")&&(sig2=="Taurus"||
            sig2=="Virgo"||sig2=="Capricorn")){
        cout<<sig1<<" and "<<sig2<<" are compatible Earth signs.";
    }
    else if (sig1=="Gemini"||sig1=="Libra"||sig1=="Aquarius"&&sig2=="Gemini"||
        sig2=="Libra"||sig2=="Aquarius"){
        cout<<sig1<<" and "<<sig2<<" are compatible Air signs.";
    }
    else if (sig1=="Cancer"||sig1=="Scorpio"||sig1=="Pisces"&&sig2=="Cancer"||
        sig2=="Scorpio"||sig2=="Pisces"){
        cout<<sig1<<" and "<<sig2<<" are compatible Water signs.";
    }
                  //Outputs when signs are incompatible
    else{
        cout<<sig1<<" and "<<sig2<<" are not compatible signs.";
    }
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
   
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}
