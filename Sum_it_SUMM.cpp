#include <iostream>
using namespace std;

int main() {
	int i,a,b,n,c;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>a;
	    cin>>b;
	    cin>>c;
	    if(a+b==c)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
