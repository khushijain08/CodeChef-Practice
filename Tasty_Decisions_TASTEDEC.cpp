#include <iostream>
using namespace std;

int main() {
	int i,n,x,y;
	cin>>n;
	while(n--)
	{
	    cin>>x;
	    cin>>y;
	    if(x*2<y*5)
	    cout<<"Candy"<<endl;
	    else if(x*2==y*5)
	    cout<<"Either"<<endl;
	    else
	    cout<<"Chocolate"<<endl;
	    
	}
	return 0;
}
