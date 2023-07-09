#include <iostream>
using namespace std;

int main() {
	int n,x,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>x;
	    if(x*4>1000)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
