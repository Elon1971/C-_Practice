//Exercise 1

#include <iostream>
using namespace std;

int main() {
    int num, add;
    cout << "Enter the number till where you want the addition of even numbers: ";
    cin >> num;

    for (int i=1; i<=num; i++) {
        if (i%2==0) {
            add += i;
        }
    }
    cout << "The addition of all the even number till " << num << " is " << add;

    return 0;
}


//Exercise 2


#include <iostream>
using namespace std;

int main() {
    char input;
    int curr_sum=0, next_sum=0, num=0;

    do {
        cout << "Current Sum is " << curr_sum << endl;
        cout << "Do you want to add " << ++next_sum << ": ";
        cin >> input;

        if (input == 'Y' || input == 'y') {
            curr_sum += next_sum;
            next_sum = curr_sum;
        }
    } while (input == 'Y' || input == 'y' || input == 'N' || input == 'n');

    cout << "The addition of all the number till now is " << curr_sum;

    return 0;
}


//Exercise 3

#include <iostream>
using namespace std;

int main() {

    for (int i=65, j=97; i<=90, j<=122; i++, j++) {
        cout << char(i) << "\t" << char(j) << "\t";
    }

    return 0;
}


//Exercise 4


#include <iostream>
using namespace std;
#include <cmath>

int main() {

    int input;
    int a = 1;

    cout << "Enter the input for the factorial: ";
    cin >> input;

    for (int i=1; i<=input; i++) {
        a *= i;
        cout << i << "! = " << a << endl;
    }

    return 0;
}


//Exercise 5

#include <iostream>
using namespace std;
#include <cmath>

int main() {

    int input, num;
    cout << "Enter the input to print the stars **: ";
    cin >> input;
    int a;

    for (int i=0; i<input; i++) {
        cout << "*";
        a++;
        if (a == 5) {
           cout << endl;
           a = 0;
        }
    }

    return 0;
}



// Exercise 6


#include <iostream>
using namespace std;
#include <cmath>

int main() {

    char arr[3][3] = {};
    int b=1, c=1;
    char a = 49;
    int x, y;

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            arr[i][j] = a++;
        }
    }

    cout << "Enter the index you want to put the 'X'" << endl;

    while (b <= 9) {
        if (b%2 != 0) {
            cout << "First Player's turn: " << endl;
            cout << "Enter x value: ";
            cin >> x;
            cout << "Enter y value: ";
            cin >> y ;
        }
        else {
            cout << "Second Player's turn: " << endl;
            cout << "Enter x value: ";
            cin >> x;
            cout << "Enter y value: ";
            cin >> y ;
        }
        x--;
        y--;

        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                if (i == x && j == y) {
                    if (b%2 != 0) {
                        arr[i][j] = 'X';
                        cout << arr[i][j] << " ";
                        c++;
                    }
                    else {
                        arr[i][j] = 'O';
                        cout << arr[i][j] << " ";
                        c++;
                    }
                }
                else {
                    cout << arr[i][j] << " ";
                }
            }
            cout << endl;
        }
        c=1;
        b++;
    }
    char coice;
    cout << "Who has won: 1 for player 1 and 2 for player 2";
    cin >> coice;
    cout << "Player " << coice << " has won" << endl;
    return 0;
}
