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

void minmang(int mang[],int n)
{
 int min=mang[0];
 for(int i=1;i<=n-1;i++)
    {
     if (mang[i]<min){min=mang[i];}
    }
    cout<<"min mang:"<<min;
}

int main()
{
int n;
cout<<"nhap phan tu cua mang:";cin>>n;
int mang[n];
nhapmang(mang,n);
minmang(mang,n);
return 0;

}
