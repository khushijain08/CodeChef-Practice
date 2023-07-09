#include <iostream>
using namespace std;

int main() {
	int i,n,x,y;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>x;
	    cin>>y;
	    if(x>=y)
	    cout<<x-y<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
