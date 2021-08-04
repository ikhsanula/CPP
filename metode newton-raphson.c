#include <iostream>
#include <math.h>
using namespace std;
double fn(double x)
{   
     return (4*x*x*x*x)+(7*x*x*x)-(19*x*x)+(7*x)-40 ;
}
double de(double x)
{   
     return  (16*x*x*x)+(21*x*x)-(38*x)+7 ;
}
int main()
{   double a,z,e,n;
	int i;
	e=0.1;
	n=9;
    cout<<"Enter Number ";
    cin>>a;
    while(abs(fn(z))>e)
    {
		i=i+1;
		if (n==i-1)
		{
			break;
		}
		else
		{
        z=a-(fn(a)/de(a));
        cout<<"The iterative "<<i<<" root is "<<z;    
        a=z;
        cout<<endl;
		}
    }
    return 0;
}