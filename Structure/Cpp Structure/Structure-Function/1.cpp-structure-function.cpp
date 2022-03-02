#include<iostream>
using namespace std;


struct Person
{
    char name[50];
    int age;
    float salary;
};

void displayData(Person);

int main(){


    Person p;

    cin.get(p.name,50);
    cin >> p.age ;
    cin >> p.salary;

    displayData(p);

    return 0;
}

void displayData(Person p){

    cout << p.name << p.age << p.salary ;
}