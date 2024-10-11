//C++
// Le Manh Hung_20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//khai bao bien
	cin>>n;//nhap gia tri cua bien
	string a[n],t,s;//khai bao bien
	getline(cin,a[0]);
	for (int i=0;i<n;i++)
	{
		getline(cin,a[i]);//nhap gia tri cua bien
	}
	for (int i=0;i<n;i++)
	{
		if (a[i]=="")
		//tim kiem xem a[i] co phai xau rong khong
		{
			cout<<"Yeu cau nhap lai";
			return 0;
		}
   }
   cout<<"Xau can tim kiem la: ";
   cin>>s;
   for (int i=0;i<n;i++)//sap xep xau
	   for (int j=i+1;j<n;j++)
	   {
	   	if (a[i]>a[j])
	   	{
	   		t=a[i];
	   		a[i]=a[j];
	   		a[j]=t;
		}
	   }
	cout<<"Mang xau sau khi sap xep la:"<<endl;
    int m=0;
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
		if (s==a[i])
		{
		  m++;
		}
	}
	if (m==0) cout<<"Khong";
	else cout<<"Co";
	return 0;
}
