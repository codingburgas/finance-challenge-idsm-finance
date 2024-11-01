#include <iostream>
#include <iomanip>
#include "MainMenu.h"
#include "Finances.h"

using namespace std;
void FinancesMenu() {
	system("cls");
	AsciiArt();
	int opti;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(65) << "Welcome to IDSM" << endl;
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
		break;

	}
}
