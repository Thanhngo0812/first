#include <iostream>

using namespace std;

bool nt(int n){
	if(n<2) return false;
	for(int i=2; i<n; i++){
		if(n%i==0) return false;
	}
	return true;
}

int max(int a, int b){
	return a<b? b:a;
}

int main(){
	int n;
	cout<<"nhap so so nguyen:";cin >> n;cout<<endl;
	int a[n];
	for(int i=0; i<n; i++){
		cout<<"nhap so nguyen thu"<<" "<<i+1<<":";cin >> a[i];
	}
	for(int i=0; i<n; i++){
		cout << "a[" << i+1<< "]=" << a[i] << endl;
	}
	int tong=0;
	for(int i=0; i<n; i++){
		tong+=a[i];
	}
	cout << " Cau a/ tong cac phan tu cua day la: " << tong << endl;
	int dem=0;
	for(int i=0; i<n; i++){
		if(nt(a[i])==true)
		dem++;
	}
	cout << " Cau b/ trong day co " << dem << " so nguyen to " << endl;
	int iu=0, IU=1;
	for(int i=1; i<n; i++){
		if(a[i]>a[i-1]){
			++IU;
		}
		else {
			IU=1;
		}
		iu=max(iu, IU);
	}
	cout << " Cau c/ chieu dai cua day con tang dai nhat la: " << iu;
}

