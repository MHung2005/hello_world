//C++
// Le Manh Hung_20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b=0;//khai bao bien
	cin>>n;//nhap gia tri cua bien
	string t;//khai bao bien
	string a[2*n];//khai bao bien
	getline(cin,a[0]);
	for (int i=0;i<2*n;i++)
	{
		getline(cin,a[i]);//nhap gia tri cua bien
	}
    for (int i=1;i<2*n;i=i+2)
    {
    	int f=a[i].find("longitude",0);
    	//tim kiem ki tu longitude
    	int l=a[i].find("latitude",0);
    	//tim kiem ki tu latitude
    	if ( f==-1 || l==-1)
    	{
    		cout<<"01/01/1970 00:00:00 AM";
    		b++;
    		break;
		}
		else
	   {
		    int x=a[i].find(":0,",0);
    	    if (x==-1) 
		   {
    		cout<<a[i-1];
    		b++;
    		break;
		   }
		
	    }
	}
	if(b==0) cout<<"01/01/1970 00:00:00 AM";
	
    
	return 0;
}

