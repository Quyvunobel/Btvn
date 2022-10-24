#include <bits/stdc++.h>
using namespace std;
void ktrasnt(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			dem++;
	}
	if(dem==2)
		cout<<"Day la snt";
	else
		cout<<"Day ko phai la snt";
}
main()
{
	int n;
	do
	{
		cout<<"Nhap so nguyen duong n can ktra: ";cin>>n;
	}
	while(n<=0);
	ktrasnt(n);
}
