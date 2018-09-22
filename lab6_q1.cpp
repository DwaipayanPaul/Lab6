
#include<iostream>
using namespace std;

/*
Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
*/
void returnvalue(int &unitCst, int & units, int & taxRt)
{
 /* Obtains values from user
                               */
 cout << "Enter unitCst=";
 cin >> unitCst;
 cout << "Enter units=";
 cin >> units;
 cout << "Enter taxRt=";
 cin >> taxRt;
 }

/*
Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
*/

void SalesTax(int unitCst, int units, int taxRt, int &salesTx, int &totDue)
 {
    // that receives the unitCst, units, and taxRt
  salesTx = taxRt *(units * unitCst);                                  //Sales tax = Units * Unit Cost * rate
  totDue =salesTx + (units * unitCst);                                //Total = sales tax + (units * unit cost)
// returns to the calling module the salesTx and totDue
}



/*
Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
*/
void display(int unitCst, int units, int taxRt, int salesTx, int totDue)
{                                                 //Displaying all the values
 cout<<"Value of unitCst="<<unitCst<<endl;;
 cout<<"Value of units="<<units<<endl;
 cout<<"Value of taxRt="<<taxRt<<endl;
 cout<<"Value of salesTx="<<salesTx<<endl;
 cout<<"Value of totDue="<<totDue<<endl;
}

/*
Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
Pseudocode and Indentation must be present.

*/

int main()
{
  int unitCst, units, taxRt,salesTx,totDue;
  returnvalue(unitCst, units, taxRt);                                      // call by reference-  returnvalue
  SalesTax(unitCst, units, taxRt,salesTx,totDue);                         // call by reference-  SalesTax
  display(unitCst, units, taxRt,salesTx,totDue);                          // call by reference-  display
  // all values are displayed.

}




