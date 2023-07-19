#include <iostream>
using namespace std;


    int ptts(int a)
    {

    int dem;
    for(int i=2;i<a;i++)
    {
        dem=0;
        while(a % i == 0)
        {
            dem=dem+1;
            a=a/i;
        }
        if(dem==1) {cout<<i<<"*";}
        if (dem>1) {cout<<i<<"^"<<dem<<"*";}

         }
         return a;
    }

int main()
 {
     int n;
     cout<<"nhap so n:";
     cin >>n;
     cout<<ptts(n);
    return 0;
 }
