#include <iostream>
using namespace std;
int tt(int a,int b, int c)
        {
         return a*b*c;
        }

int main()
{
    int a,b,c;
	while(a<=0||b<=0||c<=0)
	{
	cout<<"nhap a:";cin>>a;
	cout<<"nhap b:";cin>>b;
	cout<<"nhap c:";cin>>c;
	}
	cout << "The tich la : " << tt(a,b,c);
	return 0;
}

