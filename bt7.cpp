#include <iostream>
using namespace std;
int mytery(int,int);
int sum(int);
int main()
{
int x,y;
cout<<"vao 2 so nguyen:";
cin>>x>>y;
cout<<"ket qua la:"<<mytery(x,y);
}
int mytery(int a,int b)
{
    if(b==1)
    return a;
    else
    return a+mytery(a,b-1);

}
//cho a tinh a nhan b
