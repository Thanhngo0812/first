#include <iostream>
using namespace std;
struct point{
	int x;
	int y;
};
void nhap(point a[],int n){
	for(int i=0;i<n;i++){
		cout << "P" << i+1 << " = ";
		cin >> a[i].x >>a[i].y;
	}
}
void Check(point a[],int n,int &count,int &countU,int &countD){
	float c;
	for(int i=0;i<n;i++)
	{
		c=-(3*a[i].x+1)/4.0;
		if(c==(float)a[i].y)
			count++;
		else if(c > (float)a[i].y) countD++;
		else countU++;
	}
}
int main()
{
	int n,countU=0,countD=0,count=0;
	cout << "Nhap so diem : ";
	cin >> n;
	point a[n];
	nhap(a,n);
	Check(a,n,count,countU,countD);
	cout << "Co " << count << " diem thuoc duong thang 3x + 4y + 1 = 0" << endl;
	cout << "Co " << countU << " diem nam tren duong thang 3x + 4y + 1 = 0" << endl;
	cout << "Co " << countD << " diem nam duoi duong thang 3x + 4y + 1 = 0" << endl;
 	return 0;
}
