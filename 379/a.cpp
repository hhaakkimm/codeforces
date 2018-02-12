#include <iostream>

using namespace std;

#define forr(xx,yy,zz) for(long long zz=xx;zz<=yy;zz++)

char a;
int n,q,w;

int main()
{
        cin>>n;
        forr(1,n,i)
        {
                cin>>a;
                if(a=='A')
                        q++;
                else if(a=='D')
                        w++;
        }
        if(q>w)
                cout<<"Anton";
        else if(q<w)
                cout<<"Danik";
        else
                cout<<"Friendship";
        return 0;
}