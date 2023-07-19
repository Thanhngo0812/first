#include <iostream>
using namespace std;
void nhapMang(int a[100][100], int &m, int &n)
{
	do
	{
		cout << "Nhap so dong : ";
		cin >> m;
		cout << "Nhap so cot : ";
		cin >> n;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
			{
				cout << "a[" << i << "]"
					 << "[" << j << "] = ";
				cin >> a[i][j];
			}
	} while ((m < 0) || (n < 0));
}
void xuatMang(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
int main()
{
	int a[100][100], m, n,b[100][100],m1,n1;
	do{
		cout << "Nhap 2 ma tran cung cap\n";
		nhapMang(a, m, n);
		nhapMang(b,m1,n1);
	}while((m!=m1)||(n!=n1));
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			a[i][j]+=b[i][j];
	xuatMang(a, m, n);
	return 0;
}
