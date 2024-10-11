//C++
// Le Manh Hung_20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m=0;//khai bao bien
	cin>>n; //nhap gia tri cua bien
	string a;//khai bao bien
	cin>>a;//nhap gia tri cua bien
	for (int i=0;i<n;i++)
	{
	  if (a[i]!='#')
	  {
	  
	     cout<<a[i];
	     m=0;
	    }
	   if (a[i]=='#' && m==0)
	   {
	   	cout<<endl;
	   	m++;
	   }
    }
return 0;
	     
	    
	
}

