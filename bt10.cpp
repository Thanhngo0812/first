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
 int dem=0;
 for(int i=0;i<=n-1;i++)
    {
     while (mang[i]/10!=0)
     {
     dem+=1;
     mang[i]/=10;
     }
     cout<<"mang["<<i<<"] co:"<<dem+1<<" "<<"chu so"<<endl;
     dem=0;
    }
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
