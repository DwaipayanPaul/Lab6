/*
a.(By Value) Write a program with a function that takes two int parameters, adds them together, then returns the sum. 
  The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the
  user the sum.


b.(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes 
   a third, pass by reference parameter; then puts the sum in that.*/
                                                                    


#include<iostream>
using namespace std;


int AddSum1(int a, int b)              //#call by value
 {
   int s;
   s=a+b;           //adding a and b, storing to s
   return s;
   }
 


void AddSum2(int a, int b, int &d)     //#call by reference
  {
    d=a+b;          //adding a and b, storing to d
    }
 



int main()
 {
  int a,b,sum1,sum2;
                      //Input two numbers
  cout<<"Enter 1st number=";
  cin>>a;
  cout<<"Enter 2nd number=";
  cin>>b;
  sum1=AddSum1(a,b);  //Call by value
  cout<<sum1<<endl;
  AddSum2(a,b,sum2);  //Call by reference
  cout<<sum2<<endl;
}
