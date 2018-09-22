/*
 a.(By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum.
   The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user
   the maximum.
 b.(By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a
   third, pass by reference parameter; then puts the maximum in that.
  */

#include<iostream>
using namespace std;


int Max1(int a, int b)               //@call by value
  {
   int s;
                                //Finding maximum
   if(a>b)
   s=a;
   else
   s=b;
   return s;   //returning value of s
   }


 void Max2(int a, int b, int &d)      //@call by reference 
  {
                               //Finding maximum
   if(a>b) 
   d=a;
   else
   d=b;
    }
 


int main()
 {
  int a,b,c,d;
                             //Input two numbers
  cout<<"Enter 1st number=";
  cin>>a;
  cout<<"Enter 2nd number=";
  cin>>b;
  c=Max1(a,b);             // Call by Value
  cout<<c<<endl;  
  Max2(a,b,d);             // Call by reference
  cout<<d<<endl;
}
