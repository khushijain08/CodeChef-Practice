#include <iostream>
using namespace std;

int main() {
    int n,i,p,b,min=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        cin>>b;
        if(p==b || b>p)
        cout<<p<<endl;
        else
        cout<<b<<endl;
        
    }
    
	// your code goes here
	return 0;
}
