#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(k==0)
            cout<<"0 "<<n<<"\n";
        else
            cout<<n/k<<" "<<n%k<<"\n";
    }
	return 0;
}

