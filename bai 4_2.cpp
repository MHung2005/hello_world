//C++
// Le Manh Hung_20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,l;//khai bao bien
	string a,b;//khai bao bien
	cin>>a>>b;//nhap gia tri cua bien
	int s[a.length()];//khai bao bien
	for (int i=0;i<a.length();i++)
	      s[i]=0;
	for (int i=0;i<a.length();i++)
	  {
	  	for (int j=0;j<b.length();j++)
	  	{
	  		if (a[i]==b[j])
			//tim kiem cac phan tu giong nhau
	  		{
		    t=i; 
		    l=j;
	  	    while (a[t]==b[l])
	  	    {
	  	    	t++;
	  	    	l++;
	  	    }
	  	   s[i]=t-i;//mang luu do dai xau con
	        }
        }
     }
	  int m=s[0];
	  for (int i=0;i<a.length();i++)
	  
	     if (m<s[i])//tim kiem xau con dai nhat
           m=s[i];
	  cout<<m;
	  return 0;	       
	
}

