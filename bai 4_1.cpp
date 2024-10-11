//C++
// Le Manh Hung_20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;//khai bao bien
	cin>>m>>n;//nhap gia tri cua bien
	int a[m][n],b[3][3],c[m-2][n-2];//khai bao bien
	for (int i=0;i<m;i++)
	 for (int j=0;j<n;j++)
	     cin>>a[i][j];//nhap gia tri cua bien
	for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            cin>>b[i][j];//nhap gia tri cua bien
    for (int i=0;i<m-2;i++)
       for (int j=0;j<n-2;j++)
         {
         	int t=0;
	        for (int x=i;x<i+3;x++)
                for (int y=j;y<j+3;y++)
                {
        	       t=a[x][y]*b[x-i][y-j]+t;
	         	}
	        c[i][j]=t;
		 }
	for (int i=0;i<m-2;i++)
	{
       for (int j=0;j<n-2;j++)
          cout<<c[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

