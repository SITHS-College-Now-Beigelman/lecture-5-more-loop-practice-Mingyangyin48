// Mingyang Michelle Yin
// Oct, 7, 2024
// Lecture 5

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    // setting variables

    int transactions;
    double transferMoney;
    double totalMoney;
    double totalDebit;
    double totalCredit;
    char transactionType;

    // asking the user the amount of money is in their account and amonut of transactions 
    cout << "How much money is in the user's bank account had at the start of the day: ";
    cin >> totalMoney;
    cout << "How many bank transactions were done today: ";
    cin >> transactions;
    cout << endl;

    // to make sure there is a valid amount of transactions
    if (transactions <= 0 )
    {
        cout << "Invaild, please renter amount of bank transactions that were done: ";
        cin >> transactions;
    }

    cout << fixed << setprecision(2);   // this makes sure that the numbers only goes into the hundredths place 

    for (transactions; transactions >= 1; transactions--)   // for as many transactions there are, the user can plug in a credit/debit value
    {
        cout << "What type of transaction is it, d for DEBIT or c for CREDIT: ";
        cin >>  transactionType;

        while (transactionType != 'c' && transactionType != 'd')    // making sure that the variables is c or d
            {cout << "Invaild, please renter d for DEBIT or c for CREDIT: ";
            cin >> transactionType;}

        cout << "How much money has been transfered: "; // the amount of money transfered per each transaction
        cin >> transferMoney;
    
        if (transactionType == 'c') // if the transaction was a credit one 
        {
            totalCredit = totalCredit + transferMoney;  // finds out if there was more than one credit transaction and finds the total amount
            totalMoney = totalMoney + transferMoney;    // the overall money made
            cout << "This is the total after this transaction: " << totalMoney; // telling the user how much money they have after this credit transaction 
            cout << endl;
        }
        
        else if (transactionType = 'd') // if the transaction was a debit one 
        {
            totalDebit = totalDebit + transferMoney;  // finds out if there was more than one debit transaction and finds the total amount
            totalMoney = totalMoney - transferMoney;    // the overall money lost
            cout << "This is the total after this transaction: " << totalMoney; // telling the user how much money they have after this debit transaction 
            cout << endl;
        }
    }

    // telling the user all of their stats
    cout << endl << "The user has a total of " << totalCredit << " dollar addition in their acount" << endl;  // the amonut of their total credits
    cout << "The user has a total of " << totalDebit << " dollar depletion in their acount" << endl;  // the amonut of their total debits
    cout << "The user has " << totalMoney << " in their account." << endl; // the amonut of money they have overall 
    cout << "Have a good day."; // telling the user goodbye

    return 0;
}


/*
    //OUTPUT//

How much money is in the user's bank account had at the start of the day: 2000
How many bank transactions were done today: 4

What type of transaction is it, d for DEBIT or c for CREDIT: d
How much money has been transfered: 20
This is the total after this transaction: 1980.00
What type of transaction is it, d for DEBIT or c for CREDIT: c 
How much money has been transfered: 305.25
This is the total after this transaction: 2285.25
What type of transaction is it, d for DEBIT or c for CREDIT: c 
How much money has been transfered: 1.75
This is the total after this transaction: 2287.00
What type of transaction is it, d for DEBIT or c for CREDIT: d
How much money has been transfered: 282
This is the total after this transaction: 2005.00

The user has a total of 307.00 dollar addition in their acount
The user has a total of 302.00 dollar depletion in their acount
The user has 2005.00 in their account.
Have a good day.

*/