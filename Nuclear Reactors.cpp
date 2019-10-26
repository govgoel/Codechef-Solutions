#include <iostream>
using namespace std;

int main()
{
long long int A;
int N,K;
cin>>A>>N>>K;
for(int i=0;i<K;i++)
	{
	    cout<<A%(N+1)<<" ";
	    A/=(N+1);
	}
	return 0;
}
