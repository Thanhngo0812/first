#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int a=0,b=0,c=0,d=0,e=0,f=0;
    for(int i=1;i<=6000000;i++)
    {
      int xucxac;
      xucxac=rand()%6+1;
     if (xucxac==1){a++;};
     if (xucxac==2){b++;};
     if (xucxac==3){c++;};
     if (xucxac==4){d++;};
     if (xucxac==5){e++;};
     if (xucxac==6){f++;};


    }
    cout<<"so lan 1 xuat hien:"<<a<<endl;
    cout<<"so lan 2 xuat hien:"<<b<<endl;
    cout<<"so lan 3 xuat hien:"<<c<<endl;
    cout<<"so lan 4 xuat hien:"<<d<<endl;
    cout<<"so lan 5 xuat hien:"<<e<<endl;
    cout<<"so lan 6 xuat hien:"<<f<<endl;
    return 0;
}
