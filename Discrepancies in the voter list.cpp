#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,N1,N2,N3;
	cin>>N1>>N2>>N3;
	int a[N1+N2+N3];
	for(i=0;i<N1+N2+N3;i++)
	    cin>>a[i];
	sort(a,a+N1+N2+N3);
	set<int> b;
	for(i=0;i<N1+N2+N3;i++)
	{
	    if(a[i]==a[i+1])
	        b.insert(a[i]);
	}
	cout<<b.size()<<endl;
	for(auto it:b)
	    cout<<it<<endl;
	return 0;
}
