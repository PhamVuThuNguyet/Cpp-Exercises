#include <bits/stdc++.h>
using namespace std;

typedef struct Student
{
    char name[30];
    char class[10];
    float mMath;
    float mPhysical;
};

void addStudent()
{
    Student student;
    cout << "input name:" << endl;
    cin >> student.name;
    cout << "input class:" << endl;
    cin >> student.class;
    cout << "input mMath:" << endl;
    cin >> student.mMath;
    cout << "input mPhysical:" << endl;
    cin >> student.mPhysical;
}

Student searchByName()
{
}

void editClass()
{
}

int main()
{
}