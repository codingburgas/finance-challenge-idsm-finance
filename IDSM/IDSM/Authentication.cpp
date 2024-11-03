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

// Function to display information about the application and its purpose
void AboutUs() {
    system("cls");          
    AsciiArt();              

    int zero;                
    // Display About Us section with a formatted heading
    cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << setw(63) << "About Us" << endl;
    cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;

    // Display information about the app and its purpose, formatted for readability
    cout << setw(104) << "IDSM Finances was created by a team passionate about helping people manage their money" << endl;
    cout << setw(90) << "with ease. Our goal is to simplify tracking your finances, so you" << endl;
    cout << setw(96) << "can see where your money goes and make better financial choices every day." << endl;
    cout << endl << endl;

    // Prompt user to enter '0' to return to the main menu
    cout << setw(74) << "Enter '0' to Go Back to Menu: ";
    cin >> zero;

    // If user enters '0', return to the main menu; otherwise, redisplay About Us section
    if (zero == 0) {
        system("cls");
        AsciiArt();
        optionsMenu();       
    } else {
        AboutUs();           
    }
}

// Function for user login
void Login() {
    string userId, password, id, pass;
    bool authenticated = false;    

    system("cls");                 
    AsciiArt();                    

    // Display login menu heading
    cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << setw(64) << "Login Menu" << endl;
    cout << endl;
    cout << setw(74) << "Type 'Back' to go Back to Menu" << endl;
    cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    // Prompt for username
    cout << setw(60) << "Username: ";
    cin >> userId;

    // If user enters 'Back', return to the main menu
    if (userId == "Back") {
        system("cls");
        AsciiArt();
        optionsMenu();
    } else {
        cout << endl;
        cout << setw(60) << "Password: ";
        cin >> password;

        ifstream checkLogin("regInfo.txt");    

        // Check each entry in file to see if username and password match
        while (checkLogin >> id >> pass) {
            if (userId == id && password == pass) {
                authenticated = true;          
                break;
            }
        }

        checkLogin.close();                

        // If authenticated, proceed to the finances menu; otherwise, show error message and retry
        if (authenticated) {
            FinancesMenu();                
        } else {
            cout << endl;
            cout << setw(78) << "Your Username or Password is incorrect!" << endl;
            Sleep(2000);                       
            Login();                           
        }
    }
}

// Function for new user registration
void Registration() {
    system("cls");                 
    AsciiArt();                    

    string rUserId, rPassword;  
    int mainMenuNum;            

    cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << setw(66) << "Welcome to IDSM" << endl;
    cout << endl;
    cout << setw(67) << "Registration Menu" << endl;
    cout << setw(76) << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    // Prompt user to enter a username and password for registration
    cout << setw(61) << "Username: ";
    cin >> rUserId;
    cout << endl;
    cout << setw(61) << "Password: ";
    cin >> rPassword;

    // Append new username and password to file for future logins
    ofstream saveRegInfo("regInfo.txt", ios::app);
    saveRegInfo << rUserId << ' ' << rPassword << endl;
    cout << endl;
    cout << setw(72) << "Registration is successful!" << endl;
    cout << endl;

    // Prompt user to enter '0' to return to the main menu
    cout << setw(76) << "Enter '0' to go back to Main Menu: ";
    cin >> mainMenuNum;

    // If user enters '0', return to the main menu
    if (mainMenuNum == 0) {
        system("cls");
        AsciiArt();
        optionsMenu();           
    }
}
