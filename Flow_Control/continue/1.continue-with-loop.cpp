// program to print the value of i

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        // condition to continue
        if (i == 3) {

            //cout << "this is continue section."<< i << endl;
            continue;
            cout << "this is continue section."<< i << endl;
            //break;
        }

        cout << i << endl;
    }

    return 0;
}