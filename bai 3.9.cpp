//C++
//Le Manh Hung 20235096
#include<bits/stdc++.h>
using namespace std;
long long k,n,a[1000][1000];// khai bao bien
int main()
{
	
	cin>>k>>n;//nhap gia tri cua bien
	for (int i=0;i<=n;i++)
	   for (int j=0;j<=n;j++)
	{
		if (i==0 || j==0 || i==j) a[i][j]=1;
		else {
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
		
	}
	cout<<a[n][k];
	return 0;
}

