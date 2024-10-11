//C++
// Le Manh Hung_20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;//khai bao bien
	cin>>m;//nhap gia tri cua bien
	string a[m],t;//khai bao bien
	for (int i=0;i<m;i++)
	    cin>>a[i];//nhap gia tri cua bien
	for (int i=0;i<m;i++)   //sap xep cac xau
	   for (int j=i+1;j<m;j++)
	   {
	   	if (a[i]>a[j])
	   	{
	   		t=a[i];
	   		a[i]=a[j];
	   		a[j]=t;
		}
	   }
	for (int i=0;i<m;i++)
	    cout<<a[i]<<endl;
	return 0;
}

