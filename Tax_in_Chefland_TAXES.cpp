#include <iostream>
using namespace std;

int main() {
	int i,n,x;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>x;
	    if(x>100)
	    cout<<x-10<<endl;
	    else
	    cout<<x<<endl;
	}
	return 0;
}
