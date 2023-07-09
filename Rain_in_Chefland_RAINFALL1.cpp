#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x>=1 && x<3)
	      cout<<"LIGHT"<<endl;
	    else if(x>=3 && x<7)
	       cout<<"MODERATE\n";
	   else if(x>=7)
	       cout<<"HEAVY\n";
	}
	return 0;
}
