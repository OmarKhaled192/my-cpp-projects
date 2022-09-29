//------------------------- Bank Management System---------------------------------
#include <iostream>
#include "bank.h"  // import bank class here.
using namespace std;
void endline()
{
    cout << "\n---------------------------------------\n";
}
int main()
{
    int ch;
    bank obj;
    char x ='y';  // next step or not
  do {
        cout << "1) open account \n";
        cout << "2) deposite money \n";
        cout << "3) withdraw money \n";
        cout << "4) Display account \n";
        cout << "5) Exit \n";
        endline();
        cout << "select the option from the above: ";

        cin >> ch;
    
    switch (ch)
    {
        case 1: cout << "1) open account \n";
            obj.open_account();
            endline();
            break;
       
        case 2: cout << "2) deposite money \n";
            obj.deposite_money();
            endline();
            break;
        
        case 3: cout << "3) withdraw money \n";
            obj.withdraw_money();
            endline();
            break;

        case 4: cout << "4) Display account \n";
            obj.Display_account();
            endline();
            break;

        case 5: cout << "--------------- End System ------------------------\n";
            exit(1);

        default: cout << "this is not exist try again \n";
            cout << "do you want to select next option then press :: y or Y \n";
            cout << "if you want to exit then press :: n or N \n";
            endline();

            cout << "Enter your decision : \n" << endl;
            cin >> x;


            if (x == 'n' || x == 'N')
                exit(1);

            break;
    } // switch close

  } while (x == 'y' || x == 'Y');
  
  return 0;
}
