//C++
//Le Manh Hung 20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t=1,a[1000],m=0;//khai bao bien
	cin>>n;//nhap gia tri cua bien
	t = (1<<16) - 1;
	if (n>t) //kiem tra gia tri cua n
	{
	cout<<"TOO BIG";
	return 0;
   }
	while (n!=0 && n!=1)//tinh so nhi phan tuong ung
	{
		a[m]=n%2;
		m++;
		n=n/2;
	}
	cout<<n;
	for (int i=m-1;i>=0;i--)
	cout<<a[i];
	
	return 0;
}

