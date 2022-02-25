#include <iostream>
using namespace std;


void dispaly(int m[]){

    for(int i=0; i<=5 ; i++){

        cout << "Student [" << i + 1 <<"] : "<< m [i]<<endl;

    }


}

int main(){

    int marks[]= {23,34,45,56,67,78};

    dispaly(marks);

    return 0;
}
