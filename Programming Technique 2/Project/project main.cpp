#include <iostream>
#include "LibrarySystem.h"
#include "LibrarySystem.cpp"

using namespace std;

void star();
void blank();
void space();
char userType;
    

int main() {
    LibrarySystem library;
    
    do {
    
    cout << endl << endl;
    star();
    blank();
    cout << " LIBRARY SYSTEM";
    blank();
    cout << endl;
    star();
    cout << endl;
    blank();
    cout << endl;
    blank();
    cout << "=  MAIN MENU  =" << endl;
    blank();
    cout << endl;
    cout << endl;
    blank();
    cout << " SELECT OPTIONS" << endl;
    cout << "                                              ";
    cout << "------------------------" << endl;
    cout << "                                              ";
    cout << " 1. ADMIN    2. STUDENT" << endl;
    cout << endl;
    space();
    cout << "(PRESS 3 TO EXIT)" << endl;

    cin >> userType;
    cout << endl;

    if (userType == '1') {
        library.adminLogin();
    } else if (userType == '2') {
        library.studentLogin();
    } else if (userType == '3') {
        cout << "Exiting the system." << endl;
        cout << "Thank You, Have A Nice Day  ^_^";
    } else {
        cout << "Invalid user type selected." << endl;
    }
} while (userType !='3');
    return 0;
}

void star() 
{
    for (int i = 0; i < 120; i++)
    	cout << "*";
}

void blank()
{
    for (int j = 0; j < 50; j++)
        cout << " ";
}
	
void space() 
{
	for (int a = 0; a < 49; a++)
        cout << " ";
}