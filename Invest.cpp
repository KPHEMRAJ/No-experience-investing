/* 
pe=Current month pe ratio
amt= Desired amount to invest 
gs= gold shortage (initially 0)
ns= nifty shortage (initially 0)
n= nifty
g= gold
np= cmp of niftybees
gp=cmp of goldbees
nsp,gsp= nifty shortage and gold shortage from previous month
*/
#include<iostream>
using namespace std;
int main()
{ 
float pe,amt,gs,ns,n,g,npf,gpf;
int np,gp;
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
	float nsp,gsp;
	cout<<"Enter Nifty Shortage(from last month's data, if not found just enter 0)"<<'\n';
	cin>>nsp;
	n+=nsp;
g=(amt-n)/3;
	cout<<"Enter Gold Shortage(from last month's data, if not found just enter 0)"<<'\n';
	cin>>gsp;
	g+=gsp;
cout<<"Enter the current market price of nifty bees\n";
cin>>npf;
cout<<"Enter the current market price of gold etf(ICICI)\n";
cin>>gpf;
	np=(int)npf;
	gp=(int)gpf;
cout<<"Number of nifty units to buy="<<(int)(n/npf)<<'\n';
cout<<"Number of gold units to buy="<<(int)(g/gpf)<<'\n';
float left=amt-((int)(g/gpf)*gpf)-((int)(n/npf)*npf)-3.5;
cout<<"Amount to be invested in corporate bond="<<left/3<<'\n';
cout<<"Amount to be invested in savings bond="<<left/3<<'\n';
cout<<"Amount to be invested in credit risk bond="<<left/3<<'\n';
ns=(int)n%np;
gs=(int)g%gp;
cout<<"Nifty shotage="<<ns<<" (plz save this data for next month)\n";
cout<<"Gold shotage="<<gs<<" (plz save this data for next month)\n";
return 0;}
