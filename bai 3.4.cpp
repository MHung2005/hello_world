//C++
//Le Manh Hung 20235096
#include<bits/stdc++.h>
using namespace std;
int nn(int a,int b,int c)//ham tim min
{
	
	if (a<=b && a<=c) return a;
	if (b<=a && b<=c) return b;
	if (c<=a && c<=b) return c;
	
}
int n,m,t,h=0,l;//khai bao bien
int a[1000][1000],b[1000][1000];//khai bao bien
int main()
{
	cin>>m>>n;//nhap gia tri cua bien
    
    for (int i=1;i<=m;i++)
      for (int j=1;j<=n;j++)
        cin>>a[i][j];//nhap gia tri cua bien
    for (int i=0;i<=m+1;i++)
      for (int j=0;j<=n+1;j++)
        if (i==0|| i==m+1) b[i][j]=9999;
   
    for (int j=1;j<=n;j++)
      for (int i=1;i<=m;i++)
    {
    	if (j==0) b[i][j];
    	if (j>0) b[i][j]=a[i][j]+ nn(b[i-1][j-1],b[i][j-1],b[i+1][j-1]);
	}
	l=b[1][n];
	for (int i=1;i<=m;i++)
	{
		if (l>b[i][n])
		 l=b[i][n];
		
	}
	cout<<l;
	return 0;
    
}

