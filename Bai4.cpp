#include <bits/stdc++.h>
using namespace std;
int gt(int n)
{
	if(n==1 || n==0)
		return 1;
	return n*gt(n-1);
}
float tinhS1(int n,int x)
{
	if(n==1)
		return x;
	return (pow(x,n)*1.0)/(gt(n)*1.0)+(float)tinhS1(n-1,x);
}
float tinhS2(int n,int x)
{
	if(n==0)
		return 1;
	return (pow(x,2*n)*1.0)/(gt(2*n)*1.0)+(float)tinhS2(n-1,x);
}
float tinhS3(int n,int x)
{
	if(n==0)
		return (x+1);
	return (pow(x,2*n+1)*1.0)/(gt(2*n+1)*1.0)+(float)tinhS3(n-1,x);
}
main()
{
	int n,x;
	cout<<"Nhap n can tinh: ";cin>>n;
	cout<<"Nhap x can tinh: ";cin>>x;
	cout<<"S1= "<<tinhS1(n,x)<<endl;
	cout<<"S2= "<<tinhS2(n,x)<<endl;
	cout<<"S3= "<<tinhS3(n,x);
	
}
