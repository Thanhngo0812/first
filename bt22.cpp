#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n)
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
void sapxep(int a[][100],int m,int n)
{
	int temp;
	for(int i=0;i<m;i++)
		for(int j=0;j<n-1;j++)
			for(int k=j+1;k<n;k++)
				if(a[i][j]>a[i][k]){
					temp=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
}
int main()
{
	int a[100][100], m, n;
	nhapMang(a, m, n);
	sapxep(a,m,n);
	xuatMang(a, m, n);
	return 0;
}
