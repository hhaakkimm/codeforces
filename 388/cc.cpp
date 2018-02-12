#include <bits/stdc++.h>

using namespace std;

//constants
const int MAXN=(int)(1e5+1e1);
const double PI=acos(-1.0);

//defines
#define ll long long
#define F first
#define S second
#define fname ""
#define fr freopen(fname".in","r",stdin);
#define fw freopen(fname".out","w",stdout);
#define mp make_pair
#define pb push_back
#define eof (-1)
#define forr(xx,yy,zz) for(long long zz=xx;zz<=yy;zz++)
#define forl(xx,yy,zz) for(int zz=xx;zz>=yy;zz--)
#define sqr(x) ((x)*(x))
#define sz(x) (int)x.size()
#define len(s) (int)(s.length())
#define all(a) a.begin(),a.end()

int n,q,w,cntd,cntr;
char a[MAXN+MAXN];
string s;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
 		cin>>n;
 		forr(1,n,i)
 		{
 			cin>>a[i];
 			if(a[i]=='D')
 				cntd++;
 			else
 				cntr++;
 		}
 		int k=1;
 		while(cntd+cntr!=1 && cntd>0 && cntr>0)
 		{
 			q=0;
 			w=0;
 			if(a[k]=='D')
 			{
 				while(a[k]!='R')
 				{
 				    if(a[k]=='D')
 				        q++;
 					k++;
 					if(k==n+1)
 						k=1;
 				}
 				int kk=k;
 				cntr-=q;
 				if(cntr<1)
 				{
 				    cout<<'D';
 				    return 0;
 				}
 				while(q>0)
 				{
 					if(a[kk]=='R')
 						a[kk]='.',q--;
 					kk++;
 					if(kk==n+1)
 						kk=1;
 					w++;	
 				}
 			}
 			if(k==n+1)
 						k=1;
 			while(a[k]=='.')
 			{
 			    k++;
 		    	if(k==n+1)
 						k=1;
 			}
 			
 			/*cout<<cntr<<' '<<cntd<<' ';
 			forr(1,n,i)
 			    cout<<a[i];
 			cout<<'\n'; */
 			if(a[k]=='R')
 			{
 				while(a[k]!='D')
				{ 			
				    
 				    if(a[k]=='R')
 				        q++;
 					k++;
 					if(k==n+1)
 						k=1;
 				}
 				int kk=k;
 				cntd-=q;
 				
 				if(cntd<1)
 				{
 				    cout<<'R';
 				    return 0;
 				}
 				while(q>0)
 				{
 					if(a[kk]=='D')
 						a[kk]='.',q--;
 					kk++;
 					if(kk==n+1)
 						kk=1;
 				}
 			}
 			if(k==n+1)
 						k=1;
 			while(a[k]=='.')
 			{
 			    k++;
 		    	if(k==n+1)
 						k=1;
 			}
 			/*cout<<cntr<<' '<<cntd<<' ';
 			forr(1,n,i)
 			    cout<<a[i];
 			cout<<'\n';    
 		    */
 		}
 		if(cntr>0)
 			cout<<'R';
 		else
 			cout<<'D';
        return 0;
}