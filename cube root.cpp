
#include<iostream>
#include<math.h>
using namespace std;
int main()
{int xn=0;
double A=0,xn1=1;
cout<<"\n\n\t\t FINDING CUBE ROOTS OF NUMBERS";
cout<<"\n\n Enter coefficient of A";
cin>>A;
xn=A/10;
while(fabs(xn1-xn)>0.00000001) 
{xn=xn1;
xn1=(2*xn+A/(xn*xn))/3;
}
cout<<"\n\t The cube root is:"<<xn1;
}
