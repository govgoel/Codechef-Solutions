#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    long long cnt=0;
	    for(int i=0 ; i<str.size() ; i++)
	    {
	        if(str[i]=='1')
	            cnt++;
	    }
	    cout<<(cnt*(cnt+1)/2)<<endl;
	}
	return 0;
}
