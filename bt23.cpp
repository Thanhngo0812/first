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
void find(int a[][100], int m, int n)
{
	int min,max;
	for (int i = 0; i < m; i++)
	{
		min = a[i][0];
		for (int j = 0; j < n;j++)
		{
			if (min > a[i][j])
				min = a[i][j];
		}
		cout << "minRow " << i+1 << " = " << min<<endl;
	}
	for (int j = 0; j < n; j++)
	{
		max = a[0][j];
		for (int i = 0; i < m; i++)
		{
				if (max < a[i][j])
					max = a[i][j];
		}
		cout << "maxColumn" << j+1 << " = " << max<<endl;
	}
}
int main()
{
	int a[100][100], m, n;
	nhapMang(a, m, n);
	find(a,m,n);
	return 0;
}
