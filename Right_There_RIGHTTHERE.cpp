#include <iostream>
using namespace std;

int main() {
	int n,i,x,y;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>x;
	    cin>>y;
	    if(x>y)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	
	return 0;
}
