/*
  By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.
(By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.
*/
#include<iostream>
using namespace std;
int Min1(int a, int b)                    //@call by value
 {
   int s;
                              //Finding minimum
   if(a>b)
   s=b;
   else
   s=a;
   return s;                   //returning value of s
   }
 void Min2(int a, int b, int &d)      //@call by reference 
  {
   
                                            //Finding minimum
   if(a>b) 
   d=b;
   else
   d=a;
    }
 
int main()
 {
  int a,b,c,d;
                          //Input two numbers
  cout<<"Enter 1st number=";
  cin>>a;
  cout<<"Enter 2nd number=";
  cin>>b;
  c=Min1(a,b);                            // Call by Value
  cout<<c<<endl;
  Min2(a,b,d);                          // Call by reference
  cout<<d<<endl;
}
