#include <iostream>
using namespace std;
int henhiphan(int n)
{
	int s=0,i=1;
	while(n!=0)
	{
		s=s+(n%2)*i;
		n=n/2;
		i=i*10;
	}
	return s;
}
int main()
{
	int n;
	do{
		cout << "Nhap so tu nhien n n = ";
		cin >> n;
	}while(n<0);
	cout << "so nhi phan = " << henhiphan(n);
 	return 0;
}
