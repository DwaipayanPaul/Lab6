/*
  Write a program that includes the above three (2,3,4) functions. 
  Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
                                      */
#include<iostream>
using namespace std;
int AddSum1(int a, int b)                    // takes two int parameters, adds them together, then returns the sum
 {
   int s;
   s=a+b;                                   //adding two numbers
   return s;
   }
int Max1(int a, int b)                       //takes two int parameters, finds the maximum, then returns the maximum
 {
   int s;
   if(a>b)                                 //checking which is greater
   s=a;
   else
   s=b;
   return s;
   }
int Min1(int a, int b)                      //takes two int parameters, finds the min, then returns the minimum
 {
   int s;
   if(a>b)                                 //checking which is minimum
   s=b;  
   else
   s=a;
   return s;
   }
int main()
 {
  int a,b,c,d,h;
  // Taking two numbers as input
  cout<<"Enter 1st number=";
  cin>>a;
  cout<<"Enter 2nd number=";
  cin>>b;
                               //Choices
  cout<<"Which operation you want to perform?"<<endl;
  cout<<"2.Sum of two numbers  3.Maximum of two numbers  4.Minimum of two numbers"<<endl;
  cin>>h;
  if(h==3)
  c=Max1(a,b);                // CALL BY VALUE-maximum
  else if(h==2)
  c=AddSum1(a,b);              // CALL BY VALUE-addition
  else if(h==4)
  c=Min1(a,b);                // CALL BY VALUE-minimum
  cout<<c<<endl;
  }
