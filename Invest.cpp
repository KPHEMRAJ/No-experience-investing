/* Currently webpage not ready plz use external compiler
pe=Current month pe ratio
amt= Desired amount to invest 
gs= gold shortage (initially 0)
ns= nifty shortage (initially 0)
n= nifty
g= gold
np= cmp of niftybees
gp=cmp of goldbees
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{ ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
float pe,amt,gs,ns,n,g;
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
g=(amt-n)/3;
cout<<"Enter the current market price of nifty bees\n";
cin>>np;
cout<<"Enter the current market price of gold bees\n";
cin>>gp;
cout<<"Number of nifty units to buy="<<(int)(n/np)<<'\n';
cout<<"Number of gold units to buy="<<(int)(g/gp)<<'\n';
float left=amt-((int)(g/gp)*gp)-((int)(n/np)*np);
cout<<"Amount to be invested in corporate bond="<<left/3<<'\n';
cout<<"Amount to be invested in savings bond="<<left/3<<'\n';
cout<<"Amount to be invested in credit risk bond="<<left/3<<'\n';
ns=(int)n%np;
gs=(int)g%gp;
cout<<"Nifty shotage="<<ns<<" (plz save this data for next month)\n";
cout<<"Gold shotage="<<gs<<" (plz save this data for next month)\n";
return 0;}
