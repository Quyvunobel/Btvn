#include <bits/stdc++.h>
using namespace std;
void nhapm(int **a,int n,int m)	
{
//	a = new int *[n]; 
	for(int i = 0; i < n; i++)
		a[i] = new int[m]; 
			
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]= ";cin>>a[i][j] ; 
		}
	}
}
void xuatmt(int **a,int n,int m)
{
	int k = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			k += 1;
			cout<<a[i][j]<<"\t";
			if(k%m == 0)
			{
				cout<<"\n";
				k = 0;
			}		
		}
	}
}
void tongmt(int **a,int**b,int **c,int n,int m)
{
	for(int i = 0; i < n; i++)
	c[i] = new int[m]; 	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"Tong 2 ma tran: "<<endl;
	xuatmt(c,n,m);
}
void hieumt(int **a,int**b,int **c,int n,int m)
{
	for(int i = 0; i < n; i++)
	c[i] = new int[m]; 	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	cout<<"Hieu 2 ma tran: "<<endl;
	xuatmt(c,n,m);
}	
int main()
{
	int n,m;
	
	cout<<"Nhap so cot cua ma tran: ";cin>>m;
	cout<<"Nhap so hang cua ma tran: ";cin>>n;
	int **a = new int*[n];
	int **b = new int*[n];
	int **c = new int*[n];
	cout<<"-----Mang a-----"<<endl;
	nhapm(a,n,m);
	cout<<"Ma tran vua tao: "<<endl;
	xuatmt(a,n,m);
	cout<<"-----Mang b-----"<<endl;
	nhapm(b,n,m);
	cout<<"Ma tran vua tao: "<<endl;
	xuatmt(b,n,m);
	tongmt(a,b,c,n,m);
	hieumt(a,b,c,n,m);
}



