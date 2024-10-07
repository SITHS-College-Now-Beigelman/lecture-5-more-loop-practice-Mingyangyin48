// Mingyang Michelle Yin
// Oct, 7, 2024
// Lab 5

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{

    double transactions;
    double money;
    double transferMoney;
    char transactionType;


    cout << "How much money is in the user's bank account had at the start of the day: ";
    cin >> money;
    cout << "How many bank transactions were done today: ";
    cin >> transactions;
    cout << setprecision(0);
    cout << endl;

    if (transactions <= 0 )
    {
        cout << "Invaild, please renter amount of bank transactions that were done: ";
        cin >> transactions;
    }

    for (transactions; transactions >= 1; transactions--)
    {
        cout << "What type of transaction is it, d for DEBIT or c for CREDIT: ";
        cin >> transactionType;


        cout << "How much money has been transfered: ";
        cin >> transferMoney;
    
        double totalMoney;

        if (transactionType = 'c')
        {
            totalMoney = (money + transferMoney);
            cout << "This is the total after this transaction: " << totalMoney;
            cout << endl;
        }
        else if (transactionType = 'd')
        {
            totalMoney = (money - transferMoney);
            cout << "This is the total after this transaction: " << totalMoney;
            cout << endl;
        }
    }


    return 0;
}

