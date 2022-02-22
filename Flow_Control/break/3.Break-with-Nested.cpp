// using break statement inside
// nested for loop

#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    // nested for loops

    // first loop
    for (int i = 1; i <= 5; i++) {
        // second loop
        for (int j = 1; j <= 5; j++) {
            if (i == 3 || i == 4) {

                cout << "this section : " << i << endl;
                break;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    return 0;
}