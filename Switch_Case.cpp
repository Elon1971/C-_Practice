
#include <iostream>
using namespace std;

int main() {

    int choice;
    cout << "Enter the Choice: ";
    cin >> choice;

    switch(choice) {

        case 1:
            cout << "Your Coke is given to you";
            break;
        case 2:
            cout << "Your Water is given to you";
            break;
        case 3:
            cout << "Your Bar is given to you";
            break;
        case 4:
            cout << "Your Choclate is given to you";
            break;
        case 5:
            cout << "Your Fanta is given to you";
            break;
        default:
            cout << "Wrong Input";
            break;
    }

    return 0;
}
