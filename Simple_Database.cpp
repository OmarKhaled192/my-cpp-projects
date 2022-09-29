// Simple_Database.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include<cstdlib>   
using namespace std;
const int std_no = 1000;
struct students {
    int num;
    string name;
    int age;
    string address;
    double phone;
};
int main()
{
    students stud[std_no];
    int n;
    cout << "Enter number of students you need : " ;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        stud[i].num = i;
        cout << "Student Number : " << i+1 << endl;
        cout << "--------------- \n";

        cout << "Name : ";
        cin >> stud[i].name;

        cout << "Age : ";
        cin >> stud[i].age;

        cout << "Address : ";
        cin >> stud[i].address;

        cout << "phone : ";
        cin >> stud[i].phone;

        system("cls");
    }   
    cout << "Num\tName\tAge\tAddress\tphone\n";
    cout << "------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t";
        cout << stud[i].name << "\t";
        cout << stud[i].age << "\t";
        cout << stud[i].address << "\t";
        cout << stud[i].phone << "\n\n";
    }
    cout << "----------------------------------------------\n";
    return 0;
}
