#include <iostream>
using namespace std;
void dao(int n)
{
	int s=0;
	while(n!=0)
	{
		s=s*10+(n%10);
		n=n/10;
	}
	cout << s;
}
int main()
{
	int n;
	do{
	cout << "Nhap so nguyen duong :  ";
	cin >> n;
	} while (n<=0);
	cout << n << " -> ";
	dao(n);
 	return 0;
}
