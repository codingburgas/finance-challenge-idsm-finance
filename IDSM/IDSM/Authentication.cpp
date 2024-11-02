#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <Windows.h>
#include "MainMenu.h"
#include "Finances.h"
#include "Authentication.h"
#include "MainMenu.h"
using namespace std;
void Login() {
    string userId, password, id, pass;
    bool authenticated = false;
    system("cls");
    AsciiArt();
    cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << setw(66) << "Welcome to IDSM" << endl;
    cout << endl;
    cout << setw(63) << "Login Menu" << endl;
    cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << setw(60) << "Username: ";
    cin >> userId;
    cout << endl;
    cout << setw(60) << "Password: ";
    cin >> password;

    ifstream checkLogin("regInfo.txt");

    while (checkLogin >> id >> pass) {
        if (userId == id && password == pass) {
            authenticated = true;
            break;
        }
    }

    checkLogin.close();

    if (authenticated) {
        FinancesMenu();
    }
    else {
        cout << endl;
        cout << setw(78) << "Your Username or Password is incorrect!" << endl;
        Sleep(2000);
        Login();
    }
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