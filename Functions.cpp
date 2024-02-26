// Exercise 1

#include <iostream>
using namespace std;

void add() {

    int a, b;
    int sum;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    sum = a+b;
    cout << "The addition of the two number is: " << sum << endl;
}

void substract() {

    int a, b;
    int sub;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    sub = a-b;
    cout << "The substraction of the two number is: " << sub << endl;
}

void multiply() {

    int a, b;
    int mul;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    mul = a*b;
    cout << "The multiplication of the two number is: " << mul << endl;
}

void divide() {

    int a, b;
    int div;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    div = a/b;
    cout << "The division of the two number is: " << div << endl;
}

void exponential() {

    int a, b;
    int exp;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    exp = a^b;
    cout << "The exponentiation of the two number is: " << exp << endl;
}



int main() {

    char choice;
    cout << "Enter the choice of the operation you want to perform on: ";
    cin >> choice;

    switch (choice) {

        case '+':
                add();
                break;

        case '-':
                substract();
                break;

        case '/':
                divide();
                break;

        case '*':
                multiply();
                break;

        case '^':
                exponential();
                break;

        default :
                cout << "Invalid Choice" << endl;

    }

    return 0;

}


// Exercise 2



#include <iostream>
using namespace std;

int a = 2;
float b = 2.22;
string c = "Yash is a good boy";

void variableType(int a) {
    cout << a << " is of integer type." << endl;

}

void variableType(float b) {
    cout << b << " is of floating type." << endl;

}

void variableType(string c) {
    cout << c << " is of string type." << endl;

}

int main() {

    variableType(a);
    variableType(b);
    variableType(c);


    return 0;
}


// Exercise 3

#include <iostream>
using namespace std;

int main() {


    return 0;
}



