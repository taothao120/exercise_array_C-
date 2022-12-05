#include<iostream>
#include<cmath>
#include<conio.h>
 using namespace std;
int main(){
            	int n,P=0;
            	cout<<"nhap so chieu cua vecto\n";
            	cin >> n;
            	int S[n];
            	int A[n],B[n];
                      cout<<"nhap vecto x"<<"\n";
            	for (int i=1;i<=n;i++){
                            	cin>> A[i];
            	}
            	cout<<"nhap vecto y\n";
            	for (int i=1;i<=n;i++){
                            	cin>>B[i];
            	}
            	for (int i=1;i<=n;i++){
	S[i]=A[i]+B[i];
            	P=P+A[i]*B[i];
}
cout<<"tong 2 vecto la " <<"(";
for (int i=1;i<=n;i++){
            	cout << S[i]<<",";
}
cout<<")";
            	cout <<" tich vo huong cua 2 vecto la p="<<P;
}
