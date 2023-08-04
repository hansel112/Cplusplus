#include<iostream>
#include<math.h>
using namespace std;
float t,u,s;
void readvalues(void)
{cout<<"DISTANCE";
cout<<"enter time,initial velocity";
cin>>t>>u;
}
float distance(float x, float y)
{float s;
s=(3*(x*x*x))+(2*y)/(pow(x, 1/3));
return s;
}
int main()
{float f;
readvalues();
f=distance(t, u);
cout<<"distance is"<<f<<endl;
}
