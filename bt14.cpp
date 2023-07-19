#include <iostream>
using namespace std;
#define MAX 100;
int n;
int mang[MAX];
void nhapmang(int mang[],int n)
{
    cin>>n;
 for(int i=0;i<=n-1;i++)
    {
             cout<<"mang["<<i<<"]:";
             cin>>mang[i];
    }
}

void thutumang(int a[],int n)
{
 for(int j=1;j<n;j++)
    {
        int key=a[j];
        int i=j-1;
        while(i>=0&&a[i]>key)
        {
            a[i+1]=a[i];i=i-1;
        }
        a[i+1]=key;
    }


}
void xuatmang(int mang[],int n)
{
 for(int i=0;i<=n-1;i++)
    {
             cout<<"mang["<<i<<"]:";
             cout<<mang[i]<<endl;
    }
}

int main()
{

nhapmang(mang,n);
thutumang(mang,n);
cout<<"sau khi sap xep"<<endl;
xuatmang(mang,n);
return 0;

}
