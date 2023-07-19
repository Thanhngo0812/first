#include <iostream>
#include <math.h>
using namespace std;
struct sophuc{
	int thuc;
	int ao;
};
 sophuc tong(sophuc a,sophuc b,sophuc &c){
	c.thuc=a.thuc+b.thuc;
	c.ao=a.ao+b.ao;
}
sophuc hieu(sophuc a,sophuc b,sophuc &c){
	c.thuc=a.thuc-b.thuc;
	c.ao=a.ao-b.ao;
}
float dolon(sophuc a){
	float b;
	b=sqrt(a.thuc*a.thuc+a.ao*a.ao);
	return b;
}
int main()
{
	 sophuc num1,num2,numtong,numhieu;
	cout << "Nhap so phuc thu 1:" ;
	cin >> num1.thuc >> num1.ao;
	cout << "Nhap so phuc thu 2:" ;
	cin >> num2.thuc >> num2.ao;
	tong(num1,num2,numtong);
	hieu(num1,num2,numhieu);
	cout << "Tong 2 so la : " << numtong.thuc << " + " << numtong.ao << "i"<<endl;
	cout << "Hieu 2 so la : " << numhieu.thuc << " + " << numhieu.ao << "i"<<endl;
	cout << "|" << num1.thuc << " + " << num1.ao << "i| = " << dolon(num1)<<endl;
	cout << "|" << num2.thuc << " + " << num2.ao << "i| = " << dolon(num2);
 	return 0;
}
