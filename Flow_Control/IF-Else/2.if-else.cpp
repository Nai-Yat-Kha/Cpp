#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a number : ";
    cin >> number ;

    if (number >= 0) {
        cout << "you enter positive number : "<<number << endl;
    }
    else {
        cout << "YOu enter negative number : "<< number << endl;

    }

    return 0;
}