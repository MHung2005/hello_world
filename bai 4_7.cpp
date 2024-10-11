//C++
// Le Manh Hung_20235096
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;//khai bao bien
	cin>>s;//nhap gia tri cua bien
	int a=0,b=s.length()-1;//khai bao bien
	while (a!=b)
	{
		if (s[b]>=s[a] && s[b]<=s[a+1])
		//dieu kien de la chuoi tang xoay tron oc
		   {
		   	a++;
		   	b--;
		   }
		else break;
	}
	
	if (a==b||a==b+1) cout<<"true";
	else cout<<"false";
	return 0;
	
}

