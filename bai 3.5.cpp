//C++
//Le Manh Hung 20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,t=0;//khai bao bien
	cin>>n>>m;//nhap gia tri cua bien
	int a[10000],b[10000],c[10000];//khai bao bien
	for (int i=0;i<n;i++)
	{
	  cin>>a[i];//nhap gia tri cua bien
	  if(a[i]==m) b[i]=1;
    }
     for (int i=0;i<n;i++)
       if (b[i]==1) {t++;}
	if (t==0)
	   {
	   	cout<<"NO";
	   	return 0;
	   }
    for (int i=0;i<n;i++)
       if (b[i]==1)
        {
        	cout<<i<<" ";
        	break;
		}
	for (int i=n-1;i>=0;i--)
	{
		if (b[i]==1)
		{
			cout<<i<<" ";
			break;
		}
	}
	
	return 0;
   
	
}

