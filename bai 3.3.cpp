//C++
//Le Manh Hung 20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100000],t,n,m,b[100000];//khai bao bien
	cin>>n;//nhap gia tri cua bien
	for (int i=0;i<=100000;i++)
	     b[i]=0;
	for (int i=0;i<n;i++)
	{
	    cin>>a[i];//nhap gia tri cua bien
        b[a[i]]++;// mang dem so lan xuat hien cua a[i]
    }
    for (int i=0;i<=100000;i++)
      if (b[i]!=0)
      {
      	for (int j=1;j<=b[i];j++)
      	  cout<<i<<" ";
	  }
	return 0;
}

