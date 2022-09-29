#include<iostream>
using namespace std;

class employee
{
    public:
        int id;
        char name[50];
        float salary;

        employee(){
            id = 0;
            name[0] = '\0';
            salary = 0;
            cout << "Constr..";
        }

        ~employee(){}

        void print(){
            cout << "Id: "<<id<<"\n";
            cout << "Name: "<<name<<"\n";
            cout << "Salary: "<<salary<<"\n";
        }
};

int main()
{
    employee e1,e2,e3;

    cout << "Enter id, name and salary for employee";

    cin >> e1.id >> e1.name >> e1.salary;

    e1.print();

    return 0;
}