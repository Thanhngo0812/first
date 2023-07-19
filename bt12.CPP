#include <iostream>
using namespace std;
void nhapmang(int mang[],int n)
{
 for(int i=0;i<=n-1;i++)
    {
             cout<<"mang["<<i<<"]:";
             cin>>mang[i];
    }
}

void ktmang(int mang[],int n)
{
 int x,dem=0;
 cout<<"nhap so can kiem tra:";cin>>x;
 for(int i=0;i<=n-1;i++)
    {
     if(mang[i]==x){dem+=1;}
    }
    cout<<"co"<<" "<<dem<<" "<<"phan tu giong"<<" "<<x;
   }

int main()
{
int n;
cout<<"nhap phan tu cua mang:";cin>>n;
int mang[n];
nhapmang(mang,n);
ktmang(mang,n);
return 0;

}

