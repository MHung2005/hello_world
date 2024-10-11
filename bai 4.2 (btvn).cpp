//C++
// Le Manh Hung_20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//khai bao bien
	cin>>n;//nhap gia tri cua bien
    double x;//khai bao bien
    double *arr= new double [n];//khai bao bien
    cout << "Nhap mang : ";
    for (int i = 0; i < n; i++) 
	{
        cin >> *(arr+i);//nhap gia tri cua bien
    }
    cout<<"Mang sau khi nhap la: ";
     for (int i = 0; i < n; i++) 
     {
	 
    cout<<*(arr+i)<<" ";
}
cout<<endl;
    cout<<"Nhap so can so sanh: ";
    cin>>x;
    for (int i=0;i<n;i++)//sap xep mang
       for (int j=i+1;j<n;j++)
    {
    	if( *(arr+i)> *(arr+j))
    	{
    		double t=*(arr+i);
    		*(arr+i)=*(arr+j);
    		*(arr+j)=t;
		}
    }
    cout<<"Mang sau khi sap xep tang dan la: ";
    for (int i=0;i<n;i++)
    {
    	cout<<*(arr+i)<<" ";
	}
	cout<<endl;
	for (int i=0;i<n;i++)
       for (int j=i+1;j<n;j++)//sap xep mang
    {
    	if(*(arr+i)<*(arr+j))
    	{
    		double t=*(arr+i);
    		*(arr+i)=*(arr+j);
    		*(arr+j)=t;
		}
    }
    cout<<"Mang sau khi sap xep giam dan la: ";
    for (int i=0;i<n;i++)
    {
    	cout<<*(arr+i)<<" ";
	}
	cout<<endl;
	double sum=0,tong=0;
	for (int i=0;i<n;i++)
	{
		if (*(arr+i)>0) sum=sum+*(arr+i);
		else tong=tong+*(arr+i);
	}
	cout<<"Tong cac phan tu duong cua mang la: "<<sum<<endl;
	cout<<"Tong cac phan tu am cua mang la: "<<tong<<endl;
	cout<<"Cac phan tu lon hon "<<x<<"la: ";
	for (int i=0;i<n;i++)
	{
		if(*(arr+i)>x) cout<<*(arr+i)<<" ";
	}
	cout<<endl;
	cout<<"Cac phan tu nho hon "<<x<<"la: ";
	for (int i=0;i<n;i++)
	{
		if(*(arr+i)<x) cout<<*(arr+i)<<" ";
	}
	return 0;
	
	
	
}
