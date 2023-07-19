#include <iostream>
using namespace std;
struct diem{
	int x;
	int y;
};
void nhap(diem a[]){
	for(int i=0;i<2;i++){
		cout << "toa do x cua diem" <<" "<< i+1 << " = ";
		cin >> a[i].x ;
		cout << "toa do y cua diem" <<" "<< i+1 << " = ";
		cin >> a[i].y ;
	}
}
void tinhvt(diem a[],diem &vt )
{
      vt.x=a[1].x-a[0].x;
      vt.y=a[1].y-a[0].y;
      cout<<"("<<vt.x<<","<<vt.y<<")"<<endl;
}
void tongvt(diem vt1,diem vt2, diem &tong )
{

    tong.x=vt1.x+vt2.x;
    tong.y=vt1.y+vt2.y;
    cout<<"tong 2 vecto la:("<<tong.x<<","<<tong.y<<")"<<endl;
}
void hieuvt(diem vt1,diem vt2)
{
    diem hieu;
    hieu.x=vt1.x-vt2.x;
    hieu.y=vt1.y-vt2.y;
    cout<<"hieu 2 vecto la:("<<hieu.x<<","<<hieu.y<<")"<<endl;
}
void tichvaktvt(diem vt1,diem vt2)
{
    int tich;
    tich=vt1.x*vt2.x+vt1.y*vt2.y;
    cout<<"tich 2 vecto la:"<<tich<<endl;
    if (tich==0){cout<<"2 vec to vuong goc";}else{cout<<"2 vec to khong vuong goc";}
}


    int main()
{
    diem a[2],b[2],vt1,vt2,vtcc;
    cout<<"NHAP TOA DO 2 DIEM CUA VECTO AB:"<<endl;
    nhap(a);
    cout<<"TOA DO VECTO AB LA:";
    tinhvt(a,vt1);
    cout<<"NHAP TOA DO 2 DIEM CUA VECTO CD:"<<endl;
    nhap(b);
    cout<<"TOA DO VECTO CD LA:";
    tinhvt(b,vt2);
    cout<<"KET QUA PHAN TICH:"<<endl;
    tongvt(vt1,vt2,vtcc);
    hieuvt(vt1,vt2);
    tichvaktvt(vt1,vt2);
    cout<<a[0].x;
    cout<<vtcc.x;
    return 0;
}










































