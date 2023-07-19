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
int main()
{
	int a[100][100], m, n, b[100][100], m1, n1;
	do
	{
		cout << "Nhap 2 ma tran \n";
		nhapMang(a, m, n);
		nhapMang(b, m1, n1);
	} while (n != m1);
	cout << "Tich 2 ma tran la : " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int k = 0; k < n1; k++)
		{
			int s = 0;
			for (int j = 0; j < n; j++)
				s = s + a[i][j] * b[j][k];
			cout << s << " ";
		}
		cout << endl;
	}
	return 0;
}
