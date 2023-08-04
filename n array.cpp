#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{float v[100],s=0,a;
int i,n;
cout<<"How many values ?:";
cin>>n;
for(i=1;i<=n;i++)
{cout<<"Enter value"<<i<<":";
cin>>v[i];
s=s+v[i];
}
getch();
system("cls");
a=s/n;
for(i=1;i<=n;i++)
{cout<<v[i]<<" ";
}
cout<<"sum="<<s<<endl;
cout<<"average="<<a<<endl;
}
