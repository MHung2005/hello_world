//C++
//Le Manh Hung 20235096
#include<bits/stdc++.h>
using namespace std;
int fac(int n)//ham tinh giai thua
{
	int t=1;
	for (int i=1;i<=n;i++)
	t=t*i;
	return t;
}

int main()
{
	int k,n;//khai bao bien
	cin>>k>>n;//nhap gia tri cua bien
	cout<<fac(n)/(fac(k)*fac(n-k));
	//tinh to hop chap k cua n
	return 0;
	
}

