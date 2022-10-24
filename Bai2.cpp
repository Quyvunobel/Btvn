#include <bits/stdc++.h>
using namespace std;
bool namnhuan(int &nam)
{
	if(nam %4==0)
		return true;
	else
		return false;
	if(nam %400==0)
		return true;
}
void nhapnam(int &nam)
{
	do
	{
		cout<<"Nhap nam can kiem tra: ";cin>>nam;
	}
	while(nam<=0);
}
main()
{
	int nam;
	nhapnam(nam);
	if(namnhuan(nam)==true)
		cout<<"Nam "<<nam<<" la nam nhuan";
	else
		cout<<"Nam "<<nam<<" khong la nam nhuan";
}
