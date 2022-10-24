#include <bits/stdc++.h>
using namespace std;
void nhap(int &n)
{
	do
	{
		cout<<"Nhap so pt cua mang: ";cin>>n;
	}
	while(n<3);
}
void nhapm(int *a,int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]= ";cin>>a[i];
	}
}
void xuatm(int *a,int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
void xoam(int *a,int &n,int vtxoa)
{
	for(int i=vtxoa;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n-=1;
}
main()
{
	int n,vtxoa;
	int *a=new int[n];
	nhap(n);
	nhapm(a,n);
	cout<<"Mang vua nhap la:"<<endl;
	xuatm(a,n);
	do
	{
		cout<<"\nNhap vi tri cua pt can xoa i= ";cin>>vtxoa;
	}
	while(vtxoa<0 || vtxoa>n);
	xoam(a,n,vtxoa);
	cout<<"Mang sau khi xoa la:"<<endl;
	xuatm(a,n);
	
}
