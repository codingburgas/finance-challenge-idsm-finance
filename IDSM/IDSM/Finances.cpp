#include <iostream>
#include <iomanip>
#include <string>
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
	cout << setw(64) << "Balance Currency Converter";
	cout << endl;
	cout << setw(63) << "1. Euro (EUR)\n";
	cout << setw(63) <<  "2. US Dollar (USD)\n";
	cout << setw(63) <<  "3. British Pound (GBP)\n";
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
	cout << endl;
	cout << setw(65) << "Your current balance is " << MyBalance << endl;
	cout << endl;
	cout << setw(64) << "[1] Balance Currency Converter" << endl;
	cout << endl;
	cin >> op;
	cout << endl;
	if (op == 1) {
		BalanceCurrencyConverter();
	}
}

void transfermoney() {
	string recipient;
	string recipientaccount;
	double amount;

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
void Exchange() {
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
void FinancesMenu() {
	system("cls");
	AsciiArt();
	int opti;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(56) << "Welcome " << endl;
	cout << endl;
	cout << endl;
	cout << setw(62) << "[1] Balance         " << "[2] Transfer" << endl;
	cout << setw(61) << "[3] Transactions    " << "[4] More" << endl;
	cout << endl;
	cout << setw(71) << "Please choose an option: ";
	cin >> opti;
	switch (opti)
	{
	case 1:
		Balance();
		break;

	case 2:
		Transfer();
		break;

	case 3:
		Transactions();
		break;

	case 4:
		More();
		break;

	default:
		break;

	}
}