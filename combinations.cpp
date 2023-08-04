#include<iostream>
#include<math.h>
using namespace std;
int main()
{int i,n,r;
double f1,f2,f3,C;
cout<<"\n\n\t\t COMBINATIONS OF NUMBERS";
cout<<"\n\nEnter coefficients n,r";
cin>>n>>r;
f1=n;f2=n-r;f3=r;
if(n>r)
{for(i=n-1;i>=2;i--)
f1=f1*i;
for(i=(n-r)-1;i>=2;i--)
f2=f2*i;
for(i=r-1;i>=2;i--)
f3=f3*i;
C=f1/(f2*f3);
}
else if(n<r)
{C=-10;
}
else{C=1;
}
cout<<"\n\t C"<<r<<"="<<C;
}
