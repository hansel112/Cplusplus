#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct date{
int dd,mm,yr;
};
int main()
{date dob,today;
int age;
cout<<"Enter date today"<<endl;
cout<<"Day : ";cin>>today.dd;
cout<<"Month : ";cin>>today.mm;
cout<<"Year : ";cin>>today.yr;
cout<<"Enter date of birth"<<endl;
cout<<"Day : ";cin>>dob.dd;
cout<<"Month : ";cin>>dob.mm;
cout<<"Year : ";cin>>dob.yr;
age=today.yr-dob.yr;
cout<<"You are "<<age;
cout<<"years old";
}
