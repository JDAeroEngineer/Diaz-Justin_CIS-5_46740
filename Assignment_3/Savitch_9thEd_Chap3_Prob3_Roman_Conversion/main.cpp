/* 
 * File:   main.cpp
 * Author: Justin Diaz
 * Created on July 9, 2020, 3:40 PM
 * Purpose:  Converts English numerals to Roman numerals
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
    
    string romNum; //Roman numeral output
    
    int numbCn;  //Number to convert
    
    //Initialize all known variables
    
               //Outputting desired words and Inputting number to be converted
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>numbCn;
    int numbr = numbCn;
    
    //Process Inputs to Outputs -> Mapping Process
    
          //Processing scenarios 
    if(numbCn>1000 && numbCn<3000){
          
          //Processing thousands place to Roman numerals
    char numTho = numbCn/1000;
    if (numTho==3) romNum+="MMM";
    if (numTho==2) romNum+="MM";
    if (numTho==1) romNum+="M";
    
          //Processing hundreds place to Roman numerals
         numbCn -= numTho*1000;
    char numHun = numbCn/100;
    if (numHun==9) romNum+="CM";
    if (numHun==8) romNum+="DCCC";
    if (numHun==7) romNum+="DCC";
    if (numHun==6) romNum+="DC";
    if (numHun==5) romNum+="D";
    if (numHun==4) romNum+="CD";
    if (numHun==3) romNum+="CCC";
    if (numHun==2) romNum+="CC";
    if (numHun==1) romNum+="C";
    
          //Processing tens place to Roman numerals
         numbCn -= numHun*100;
    char numTen = numbCn/10;
    if (numTen==9) romNum+="XC";
    if (numTen==8) romNum+="LXXX";
    if (numTen==7) romNum+="LXX";
    if (numTen==6) romNum+="LX";
    if (numTen==5) romNum+="L";
    if (numTen==4) romNum+="XL";
    if (numTen==3) romNum+="XXX";
    if (numTen==2) romNum+="XX";
    if (numTen==1) romNum+="X";
    
          //Processing ones place to Roman numerals
    char numOne = numbCn%10;
    if (numOne==9) romNum+="IX";
    if (numOne==8) romNum+="VIII";
    if (numOne==7) romNum+="VII";
    if (numOne==6) romNum+="VI";
    if (numOne==5) romNum+="V";
    if (numOne==4) romNum+="IV";
    if (numOne==3) romNum+="III";
    if (numOne==2) romNum+="II";
    if (numOne==1) romNum+="I";

    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
          
           //Outputting Roman Numeral
    cout<<numbr<<" is equal to "<<romNum;
    }
           //If number inputted was out of range: #<1000 or #>3000    
    else {
        cout<<numbCn<<" is Out of Range!";
    }
    //Clean up the code, close files, deallocate memory, etc....
    
    //Exit stage right
    
    return 0;
}