#include <iostream>
using namespace std;

int add(int xa , int ya){

    return (xa * ya );
}

int main(){

    int xm = 0;
    float ym = 0;
    cout << "ENter X || Y" << endl;
    cin  >> xm >> ym ;

    int total = add(xm,ym);
    cout << "total : "<< total;
    return 0;
}