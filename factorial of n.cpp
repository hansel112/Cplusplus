#include<iostream>
#include<math.h>
using namespace std;
int main()
{int i,n;
double int f;
cout<<"\n\n\t\t FACTORIAL OF n";
cout<<"\n\nEnter any integer:";
cin>>n;
if(n<0)
{cout<<"\n\n\t Negative value are not considered";
f=-10;
}else if(n<2)
{f=1;
}
else{for(i=n-1;i>=2;i--)
{f=f*i;
}
}
cout<<"\n\nThe"<<n<<"!="<<f;
}
