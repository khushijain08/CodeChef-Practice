#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t>0)
	{
	    int a,b,r,c;
	    cin>>a>>b;
	    for(int i=0;i<a;i++)
	    {
	        cin>>c;
	        r=b-c;
	        if(r>=0){
	        cout<<1;
	        b=r;}
	        else
	        cout<<0;
	    }
	    cout<<"\n";
	    t--;
	}
	return 0;
}
