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
void doiCot(int a[][100], int &x, int &y, int m, int n)
{
	int temp;
	do
	{
		cout << "Nhap 2 cot can doi : " <<endl;
		cin >> x >> y;
	} while ((x > n) || (y > n));
	for (int i = 0; i < m; i++)
	{
		temp = a[i][x - 1];
		a[i][x- 1] = a[i][y- 1];
		a[i][y - 1] = temp;
	}
}
int main()
{
	int a[100][100], m, n, x, y;
	nhapMang(a, m, n);
	doiCot(a, x, y, m, n);
	xuatMang(a, m, n);
	return 0;
}
