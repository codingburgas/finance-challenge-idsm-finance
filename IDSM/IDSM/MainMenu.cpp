#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Authentication.h"
using namespace std;

void AsciiArt() {
	cout << setw(72) << " _____  _____  _____ ___ ___" << endl;
	cout << setw(73) << "|_   _||  _  \\/  ___||  \\/  |" << endl;
	cout << setw(73) << "| |  | | | |\\ `--  | .  . |" << endl;
	cout << setw(73) << "| |  | | | | `--. \\| |\\/| |" << endl;
	cout << setw(73) << " _| |_ | |/ / /\\__/ /| |  | |" << endl;
	cout << setw(73) << "|_____||___/  \\____/ | |  |_/" << endl;
	cout << setw(46) << "______ _" << endl;
	cout << setw(47) << "|  ___(_)" << endl;
	cout << setw(78) << "| |_   _ _ __   __ _ _ __   ___ ___  ___" << endl;
	cout << setw(79) << "|  _| | | '_ \\ / _` | '_ \\ / __/ _ \\/ __|" << endl;
	cout << setw(79) << "| |   | | | | | (_| | | | | (_|  __/\\__ \\" << endl;
	cout << setw(79) << "\\_|   |_|_| |_|\\__,_|_| |_|\\___\\___||___/" << endl;
	cout << endl;
	cout << endl;
	cout << endl;

}
void AboutUs() {
	cout << "We" << endl;
}

void optionsMenu() {
	int opt;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(66) << "Welcome to IDSM" << endl;
	cout << endl;
	cout << setw(63) << "Main Menu" << endl;
	cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(62) << "[1] Login         " << "[2] Register" << endl;
	cout << setw(61) << "[3] About us    " << "[4] Exit" << endl;
	cout << endl;
	cout << setw(71) << "Please choose an option: ";
	cin >> opt;
	switch (opt)
	{
	case 1:
		Login();
		break;

	case 2:
		Registration();
		break;

	case 3:
		AboutUs();
		break;

	case 4:
		exit(0);
		break;

	default:
		system("cls");
		AsciiArt();
		optionsMenu();
		break;
	}



}