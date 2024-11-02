#include <iostream>
#include <iomanip>
#include "MainMenu.h"
#include "Finances.h"

using namespace std;
void FinancesMenu() {
	while (true) {
		system("cls");
		AsciiArt();
		int opti;
		cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << setw(66) << "Welcome to IDSM" << endl;
		cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;
		cout << endl;
		cout << setw(63) << "[1] Balance         " << "[2] Transfer" << endl;
		cout << setw(62) << "[3] Transactions  " << "[4] More" << endl;
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
			system("cls");
			AsciiArt();
			FinancesMenu();
			break;
		}

	}
}
void More() {
	system("cls");
	AsciiArt();
	int optio;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(66) << "Welcome to IDSM" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << endl;
	cout << setw(60) << "[1] Investing     " << "[2] Notifications" << endl;
	cout << setw(54) << "[3] My Profile  " << "[4] Settings  " << "[5] Go Back" << endl;
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
		myProfile();
		break;

	case 4:
		Settings();
		break;

	case 5:
		FinancesMenu();
		break;
	default:
		system("cls");
		AsciiArt();
		More();
		break;

	}
}
