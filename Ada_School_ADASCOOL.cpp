#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n%2 && m%2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
