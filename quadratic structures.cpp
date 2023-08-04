#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct quad{float a,b,c;
};
int main()
{quad Q;
float x1,x2,d,rp,imm;
cout<<"enter a,b,c :";cin>>Q.a>>Q.b>>Q.c;
d=(Q.b*Q.b)-(4*Q.a*Q.c);
if(d>0)
{x1=(-Q.b+sqrt(d))/(2*Q.a);
x2=(-Q.b-sqrt(d))/(2*Q.a);
cout<<"x1="<<x1<<endl;
cout<<"x2="<<x2<<endl;
}
else if(d==0)
{x1=-Q.b/(2*Q.a);
cout<<"x1=x2="<<x1<<endl;
}
else
{rp=-Q.b/(2*Q.a);
imm=sqrt(-d)/(2*Q.a);
cout<<"x1="	<<rp<<"+"<<imm<<"i"<<endl;
cout<<"x2="<<rp<<"-"<<imm<<"i"<<endl;
}
}
