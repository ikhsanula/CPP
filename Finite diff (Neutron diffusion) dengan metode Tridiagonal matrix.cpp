#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float dx,D,k;
	float x[51],y[51],z[51];
	float p[51],s[51];
	int i;
	dx=0.06;
	D=0.16667;
	for(i=0;i<51;i++)//Untuk mengisi koefisien pada setiap elemen di matriks
	{
		x[i]= -1*D/(dx*dx);
		y[i]= 1+ (2*D/(dx*dx));
		z[i]= -1*D/(dx*dx);
		s[i]= 100;
	}
	for(i=2;i<51;i++)//Meeliminasi elemen matriks
	{
		k=x[i]/y[i-1];
		y[i]=y[i]-(k*z[i-1]);
		s[i]=s[i]-(k*s[i-1]);
	}
	x[0]=0;
	z[50]=0;
	p[0]=0;
	p[50]=0;
	s[0]=0;
	s[50]=0;
	for(i=49;i>0;i--)//mengsubsitusi lalu dapat nilai p(fluks)
	{
		p[i]=(s[i]-(z[i]*p[i+1]))/y[i];
	}
	cout<<"nilai x"<<"\t"<<"Nilai Fluks"<<endl;
	for(i=0;i<51;i++)
	{
		cout<<dx*i<<"\t"<<p[i]<<endl;
	}
	return 0;
}
