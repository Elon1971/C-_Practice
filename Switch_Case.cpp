#include <iostream>
using namespace std;

int main() {

    int choice;
    cout << "Enter the Choice: ";
    cin >> choice;
    int year;

    switch(choice) {

        case 1:
            cout << "This Month (January) contains 31 days";
            break;
        case 2:
            cout << "For which year you are looking for: ";
            cin >> year;
            if ((year%4==0) || (year%400==0) && !(year%100==0)) {
                cout << "The Year " << year << " is/was the leap year" << endl;
                cout << "The Year " << year << " is/was having 29 days";
            }
            else {
                cout << "The Year  " << year << " is/was not the leap year" << endl;
                cout << "The Year " << year << " is/was having 28 days";
            }
            break;
        case 3:
            cout << "This Month (March) contains 31 days";
            break;
        case 4:
            cout << "This Month (April) contains 30 days";
            break;
        case 5:
            cout << "This Month (May) contains 31 days";
            break;
        case 6:
            cout << "This Month (June) contains 30 days";
            break;
        case 7:
            cout << "This Month (July) contains 31 days";
            break;
        case 8:
            cout << "This Month (August) contains 31 days";
            break;
        case 9:
            cout << "This Month (September) contains 30 days";
            break;
        case 10:
            cout << "This Month (October) contains 31 days";
            break;
        case 11:
            cout << "This Month (November) contains 30 days";
            break;
        case 12:
            cout << "This Month (December) contains 31 days";
            break;
        default:
            cout << "Wrong Input";
            break;
    }

    return 0;
}
