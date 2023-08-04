#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct cxn{float a1,a2,b1,b2;
};
int main()
{cxn Z,Q;
float sum,diff,pdt,division,rp,imm;
cout<<"THE SUM, DIFFERENCE, PRODUCT AND DIVISION OF TWO COMPLEX NUMBERS:"<<endl;
cout<<"enter a1 :";cin>>Z.a1;
cout<<"enter b1 :";cin>>Z.b1;
cout<<"enter a2 :";cin>>Q.a2;
cout<<"enter b2 :";cin>>Q.b2;
getch();system("cls");
cout<<"Z+Q"<<endl;
rp=Z.a1+Q.a2;imm=Z.b1+Q.b2;
cout<<"sum="<<rp<<"+"<<imm<<"i"<<endl;
cout<<"Z-Q"<<endl;
rp=Z.a1-Q.a2;imm=Z.b1-Q.b2;
cout<<"diff="<<rp<<"+"<<imm<<"i"<<endl;
cout<<"Z*Q"<<endl;
rp=(Z.a1*Q.a2)-(Z.b1*Q.b2);
imm=(Z.a1*Q.b2)+(Q.a2*Z.b1);
cout<<"pdt="<<rp<<"+"<<imm<<"i"<<endl;
cout<<"Z/Q"<<endl;
rp=((Z.a1*Q.a2)+(Z.b1*Q.b2))/((Q.a2*Q.a2)+(Q.b2*Q.b2));
imm=((Q.a2*Z.b1)-(Z.a1*Q.b2))/((Q.a2*Q.a2)+(Q.b2*Q.b2));
cout<<"division="<<rp<<"+"<<imm<<"i"<<endl;
}
