#include <iostream>
using namespace std;

int main() {
	int a,b,i,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>a;
	    cin>>b;
	    if(a+b<=6)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	
	return 0;
}
