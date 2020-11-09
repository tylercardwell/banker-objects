#include <iostream>
#include <stdlib.h>

using namespace std;

void createAccount();
void updateAccount();
void deposit();
void withdraw();
void viewBalance();


class bankAccount
{
public: 
	string name;
	double balance;
	void getName()
	{
		cout << "enter name " << endl;
		cin >> name;
	}
	void getBalance()
	{
		cout << "enter balance" << endl;
		cin >> balance;
	}
	int returnBalance()
	{
		return balance;
	}
	string returnName()
	{
		return name;
	}
	void accountStatement()
	{
		cout << name << " your balance is $" << balance << endl;
	}
};

bankAccount account1;

int main()
{
	createAccount();
	updateAccount();
	return 0;
}

void createAccount()
{
	account1.getName();
	account1.getBalance();
}

void updateAccount()
{
	string userInput;
	bool isRunning = true;

	while (isRunning)
	{
		system("cls");
		cout << "[d] deposit	[w] withdraw	[b] balance" << endl;
		cin >> userInput;
		if (userInput == "d")
		{
			deposit();
		}
		else if (userInput == "w")
		{
			withdraw();
		}
		else if (userInput == "b")
		{
			viewBalance();
		}
		else
		{
			cout << "invalid input" << endl;
		}
	}
}

void deposit()
{
	double depositAmount;
	double balance = account1.balance;
	cout << "current balance: " << balance << endl;
	cout << "enter deposit amount" << endl;
	cin >> depositAmount;
	account1.balance = (balance + depositAmount);
	system("pause");
}

void withdraw()
{
	double withdrawAmount;
	double balance = account1.balance;
	cout << "current balance: " << balance << endl;
	cout << "enter withdraw amount" << endl;
	cin >> withdrawAmount;
	if (balance - withdrawAmount > 0)
	{
		account1.balance = (balance - withdrawAmount);
	}
	else
	{
		cout << "lack of funds" << endl;
	}
	system("pause");
}

void viewBalance()
{
	account1.accountStatement();
	system("pause");
}