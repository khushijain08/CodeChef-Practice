#include <iostream>
using namespace std;

int main() {
	int i,n,x;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>x;
	    if(x>=67 && x<=45000)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
