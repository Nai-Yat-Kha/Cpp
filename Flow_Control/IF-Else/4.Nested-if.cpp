#include <iostream>
using namespace std;

int main(){
    int x;

    cout << " enter : " ;
    cin >> x;

    if (x != 0){
        if (x > 0){
            cout << "this is positive ." << endl;
        }
        else if (x < 0){
            cout << "this is negative ." <<  endl ;
        }
    }
    else {
        cout << "tis is zero." << endl;
    }

    return 0;
}