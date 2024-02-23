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
