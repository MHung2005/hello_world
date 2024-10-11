//C++ 
//C++
//Le Manh Hung 20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t=1;//khai bao bien
	cin>>n;//nhap gia tri cua bien
    for (int i=1;i<=10;i++)
     t=t*10;
	if (n>t) //kiem tra gia tri cua n
	{
	cout<<"TOO BIG";
	return 0;
    }
	while (n%10==0) n=n/10;
	while(n/10!=0)
	{
		cout<<n%10;
		n=n/10;
	}
	cout<<n;
	return 0;
}

