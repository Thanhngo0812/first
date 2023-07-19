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

void tbmang(int mang[],int n)
{
 int tb,tong=0;

 for(int i=0;i<=n-1;i++)
    {
     tong+=mang[i];
    }

    cout<<"tb="<<(float)tong/n;
   }

int main()
{
int n;
cout<<"nhap phan tu cua mang:";cin>>n;
int mang[n];
nhapmang(mang,n);
tbmang(mang,n);
return 0;

}
