/*
Amerike University
Author: Ali Angel
Work #: 18
Date: 25/03/25
Description: This program will use structs that store a person's name and age, and it will 
then use an array of the struct type to store three people's name and age. 
*/


#include <iostream>
#include <conio.h>

using namespace std;

void pressAnyKey();

struct Person
{
    string name;
    int age;
};

int main(){
    Person relatives [3];

    cout << "This program will prompt you to write the name and age of three people\n";
    pressAnyKey();
    for(int i=0;i<3;i++)
    {
        cout << i+1 << ".Name: ";
        cin >> relatives[i].name;
        cout << i+1 << ".Age: ";
        cin >> relatives[i].age;
    }
    cout << "\nWe will now show you the names and ages in order\n";
    pressAnyKey();
    for(int i=0;i<3;i++)
    {
        cout << i+1 <<".Name: " << relatives[i].name;
        cout <<"\n"<< i+1 <<".Age: " << relatives[i].age<<"\n";
    }

    return 0;
}

void pressAnyKey()
{
    cout << "PRESS ANY KEY TO CONTINUE";
    getch();
    system("cls");
}