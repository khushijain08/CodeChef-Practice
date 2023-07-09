#include <iostream>
using namespace std;

int main() {
	int i,n,r,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>r;
	    cin>>k;
	    if(r>k)
	    cout<<"LOSS"<<endl;
	     else if(r==k)
	    cout<<"NEUTRAL"<<endl;
	    else
	    cout<<"PROFIT"<<endl;
	}
	return 0;
}
