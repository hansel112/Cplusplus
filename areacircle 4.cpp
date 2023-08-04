#include<iostream>
using namespace std;
float a,r;
void readvalues(void)
{cout<<"AREA OF CIRCLE";
cout<<"enter radius";
cin>>r;
}
float areaofcircle(float y)
{float a;
a=3.1416*(r*r);
return a;
}
int main()
{float h;
readvalues();
h=areaofcircle(r);
cout<<"area of circle is"<<h<<endl;
}
