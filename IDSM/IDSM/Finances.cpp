#include <iostream>
#include <iomanip>
#include <string>
#include "Authentication.h"
#include "FinancesMenu.h"
using namespace std;
double MyBalance = 8170.42;
void AsciiArt();
void BalanceCurrencyConverter() {
	int choice;
	const double balance = 8170.42;
	const double eur = 0.51;
	const double usd = 0.55;
	const double gbp = 0.45;

	cout << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(64) << "Balance Currency Converter" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << setw(63) << "1. Euro (EUR)" << endl;
	cout << setw(63) << "2. US Dollar (USD)" << endl;
	cout << setw(63) << "3. British Pound (GBP)" << endl;
	cout << setw(63) << "Which one do you want: ";
	cin >> choice;

	if (choice == 1) {
		cout << "Your Balance in Euro(EUR) is " << balance * eur <<" EUR" << endl;
	}
	if (choice == 2) {
		cout << "Your Balance in US Dollar(USD) is " << balance * usd << " USD" << endl;
	}
	if (choice == 3) {
		cout << "Your Balance in British Pound(GBP) is " << balance * gbp << " GBP" << endl;
	}
}
void Balance() {
	system("cls");
	AsciiArt();
	int op;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(63) << "Balance " << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << setw(67) << "Your current balance is " << MyBalance << endl;
	cout << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(66) << "[1] Balance Currency Converter       " << "[2] Go Back to Menu" << endl;
	cout << endl;
	cout << setw(71) << "Please enter an option: ";
	cin >> op;
	cout << endl;
	if (op == 1) {
		BalanceCurrencyConverter();
	}
	if (op == 2) {
		FinancesMenu();
	}
}
void transfermoney() {
	string recipient;
	string recipientaccount;
	double amount;
	cin.ignore();
	cout << "=== Transfer Money === " << endl;
	cout << "Enter recipient's name: ";
	getline(cin, recipient);
	cout << endl;
	cout << "Enter recipient's account number: ";
	getline(cin, recipientaccount);
	cout << endl;
	cout << "Enter amount to transfer: ";
	cin >> amount;

	cout << "Transfer Details:"; 
	cout << "Recipient: " << recipient << endl;
	cout << "Account Number: " << recipientaccount << endl;
	cout << "Amount: " << fixed << setprecision(2) << amount << " BGN\n";
	cout << "Your current balance is: " << MyBalance << " BGN\n";

	char confirmation;
	cout << "Confirm transfer? (y/n): ";
	cin >> confirmation;

	if (confirmation == 'y' || confirmation == 'Y') {
		if (amount > MyBalance) {
			cout << "Error: Insufficient funds. Your current balance is " << MyBalance << " BGN.\n";
		}
		else {
			MyBalance -= amount;
			cout << "Transfer successful! Your new balance is "
				<< fixed << setprecision(2) << MyBalance << " BGN.\n";
			cout << "Thank you! The transfer to " << recipient << " was successful.\n";
		}
	}
	else {
		cout << "Transfer cancelled.\n";
	}
}
void Transfer() {
	system("cls");
	AsciiArt();
	transfermoney();
}
void Transactions() {
	system("cls");
	AsciiArt();
	cout << "a";
}
void More() {
	system("cls");
	AsciiArt();
	cout << "a";
}
void Investing() {
	system("cls");
	AsciiArt();
	cout << "a";
	}
void Notifications() {
	system("cls");
	AsciiArt();
	cout << "a";
}
void My_Profile() {
	system("cls");
	AsciiArt();
	cout << "a";
}
void Settings() {
	system("cls");
	AsciiArt();
	cout << "a";
}