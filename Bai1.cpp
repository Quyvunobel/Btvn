#include <bits/stdc++.h>
using namespace std;
bool namnhuan(int nam)
{
	if(nam %4==0)
		return true;
	else
		return false;
	if(nam %400==0)
		return true;
}
void inngay(int a)
{
	switch(a)
	{
		case 1:
			cout<<"Thang 1 co 31 ngay";
			break;
		case 2:
			int nam;
			cout<<"Nhap nam: ";cin>>nam;
			if(namnhuan(nam)==true)
			{
				cout<<"Thang 2 co 29 ngay";
				break;	
			}
			else
			{
				cout<<"Thang 2 co 28 ngay";
				break;	
			}				
		case 3:
			cout<<"Thang 3 co 31 ngay";
			break;
		case 4:
			cout<<"Thang 4 co 30 ngay";
			break;
		case 5:
			cout<<"Thang 5 co 31 ngay";
			break;
		case 6:
			cout<<"Thang 6 co 30 ngay";
			break;
		case 7:
			cout<<"Thang 7 co 31 ngay";
			break;
		case 8:
			cout<<"Thang 8 co 31 ngay";
			break;
		case 9:
			cout<<"Thang 9 co 30 ngay";
			break;
		case 10:
			cout<<"Thang 10 co 31 ngay";
			break;
		case 11:
			cout<<"Thang 11 co 30 ngay";
			break;
		default:
			cout<<"Thang 12 co 31 ngay";
			break;
	}
}
main()
{
	int a,nam;
	do
	{
		cout<<"Nhap thang can kiem tra: ";
		cin>>a;
	}
	while(a<=0 || a>=12 );
	inngay(a);
}
