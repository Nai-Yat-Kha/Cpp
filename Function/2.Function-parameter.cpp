#include <iostream>
using namespace std;

void display_number(int x, float y){
    float total = x * y ;
    cout << "this is X : " << x << endl;
    cout << "this is Y : " << y << endl;
    cout << "total : " << total << endl;
}

int main(){

    int xm = 0;
    float ym = 0;
    cout << "ENter X || Y" << endl;
    cin  >> xm >> ym ;

    display_number(xm,ym);

    return 0;
}