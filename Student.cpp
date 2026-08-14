#include<bits/stdc++.h>
using namespace std;
void input(string &name, string &branch, string &section,int &rollno,int marks[])
{
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter branch: "<<endl;
    cin>>branch;
    cout<<"Enter section: "<<endl;
    cin>>section;
    cout<<"Enter roll number: "<<endl;
    cin>>rollno;
    cout<<"Enter marks of 5 subjects: "<<endl;
    for(int i=0;i<5;i++)
        cin>>marks[i];
}

void findSum(int marks[], int &sum, float &percent)
{
    sum = 0;
    for(int i=0;i<5;i++)
        sum += marks[i];
    percent = (float)sum/500*100;
}

void show(string name, string branch, string section, int rollno, int marks[], int sum, float percent)
{
    cout<<"\nStudent Details:\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Branch: "<<branch<<endl;
    cout<<"Section: "<<section<<endl;
    cout<<"Roll Number: "<<rollno<<endl;
    cout<<"Marks: ";
    for(int i=0;i<5;i++)
        cout<<marks[i]<<" ";
    cout<<"\nTotal Marks: "<<sum<<endl;
    cout<<"Percentage: "<<percent<<"%"<<endl;
}

int main()
{
    string name, branch,section;
    int rollno, marks[5], sum;
    float percent;
    input(name, branch, section,rollno,marks);
    findSum(marks, sum, percent);
    show(name, branch, section, rollno, marks, sum, percent);
    return 0;
}