#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct stnd{
char name[20];
int m;
};
int main()
{stnd bee;
cout<<"SCORES IN SP : ";
cout<<"Enter student info : ";
cout<<"Name : ";cin>>bee.name;
cout<<"Marks : ";cin>>bee.m;
getch();system("cls");
cout<<"Name : "<<bee.name<<endl;
cout<<"Marks : "<<bee.m<<endl;
getch();
}
