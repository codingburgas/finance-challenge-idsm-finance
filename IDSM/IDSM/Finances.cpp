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
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(60) << "Transactions " << endl;
	cout << endl;
	cout << endl;
	cout << setw(60) << " 30.10 -- Successful transaction - 107.99 BGN";
		cout << setw(45) << " BERSHKA.COM";
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(60) << " 29.10 -- Successful transaction - 16.99 BGN";
		cout << setw(45) << " SPOTFIY.COM";
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(60) << " 29.10 -- Successful transaction - 228.01 BGN";
		cout << setw(45) << " DOUGLAS.BG";
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(60) << " 27.10 -- Successful transaction - 14.75 BGN";
		cout << setw(45) << " BILLA BULGARIA EOOD";
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(60) << " 26.10 -- Successful transaction - 50.00 BGN";
	cout << setw(45) << " DSK BANK ATN CENTER";
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

}

void Investing() {
	system("cls");
	AsciiArt();
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(67) << "Investing " << endl;
	cout << endl;
	cout << setw(77) << "Portfolio =  10774.93 BGN" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(73) << "S & P 500 = 0.5 (5155,76 BGN)  +7.32% " << endl;
	cout << setw(73) << "AAPL = 3.5 (1404.2 BGN)  +1.20% " << endl;
	cout << setw(73) << "TSLA = 9 (4025.7 BGN)  +11.66% " << endl;
	cout << setw(73) << "GOOG = 1.1 (189,27 BGN)  -1.33% " << endl;
	}
void Notifications() {
	system("cls");
	AsciiArt();
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(67) << "Notifications " << endl;
	cout << endl;
	cout << endl;
	cout << setw(60) << "Successful transaction for 107.99 BGN";
	cout << setw(45) << "30.10";
	cout << setw(105) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(60) << "Boost Your Savings! Limited-Time Offer!";
	cout << setw(45) << "30.10";
	cout << setw(105) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(60) << "Successful transaction for 16.99 BGN";
	cout << setw(45) << "29.10";
	cout << setw(105) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(60) << "Successful transaction for 228.01 BGN";
	cout << setw(45) << "29.10";
	cout << setw(105) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(60) << "Win a 2-week Holiday by using Us!";
	cout << setw(45) << "28.10";
	cout << setw(105) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(60) << "Successful transaction for 14.75 BGN";
	cout << setw(45) << "27.10";
}
void My_Profile() {
	system("cls");
	AsciiArt();
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(67) << "My Profile " << endl;
	cout << endl;
	cout << setw(66) << "First Name:     Iliyan" << endl;
	cout << setw(65) << "Last Name:    Stanchev" << endl;
		cout << setw(55) << "Age:  18" << endl;
		cout << setw(71) << "Account Number:   100090001" << endl; 
		cout << setw(81) << "Cards Associated with Your Account:   1" << endl;
		cout << setw(77) << "Current Available Balance:    " << MyBalance << endl;

}

void SecuritySettings(){
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(67) << "Security Settings" << endl;
	cout << endl;
	cout << setw(67) << "2-Factor Authentication: Enabled" << endl;
	cout << setw(67) << "Last Login: 2024-11-05 12:30 PM" << endl;
	cout << setw(67) << "Password Last Changed: 2024-10-30" << endl;
}

void NotificatonsPreferences() {
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(67) << "Notifications Preferences" << endl;
	cout << endl;
	cout << setw(67) << "1. Transaction Alerts: Enabled" << endl;
	cout << setw(67) << "2. Account Activity Alerts: Enabled" << endl;
	cout << setw(67) << "3. Promotional Notifications: Disabled" << endl;
}
void ContactSupport() {
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(67) << "Contact Support" << endl;
	cout << setw(100) << "If you need any type of assistance call: 00359 876 82 0599 or " << endl;
	cout << setw(100) << "send a mail at support@idsmfinances.com " << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
void Settings() {
	system("cls");
	AsciiArt();
	int option;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(65) << "Settings" << endl;
	cout << endl;
	cout << endl;
	cout << setw(63) << "[1] View Security Settings" << endl;
	cout << setw(67) << "[2] Notification Preferences" << endl;
	cout << setw(62) << "[3] Contact Support" << endl;
	cout << endl;
	cout << setw(71) << "Please choose an option: ";
	cin >> option;
	switch (option)
	{
	case 1:
		SecuritySettings();
		break;

	case 2:
		NotificatonsPreferences();
		break;

	case 3:
		ContactSupport();
		break;
		
	default:
		break;

	}
}
void More() {
	system("cls");
	AsciiArt();
	int optio;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << endl;
	cout << setw(63) << "[1] Investing        " << "[2] Notifications" << endl;
	cout << setw(62) << "[3] My Profile  " << "[4] Settings" << endl;
	cout << endl;
	cout << setw(71) << "Please choose an option: ";
	cin >> optio;
	switch (optio)
	{
	case 1:
		Investing();
		break;

	case 2:
		Notifications();
		break;

	case 3:
		My_Profile();
		break;

	case 4:
		Settings();
		break;

	default:
		break;

	}
}