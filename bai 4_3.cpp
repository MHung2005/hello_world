//C++
// Le Manh Hung_20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,a=-1;//khai bao bien
	string s,t;//khai bao bien
	cin>>s>>t;//nhap gia tri cua bien
	for (int i=0;i<s.length();i++)
	    {
	    	if (s[i]==t[0])
	//tim kiem vi tri xuat hien vi tri dau tien cua xau t trong xau s
	    	  {
	    	  	for (int j=0;j<t.length();j++)
	    	  	{
	    	  		m=0;
	    	  	    if (s[i+j]!=t[j])
	    	  	    //kiem tra xau t co nam trong xau s hay khong
	    	  	    {
	    	  	        m=-1;
	    	  	        break;
	    	  	    }
	    	  	}
	    	  	if (m==0) 
				  {
				  cout<<i+1<<" ";
				  a=1;
			      }
	    	  }
		}
	if (a==-1) cout<<a;
	return 0;

}

