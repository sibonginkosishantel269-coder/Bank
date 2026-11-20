#include <iostream>
using namespace std;

string names[3] = {"John", "Mary", "Peter"};
int accountNumber[3] = {677865, 756567, 857755};
int pins[3] = {1455, 1771, 1889};
double balance[3] = {5000, 3000, 7000};
double deposit;
double withdraw;
double sendCash;
int option;
int currentUser = 0;

void checkBalance()
{
    cout << "Balance is R" << balance[currentUser] << endl;
}
void depositAmount()
{
    cout << "How much do want to deposit R";
    cin >> deposit;
    balance[currentUser] = balance[currentUser] + deposit;
    cout << "Your new balance is R" << balance[currentUser] << endl;
}
void withdrawAmount()
{
    cout << "How much do you want to withdraw R";
    cin >> withdraw;
    if (balance[currentUser] < withdraw)
    {
        cout << "Insufficient fund. Enter small amount." << endl;
    }
    else
    {
        balance[currentUser] = balance[currentUser] - withdraw;
        cout << "You have successfully withdrawn R" << withdraw << endl;
        cout << "Your new balance is R" << balance[currentUser] << endl;
    }
}
void SendMoney()
{
    int num;
    cout << names[currentUser] << " your balance is R" << balance[currentUser] << endl;
    cout << "Enter amount to send R";
    cin >> sendCash;
    if (balance[currentUser] < sendCash)
    {
        cout << "Insufficient Fund." << endl;
    }
    else
    {
        balance[currentUser] = balance[currentUser] - sendCash;
        cout << names[2] << " you have successfully sent R" << sendCash << endl;
        cout << "Your new balance is R" << balance[currentUser] << endl;
    }
}
void Menu()
{
    cout << "===========WELCOME TO THE WORLD BANK===========" << endl;
    cout << "" << endl;
    cout << "Enter your name: " << names[currentUser] << endl;
    cout << "Enter account number: " << accountNumber[currentUser] << endl;
    cout << "Enter your pin: " << pins[currentUser] << endl;
    cout << "" << endl;
    cout << "Enter 1 to check balance" << endl;
    cout << "Enter 2 to deposit" << endl;
    cout << "Enter 3 to withdraw" << endl;
    cout << "Enter 4 to send cash" << endl;
    cout << "Enter 5 to return to main menu" << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        checkBalance();
        break;
    case 2:
        depositAmount();
        break;
    case 3:
        withdrawAmount();
        break;
    case 4:
        SendMoney();
        break;
    case 5:
        cout << "Thank you. Goodbye!" << endl;
        break;
    default:
        cout << "Invalid choice! Enter 1-5" << endl;
        break;
    }
}
int main()
{
    do{
    Menu();
    }
    while (option !=5);
    return 0;
}
