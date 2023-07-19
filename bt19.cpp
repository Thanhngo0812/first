#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m)
{
	do
	{
		cout << "Nhap so dong va so cot : ";
		cin >> m;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < m; j++)
			{
				cout << "a[" << i << "]"
					 << "[" << j << "] = ";
				cin >> a[i][j];
			}
	} while (m < 0);
}
int main()
{
	int a[100][100], m, s;
	nhapMang(a, m);
	for (int i = 0; i < m; i++)
		s = s + a[i][i];
	cout << "Tong duong cheo chinh la : " << s;
	return 0;
}
