#include <iostream>
using namespace std;

int main(){

    int x;
    int sum=0;
    
    cout << "enter key : " ;
    cin >>  x;

    for(int i = 0; i <= x ; i++){
         sum = sum + i;
    }

    cout << "Total : " << sum << endl;
}