//C++
//Le Manh Hung 20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[1000],t,n,m=-1;//khai bao bien
	cin>>n;//nhap gia tri cua bien
	for (int i=0;i<n;i++)
	    cin>>a[i];//nhap gia tri cua bien
	for(int i=0;i<n;i++)//sap xep day
	  for (int j=i+1;j<n;j++)
	  {
	  	if (a[i]>a[j])
	  	{
	  		t=a[i];
	  		a[i]=a[j];
	  		a[j]=t;
		}
	}
    for (int i=n-1;i>=0;i--)
		{
			if(a[i]!=a[n-1])//chon ra phan tu lon thu 2
			{
				m=i;
				break;
			}
		}
	if ( m!=-1) cout<<a[m];
	if ( m==-1) cout<<"NOT FOUND";
	return 0;
}

