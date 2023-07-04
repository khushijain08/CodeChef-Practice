#include <iostream>
using namespace std;

int main() {
	int A,X,Y;
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	cin>>A;
	cin>>X;
	cin>>Y;
	if(Y>=A && Y<X)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}
