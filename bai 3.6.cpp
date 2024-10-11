//C++
//Le Manh Hung 20235096
#include<bits/stdc++.h>
using namespace std;
int c(int k,int n)
{
	if (k==0 || k==n) return 1;
	
	if (k==1||k==n-1) return n;
	return c(k-1,n-1)+c(k,n-1);//ham de qui
	
}
int main()
{
	int k,n;//khai bao bien
	cin>>k>>n;//nhap gia tri cua bien
	cout<<c(k,n);
	return 0;
	
}

