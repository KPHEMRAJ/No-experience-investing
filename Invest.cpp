/* 
pe=Current month pe ratio
amt= Desired amount to invest 
ns= nifty shortage (initially 0)
n= nifty
np= cmp of niftybees
nsp= nifty shortage from previous month
*/
#include<iostream>
using namespace std;
int main()
{ 
float pe,amt,gs,ns,n,g,npf,gpf;
int np;
cout<<"Enter nifty 50 PE ratio\n";
cout<<"refer(https://www1.nseindia.com/products/content/equities/indices/historical_pepb.htm)\n";
cin>>pe;
cout<<"Enter the amount you want to invest\n";
cin>>amt;
if(pe>22.5)
n=amt/5;
else if(pe<=22.5&&pe>=17)
	n=2*amt/5;
else
	n=3*amt/5;
	float nsp;
	cout<<"Enter Nifty Shortage(from last month's data, if not found just enter 0)"<<'\n';
	cin>>nsp;
	n+=nsp;
cout<<"Enter the current market price of nifty bees\n";
cin>>npf;
	np=(int)npf;
cout<<"Number of nifty units to buy="<<(int)(n/npf)<<'\n';
g=(amt-(int)(n/npf)*npf)/3.0;
cout<<"Amount to be invested in gold mf is "<<g<<'\n';
float left=amt-g-((int)(n/npf)*npf)-3.5;
cout<<"Amount to be invested in corporate bond="<<left/3<<'\n';
cout<<"Amount to be invested in savings bond="<<left/3<<'\n';
cout<<"Amount to be invested in credit risk bond="<<left/3<<'\n';
ns=(int)n%np;
cout<<"Nifty shotage="<<ns<<" (plz save this data for next month)\n";
return 0;}
