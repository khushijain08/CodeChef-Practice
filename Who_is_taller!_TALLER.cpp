#include <iostream>
using namespace std;

int main() {
    int i,n,x,y;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        cin>>y;
        if(x>y)
        cout<<"A"<<endl;
        else
        cout<<"B"<<endl;
    }
	return 0;
}
