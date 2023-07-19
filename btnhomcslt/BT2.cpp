#include <iostream>
#include <cmath>
using namespace std;
// CAU 1
bool checksnt(int n){
    if(n==1){return false;}
	for (int i=2;i<=sqrt(n);i++)
    {

        if(n==2) return true;
		if(n%i==0) return false;}
	return true;
}

bool checkscp (int n)
	{
	 if(n==1){return false;}
     int sqr;
     sqr=sqrt(n);
     if(sqr*sqr==n)
     {return true;}
    return false;
	}
//CAU 2
void nhapmang(int a[],int m)
{
    for (int i=0;i<m;i++)
    {
        cout<<"hay nhap phan tu thu"<<" "<<i+1<<":";cin>>a[i];
    }
}

//CAU 3

void demsnt(int a[],int m,int n)
{
    int dem=0;
    for (int i=0;i<m;i++)
    {
        if(checksnt(a[i])&&a[i]<n)
        {
            dem++;
        }

    }
    cout<<"so nguyen to nho hon n la:"<<dem<<endl;

}
void demscp(int a[],int m,int n)
{
    int dem=0;
    for (int i=0;i<m;i++)
    {
        if(checkscp(a[i])&&a[i]<n)
        {
            dem++;
        }

    }
    cout<<"so chinh phuong nho hon n la:"<<dem<<endl;

}

int sntlonhon(int n){
	for(int i=n+1;i>=n;i++)
		if(checksnt(i)) return i;}

int scplonhon(int n){
	for(int i=n+1;i>=n;i++)
		if(checkscp(i)) return i;}



int main()
{
//CAU 1
    int n;
    cout <<"hay nhap so can kiem tra:";cin>>n;
    if(checksnt(n)){cout<<n<<" "<<"la so nguyen to"<<endl;}else{cout<<n<<" "<<"ko phai la so nguyen to"<<endl;}
    if(checkscp(n)){cout<<n<<" "<<"la so chinh phuong"<<endl;}else{cout<<n<<" "<<"ko phai la so chinh phuong"<<endl;}
//CAU 2
    int m;
    cout<<"hay nhap so phan tu cua day so nguyen:";cin>>m;
    int mang[m];
    nhapmang(mang,m);
    demsnt(mang,m,n);
    demscp(mang,m,n);
//CAU 3
    cout<<"so nguyen to nho nhat lon hon"<<" "<<n<<" "<<"la:"<<sntlonhon(n)<<endl;
    cout<<"so chinh phuong nho nhat lon hon"<<" "<<n<<" "<<"la:"<<scplonhon(n);
    return 0;
}
