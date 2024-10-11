//C++
//Le Manh Hung 20235096
#include<bits/stdc++.h>
using namespace std;
int power (int a, int b)//ham tinh mu
{
	int t=1;
	for (int i=1;i<=b;i++)
	{
		t=t*a;
	}
	return t;
}
int main()
{
	int n,t=0,a[1000];//khai bao bien
	cin>>n;//nhap gia tri cua bien
	for (int i=0;i<n;i++)
	 {
	 	cin>>a[i];//nhap gia tri cua bien
	 	t=t+power(2,n-1-i)*a[i];
	 	//cong thuc chuyen tu so nhi phan sang so nguyen
	 }
	 cout<<t;
	 return 0;
}

