#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{int i,n;
char sp[50][30];
int mrks[100];
cout<<"How many students ? : ";
cin>>n;
for(i=1;i<=n;i++)
{cout<<"Enter names, marks :";
cin>>sp[i]>>mrks[i];
}
getch();
system("cls");
cout<<"names and marks"<<endl;
for(i=1;i<=n;i++)
{cout<<sp[i]<<" "<<mrks[i]<<endl;
}
}


