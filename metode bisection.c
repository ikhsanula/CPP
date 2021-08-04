//porgram bisection

#include<iostream>
using namespace std;

double fungsi(double x)
	{
	return (4*x*x*x*x)+(7*x*x*x)-(19*x*x)+(7*x)-40;
	}
int main ()
{
	double c,a,b;
	double e;
	int i;
	a=-3;
	b=0;
	e=0.001;
	i=0;
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
	if(fungsi(a)*fungsi(b)>=0)
	{
		cout<<"Batas Salah"<<fungsi(a)<<endl;
		cout<<fungsi(b);
		return 0;
	}
	while ((b-a)>=e) 
	{
		c=(a+b)/2;
		if (fungsi(c)==0.0)
		{
			break;
		}
		else if (fungsi(c)*fungsi(a)<0)
		{
			b=c;
		}
		else
		{
			a=c;
		}
	i=i+1;
	cout<<i<<".Akarnya ="<<c<<endl;
	}
	
	return 0;
}

		