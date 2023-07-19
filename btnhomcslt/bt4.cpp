#include <iostream>
using namespace std;
struct phanso{
	int tu;
	int mau;
};
int ucln(int a,int b)
{
    int uoc,moc;
    if (a>b){moc=b;}else{moc=a;}
    for (int i=1;i<=moc;i++)
        {
            if(a%i==0 && b%i==0)
            {
                uoc=i;
            }
        }
        return uoc;
}
void nhapphanso(phanso a[],int n)
{
    for (int i=0;i<=n-1;i++)
{
    {
    cout<<"hay nhap tu so"<<" "<<i+1<<":";cin>>a[i].tu;cout<<endl;
    cout<<"hay nhap mau so"<<" "<<i+1<<":";cin>>a[i].mau;cout<<endl;
    if (a[i].mau==0){cout<<"mau ko the bang 0, xin hay nhap lai tu dau"<<endl;i=-1;}
    }

}
}

int ktphanso(phanso a[],int n)
{
    int dem;
    for(int i=0;i<=n-1;i++)
    {
        if((float)a[i].tu/a[i].mau<1)
        {
            dem++;
        }
    }
    return dem;
}
void psmax(phanso a[],int n)
{
    phanso maxps;
    int max=(float)a[0].tu/a[0].mau;
    maxps.tu=a[0].tu;
    maxps.mau=a[0].mau;
    for(int i=1;i<=n-1;i++)
    {
       if(max<(float)a[i].tu/a[i].mau)
       {
           maxps.tu=a[i].tu/ucln(a[i].tu,a[i].mau);
           maxps.mau=a[i].mau/ucln(a[i].tu,a[i].mau);

       }
    }
    if(maxps.mau==1){cout<<"phan so lon nhat o dang toi gian la:"<<maxps.tu;}
    else {cout<<"phan so lon nhat o dang toi gian la:"<<maxps.tu<<"/"<<maxps.mau;}
}



int main()
{
    int n;
    cout<<"hay nhap so phan so can kiem tra:";cin>>n;
    phanso a[n];
    nhapphanso(a,n);
    cout<<"so phan so be hon 1 la:"<<ktphanso(a,n)<<endl;
    psmax(a,n);
    return 0;


}
