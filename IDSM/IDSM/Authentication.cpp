#include <iostream>
#include <iomanip>
#include <fstream>
#include "MainMenu.h"
#include "Finances.h"
using namespace std;
void Login() {

}
void Registration() {
	system("cls");
	AsciiArt();
	string rUserId, rPassword, rId, rPass;
	int mainMenuNum;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(66) << "Welcome to IDSM" << endl;
	cout << endl;
	cout << setw(67) << "Registration Menu" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(61) << "Username: ";
	cin >> rUserId;
	cout << endl;
	cout << setw(61) << "Password: ";
	cin >> rPassword;

	ofstream saveRegInfo("regInfo.txt", ios::app);
	saveRegInfo << rUserId << ' ' << rPassword << endl;
	cout << endl;
	cout << setw(72) << "Registration is successful!" << endl;
	cout << endl;
	cout << setw(76) << "Enter '0' to go back to Main Menu: ";
	cin >> mainMenuNum;
	if (mainMenuNum == 0) {
		system("cls");
		AsciiArt();
		optionsMenu();
	}
}