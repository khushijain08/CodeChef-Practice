#include <iostream>
using namespace std;

int main() {
    int i,n,x,y;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        cin>>y;
        if(x<y || x==y)
        cout<<"0"<<endl;
        else
        cout<<x-y<<endl;
    }
	return 0;
}
