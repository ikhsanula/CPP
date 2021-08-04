#include<iostream>
#include<math.h>

using namespace std;

int main ()
{
	int matriks1[10][10]={
	{5,9,10},
	{9,7,12},
	{0,4,2},
	{8,1,1}};
	int matriks2[10][10]={{3},{11},{9}};
	int matriks3[10][10];
	int i, j, jumlah, m, n, p, q, k;
	m=4;
	n=3;
	p=3;
	q=1;
	
	for(i = 0; i < m; i++)
		{
			for(j = 0; j < q; j++)
			{
				for(k = 0; k < p; k++)
				{
					jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
				}
				matriks3[i][j] = jumlah;
				jumlah = 0;
			}
		}
	cout << "Hasil perkalian matriks: \n";
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < q; j++)
		{
			cout << matriks3[i][j] << "\t";
		}
		cout << endl;
	
	}
	return 0;
}
