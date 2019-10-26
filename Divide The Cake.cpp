#include <bits/stdc++.h>
using namespace std;
int main() {
	long int t;
	cin>>t;
	while(t--){
      int k;
      cin>>k;
      if(360%k==0)
        cout<<'y'<< " ";
      else{
        cout<<'n'<< " ";
      }
      if(k<=360)
        cout<<'y'<< " ";
        else{
        cout<<'n'<< " ";
        }
       if((k*(k+1)/2)<=360)
        {
            cout<<'y'<< " ";
        }
            else
        {
        cout<<'n'<< " ";
        }
       cout<<endl;
	}

