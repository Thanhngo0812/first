#include <iostream>
using namespace std;

int uoc(int a, int b)
{
int moc,ucln;
if (a>b) {moc=b;}else{moc=a;}
    for (int i=1;i<=moc;i++)
        {
          if (a%i==0 && b%i==0)
          {ucln=i;}
        }
    return ucln;
}

int boi(int a,int b)
{
int bcnn,moc;
if (a>b) {moc=a;}else{moc=b;}
    for (int i=a*b;i>=moc;i--)
        {
         if(i%a==0 && i%b==0)
         {bcnn=i;}
        }

    return bcnn;
}

int main()
{
int a,b;
cout<<"nhap so a:";cin>>a;
cout<<"nhap so b:";cin>>b;
cout<<"uoc chung lon nhat la:"<<uoc(a,b)<<endl;
cout<<"boi chung nho nhat la:"<<boi(a,b);
return 0 ;
}
