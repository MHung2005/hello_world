//C++
// Le Manh Hung_20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100000],n=0;//khai bao bien
	string t,s;//khai bao bien
	map< string ,bool> f;
	while (cin>>s)//nhap gia tri cua bien
	{
		if (s=="*") break;
		f[s]=true;
	}
	while (cin>>t)//nhap gia tri cua bien
	{
		if (t=="***") break;
		cin>>s;
		if (t=="find") 
		{
			a[n]=f[s];//gan gia tri can tim vao mang a
			n++;
		}
		else {
			a[n]=1-f[s];//gan gia tri can tim vao mang a
			n++;
			f[s]=true;
		}
	}
	for (int i=0;i<n;i++)
	   cout<<a[i]<<endl;
	return 0;
}
