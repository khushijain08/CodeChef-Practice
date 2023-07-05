#include <iostream>
using namespace std;

int main() {
	int i,n,x,y;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>x;
	    cin>>y;
	    cout<<(x/10)*y<<endl;
	}
	return 0;
}
