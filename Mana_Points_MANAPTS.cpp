#include<iostream>
using namespace std;
int main(){
    int e;
    cin>>e;
   
    while(e--){
    int x,y;
    cin>>x >>y;
        if(x<=y){
            cout<<y/x <<endl;
        }
        else{
            cout<<0 <<endl;
        }
    }
    return 0;
}
