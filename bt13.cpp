#include <iostream>
#include <math.h>
using namespace std;
bool Check(int n){
	int i=sqrt(n);
	while (n%i!=0) i--;
	if (i==1) return 1;
	else return 0;
}
int main()
{
	 int n,temp=1;
	 do{
	 	cout <<"Nhap so tu nhien : ";
	 	cin >> n;
	 }while(n<0);
	 for(int z=5;z<=n;z++)
	 	for(int y=3;y<z;y++)
	 		for(int x=2;x<y;x++)
	 {
	if((Check(x))&&(Check(y))&&(Check(z)))
		if((x*x+y*y==z))
		{
			cout << x <<" "<<y<<" "<<z<<endl;
			 temp=0;
		}
	else continue;
	 }
	if(temp!=0) cout<<-1;
 	return 0;
}
