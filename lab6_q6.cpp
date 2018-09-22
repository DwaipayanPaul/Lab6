/*Sum of even and odd
Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
Write a main program. 
Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
Then display the values
  */
#include<iostream>
using namespace std;
int sumEvenNumbers(int firstNum,int secondNum)  //the sum of all even numbers between firstNum and secondNum
 {
   int sum=0,h;
   int i=firstNum+1;
   while(i<secondNum)                     // between firstNum and secondNum
    {
     h=i%2;
     if(h==0)
      sum=sum+i;                            //adding all even numbers
     i++;
     }  
   return sum;                                //returning the sum
   }
int sumOddNumbers(int firstNum,int secondNum)   //the sum of all odd numbers between firstNum and secondNum
 {
   int sum=0,h;
   int i=firstNum+1;
   while(i<secondNum )                      // between firstNum and secondNum
    {
     h=i%2;
     if(h!=0)
      sum=sum+i;                           //adding all odd numbers
     i++;
     }  
   return sum;
   }
int sumSquareOddNumbers(int firstNum,int secondNum)     // the sum of the square of the odd numbers between firstNum and secondNum
 {
   int sum=0;
   for(int i=firstNum+1;i<secondNum;i++)                          // between firstNum and secondNum
    {
     if(i%2!=0)
      sum+=i*i;                            //adding squares of odd numbers
     }  
   return sum;
   }
int sumSquareEvenNumbers(int firstNum,int secondNum)   // the sum of the square of the even numbers between firstNum and secondNum
 {
   int sum=0;
   for(int i=firstNum+1;i<secondNum;i++)              // between firstNum and secondNum
    {
     if(i%2==0)
      sum+=i*i;                                   //adding squares of even numbers
     }  
   return sum;
   }

int main()
 {
  int sumEven,sumOdd,sumSquareEven,sumSquareOdd,firstNum,secondNum;
  cout<<"Enter 1st number=";
  cin>>firstNum;                                      //Taking user-input for firstNum
  cout<<"Enter 2nd number=";
  cin>>secondNum;                                    //Taking user-input for secondNum
  sumEven=sumEvenNumbers(firstNum,secondNum);           //call by value-the sum of all even numbers between firstNum and secondNum
  sumOdd=sumOddNumbers(firstNum,secondNum);               //call by value-the sum of all odd numbers between firstNum and secondNum
  sumSquareEven=sumSquareEvenNumbers(firstNum,secondNum);   // call by value-the sum of the square of the even numbers between firstNum and secondNum
  sumSquareOdd=sumSquareOddNumbers(firstNum,secondNum);   // call by value-the sum of the square of the odd numbers between firstNum and secondNum
  /*    Displaying all values
                                    */
  cout<<"the sum of all even numbers between firstNum and secondNum="<<sumEven<<endl;
  cout<<"the sum of all odd numbers between firstNum and secondNum="<<sumOdd<<endl;
  cout<<"the sum of the square of the even numbers between firstNum and secondNum="<<sumSquareEven<<endl;
  cout<<"the sum of the square of the odd numbers between firstNum and secondNum="<<sumSquareOdd<<endl;
  }
  
