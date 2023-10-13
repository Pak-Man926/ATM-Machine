#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char password[20] ="Admin123";

    char p1[20];

    start:

    cout << "ENTER PASSWORD TO CONTINUE" << endl;

    cin >> p1;

    if (strcmp(p1,password)==0 ) {
        cout << "LOGIN SUCCESSFUL!" << endl;


    cout << "******************************" << endl;

    cout << "WELCOME \t" << endl;

    cout << "*******************************" << endl;

    cout <<"---------------------------------------------------------" << endl;
    cout << "ATM SERVICES\t" << endl;
    cout <<"---------------------------------------------------------" << endl;
    cout << "1. CHECK BALANCE"<< endl;
    cout << "2. DEPOSIT" << endl;
    cout << "3. WITHDRAW" << endl;
    cout << "4. QUIT" << endl;

    double balance;
    balance=1000;
    double deposit;
    double withdraw;
    double quit;
    char confirm;

    int transaction;

    cout <<"\n" << endl;

    cout << "\n INPUT '1' TO CHECK BALANCE\n INPUT '2' TO DEPOSIT \n INPUT '3' TO WITHDRAW\n INPUT '4' TO QUIT\n ";

    cin >> transaction;

    switch(transaction)
    {
        case 1:
            cout << "CURRENT BALANCE IS:" << balance;
            break;

        case 2:
            cout << "ENTER THE AMOUNT YOU WANT TO DEPOSIT:" << endl;
            double deposit_amount;
            cin >> deposit_amount;
            double new_balance;
            new_balance = balance + deposit_amount;
            cout << "NEW BALANCE IS:"<< new_balance <<endl;
            break;

        case 3:
            cout << "ENTER THE AMOUNT YOU WANT TO WITHDRAW:" << endl;
            double withdraw_amount;
            cin >> withdraw_amount;
            double new_amount;
            new_amount = balance - (withdraw_amount + (withdraw_amount * 0.02));
            withdraw_amount >= balance ? cout << "INSUFFICIENT FUNDS!" : cout << "NEW BALANCE IS:" << new_amount;
            break;
        case 4:
            cout << "*************************************************************************" << endl;
            cout << "THANK YOU FOR USING OUR SERVICES. GOODBYE!\t" << endl;
            cout << "*************************************************************************" << endl;
            break;

        default:
            cout << "NOT VALID!" << endl;
            break;

    }
    cout << "\nPress Y to continue or N to exit:" << endl;
    cin >> confirm;

    if (confirm == 'Y' || confirm == 'y') goto start;


    }
    else
    {
        cout << "LOGIN NOT SUCCESSFUL!" << endl;
    }


    return 0;
}
