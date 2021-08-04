#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	float re,dp_dx,dy,v,l,x_old,p,u,e;
	float y[11],x[11];
	int i,a;
	e=0.000001;
	l=0.01;
	re=500;
	u=0.001;
	p=1000;
	float f =24/re;
	v = re*u/(p*l);
	dp_dx= (f*p*v*v)/(l*2);
	/*cout<<"Masukan nilai dy"<<endl;//masukan dy=0.001
	cin>>dy;*/
	dy=0.001;
	for (i=0; i<=10; i++)
	{
		y[i]=i*dy;
		x[i]=0.001;
	}
	x[0]=0;
	x[10]=0;
	x_old=0;
	do
	{
		a=0;
		for (i=1;i<10;i++)
		{
			x_old = x[i];
			x[i]=((x[i+1]+x[i-1])/2)+(dp_dx*dy*dy/(2*u));
			if (fabs(x[i]-x_old)>=e)
			{
				a++;
			}
		}
	}while (a>0);
	for(i=0;i<=10;i++)
	{
	cout<<x[i]<<"\t"<<y[i]<<endl;
	}
	return 0;
}
