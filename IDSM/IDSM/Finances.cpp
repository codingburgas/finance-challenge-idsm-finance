#include <iostream>
#include <iomanip>
#include <string>
#include "Authentication.h"
#include "FinancesMenu.h"
#include "Windows.h"
using namespace std;
double MyBalance = 8170.42;
void AsciiArt();
void BalanceCurrencyConverter() {
	system("cls");
	AsciiArt();
	int choice;
	const double balance = 8170.42;
	const double eur = 0.51;
	const double usd = 0.55;
	const double gbp = 0.45;

	cout << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(72) << "Balance Currency Converter" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(66) << "[1] Euro (EUR)" << endl;
	cout << endl;
	cout << setw(69) << "[2] US Dollar (USD)" << endl;
	cout << endl;
	cout << setw(71) << "[3] British Pound (GBP)" << endl;
	cout << endl;
	cout << endl;
	cout << setw(71) << "Which one do you want: ";
	cin >> choice;
	cout << endl;
	if (choice == 1) {
		cout << setw(68) << "Your Balance in Euro(EUR) is " << balance * eur <<" EUR" << endl;
		Sleep(2500);
		FinancesMenu();
	}
	if (choice == 2) {
		cout << setw(71) << "Your Balance in US Dollar(USD) is " << balance * usd << " USD" << endl;
		Sleep(2500);
		FinancesMenu();
	}
	if (choice == 3) {
		cout << setw(73) << "Your Balance in British Pound(GBP) is " << balance * gbp << " GBP" << endl;
		Sleep(2500);
		FinancesMenu();
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
	cout << setw(65) << "Your current balance is " << MyBalance << " BGN" << endl;
	cout << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(66) << "[1] Balance Currency Converter       " << "[2] Go Back to Menu" << endl;
	cout << endl;
	cout << setw(70) << "Please enter an option: ";
	cin >> op;
	cout << endl;
	if (op == 1) {
		BalanceCurrencyConverter();
	}
	if (op == 2) {
		FinancesMenu();
	}
}
void Transfer() {
	system("cls");
	AsciiArt();
	string recipient;
	string recipientAccount;
	double amount;

	cin.ignore();

	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(66) << "Transfer Money " << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(68) << "Enter recipient's name: ";
	getline(cin, recipient);
	cout << endl;
	cout << setw(74) << "Enter recipient's account number: ";
	getline(cin, recipientAccount);
	cout << endl;
	cout << setw(69) << "Enter amount to transfer: ";
	cin >> amount;
	cout << endl;
	cout << endl;

	if (amount > MyBalance) {
		cout << setw(79) << "Insufficient balance. Returning to menu." << endl;
		Sleep(2500);
		FinancesMenu();
	}

	MyBalance -= amount;

	system("cls");
	AsciiArt();
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(67) << "Transfer Details" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(63) << "Recipient: " << recipient << endl;
	cout << endl;
	cout << setw(66) << "Account Number: " << recipientAccount << endl;
	cout << endl;
	cout << setw(58) << "Amount: " << fixed << setprecision(2) << amount << " BGN" << endl;
	cout << endl;
	cout << setw(65) << "Your current balance is: " << MyBalance << " BGN" << endl;
	cout << endl;
	cout << endl;
	cout << setw(74) << "Enter '0' to go back to Menu: ";
	int zero;
	cin >> zero;
	if (zero == 0) {
		FinancesMenu();
	}
	else {
		Transfer();
	}
}
void Transactions() {
	system("cls");
	AsciiArt();
	int zero;
	cout << setw(77) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(66) << "Transactions " << endl;
	cout << setw(77) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
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
	cout << endl;
	cout << setw(75) << "Enter '0' to Go Back to Menu: ";
	cin >> zero;
	if (zero == 0) {
		FinancesMenu();
	}
	else {
		Transactions();
	}
}

void Investing() {
	system("cls");
	AsciiArt();
	int zero;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(64) << "Investing " << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(71) << "Portfolio =  10774.93 BGN" << endl;
	cout << endl;
	cout << setw(78) << "S & P 500 = 0.5 (5155,76 BGN)  +7.32% " << endl;
	cout << endl;
	cout << setw(75) << "AAPL = 3.5 (1404.2 BGN)  +1.20% " << endl;
	cout << endl;
	cout << setw(75) << "TSLA = 9 (4025.7 BGN)  +11.66% " << endl;
	cout << endl;
	cout << setw(75) << "GOOG = 1.1 (189,27 BGN)  -1.33% " << endl;
	cout << endl;
	cout << endl;
	cout << setw(74) << "Enter '0' to Go Back to Menu: ";
	cin >> zero;
	if (zero == 0) {
		More();
	}
	else {
		Investing();
	}
}
void Notifications() {
	system("cls");
	AsciiArt();
	int zero;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(67) << "Notifications " << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
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
	cout << endl;
	cout << endl;
	cout << endl;
	cout << setw(75) << "Enter '0' to Go Back to Menu: ";
	cin >> zero;
	if (zero == 0) {
		More();
	}
	else {
		Notifications();
	}
}

void myProfile() {
	system("cls");
	AsciiArt();
	int zero;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(65) << "My Profile " << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	cout << setw(68) << "First Name: Iliyan" << endl;
	cout << setw(68) << "Last Name: Stanchev" << endl;
	cout << setw(62) << "Age: 18" << endl;
	cout << setw(72) << "Account Number:   100090001" << endl; 
	cout << setw(77) << "Cards Associated with Your Account:  1" << endl;
	cout << setw(69) << "Current Available Balance:  " << MyBalance << endl;
	cout << endl;
	cout << setw(74) << "Enter '0' to Go Back to Menu: ";
	cin >> zero;
		if (zero == 0) {
			More();
		}
		else {
			myProfile();
		}
}

void SecuritySettings(){
	int zero;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(67) << "Security Settings" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(75) << "2-Factor Authentication: Enabled" << endl;
	cout << endl;
	cout << setw(74) << "Last Login: 2024-11-05 12:30 PM" << endl;
	cout << endl;
	cout << setw(75) << "Password Last Changed: 2024-10-30" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << setw(74) << "Enter '0' to Go Back to Menu: ";
	cin >> zero;
	if (zero == 0) {
		More();
	}
	else {
		SecuritySettings();
	}
}

void NotificatonsPreferences() {
	int zero;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(71) << "Notifications Preferences" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(74) << "1. Transaction Alerts: Enabled" << endl;
	cout << endl;
	cout << setw(76) << "2. Account Activity Alerts: Enabled" << endl;
	cout << endl;
	cout << setw(78) << "3. Promotional Notifications: Disabled" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << setw(75) << "Enter '0' to Go Back to Menu: ";
	cin >> zero;
	if (zero == 0) {
		More();
	}
	else {
		NotificatonsPreferences();
	}
}
void ContactSupport() {
	int zero;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(66) << "Contact Support" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << setw(90) << "If you need any type of assistance call: 00359 876 82 0599 or " << endl;
	cout << setw(77) << "send a mail at support@idsmfinances.com " << endl;

	cout << endl;
	cout << setw(74) << "Enter '0' to Go Back to Menu: ";
	cin >> zero;
	if (zero == 0) {
		More();
	}
	else {
		ContactSupport();
	}
}
void Settings() {
	system("cls");
	AsciiArt();
	int option;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(62) << "Settings" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << setw(71) << "[1] View Security Settings" << endl;
	cout << endl;
	cout << setw(72) << "[2] Notification Preferences" << endl;
	cout << endl;
	cout << setw(67) << "[3] Contact Support" << endl;
	cout << endl;
	cout << setw(67) << "[4] Go Back to Menu" << endl;
	cout << endl;
	cout << endl;
	cout << setw(71) << "Please choose an option: ";
	cin >> option;
	switch (option)
	{
	case 1:
		system("cls");
		AsciiArt();
		SecuritySettings();
		break;

	case 2:
		system("cls");
		AsciiArt();
		NotificatonsPreferences();
		break;

	case 3:
		system("cls");
		AsciiArt();
		ContactSupport();
		break;
		
	case 4:
		More();
		break;
	default:
		Settings();
		break;

	}
}
