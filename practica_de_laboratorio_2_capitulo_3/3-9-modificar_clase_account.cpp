#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account account1{"Jane Green",50};
    Account account2{"Jhon Blue",-7};

    cout << "account1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    int whitdrawAmount;
    cin >> whitdrawAmount;
    cout << "whitdrawing " << whitdrawAmount << " of account1 balance";
    account1.whitdraw(whitdrawAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> whitdrawAmount;
    cout << "whitdrawing " << whitdrawAmount << " of account2 balance";
    account2.whitdraw(whitdrawAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance() << endl;

    return 0;
}