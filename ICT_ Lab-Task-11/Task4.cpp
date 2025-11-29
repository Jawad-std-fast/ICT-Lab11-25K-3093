#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance;

    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        balance += amount;
    }
};

class SavingsAccount : public BankAccount {
public:
    double interest() {
        return balance * 0.05;
    }
};

int main() {
    cout << "----- Task 4 -----" << endl;
    SavingsAccount sa;

    sa.deposit(1000);

    cout << "Balance: " << sa.balance << endl;
    cout << "Interest (5%): " << sa.interest() << endl;

    return 0;
}

