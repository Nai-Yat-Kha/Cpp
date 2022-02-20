#include <iostream>
using namespace std;

int main()
{
    int number ;
    cout << "Enter a number : " << endl;
    cin >> number ;

    if (number > 0){
        cout << "This is positive int : " << number << endl;

    }
    else if (number < 0){
        cout << "This is negative int : " << number << endl;
    }
    else {
        cout << "this is Zero.";
    }

    return 0;
}