#include <iostream>
using namespace std;
int ktsnt(int a)
{
    int dem=0;
    for ( int i = 1; i < a; i++)
    {
       if (a%i==0)

{
    dem=dem+1;
}

    }
    return dem;
}
int demsnt(int b)
 {
     int dem2=0;
          for(int f=1;f<=b;f++)
     {
       if (ktsnt(f)==1)
       {
           dem2=dem2+1;
           cout<<f<<endl;
       }
     }
     return dem2;
 }
 int main()
 {
     int n;
     cout<<"nhap so nguyen to:";
     cin >>n;
     cout<<"co tat ca"<<" "<<demsnt(n)<<" "<<"snt";
     return 0;
 }
