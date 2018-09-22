/*Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
  Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
  Write a main program, that calls the above function based on the input of the user. If the user enters a lower case  
  character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
                                                                                                                 */
#include<iostream>
using namespace std;


char Upper(char inputChar)              //Converting Lower to UpperCase
 {
   int s;
   char up;
   s=inputChar;                  //storing ASCII value
   s-=32;
   up=s;           //  back to Upper Character
   return up;
   }
 


char Lower(char inputChar)              //Converting Upper to LowerCase
  {
   int d;
   char low; 
   d=inputChar;                 //storing ASCII value
   d+=32;
   low=d;          //  back to Lower Character   
   return low;          
    }
 



int main()
 {
  char inputChar,outputChar;
  int a;                    
  cout<<"Enter an character"<<endl;        //Taking character input
  cin>>inputChar;
  a=inputChar;
  if(a>=65 && a<=90)                        //Checking for UpperCase letter
    outputChar=Lower(inputChar);      //Calling Lower() to convert to LowerCase
  else if(a>=97 && a<=122)                  //Checking for LowerCase letter
    outputChar=Upper(inputChar);      //Calling Upper() to convert to UpperCase
  cout<<outputChar<<endl;         //Printing final character
}
