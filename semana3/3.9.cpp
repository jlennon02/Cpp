#include <iostream>
#include "Account.h"
using namespace std;
int main(){
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    cout << "account1: " << account1.getName() << " balance is $"<< account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"<<account2.getBalance() ;


cout << "\n\nEnter deposit amount for account1: ";
int depositAmount;
cin >> depositAmount; 
cout << "adding " << depositAmount << " to account1 balance";
account1.deposit(depositAmount);

cout << "\n\naccount1: " << account1.getName() << " balance is $"
<< account1.getBalance();
cout << "\naccount2: " << account2.getName() << " balance is $"
<< account2.getBalance();

cout << "\n\nEnter deposit amount for account2: "; // prompt
cin >> depositAmount; // obtain user input
cout << "adding " << depositAmount << " to account2 balance";

cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
cout << "\naccount2: " << account2.getName() << " balance is $"<< account2.getBalance() << endl;
}

account1.getBalance()
account2.getBalance()
}
