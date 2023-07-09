#include <iostream>
using namespace std;

int main() {
	int i,n,x,y,z;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>x;
	    cin>>y;
	    cin>>z;
	    if(y+2*z<=x)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
