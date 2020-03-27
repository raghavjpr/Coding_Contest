#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int x=0,y=0,z=0;

    while (t--){
        int a,b,c;
        cin >> a >> b >> c;
        x = x + a;
        y = y + b;
        z = z + c;       
    }
    if(x==0 && y==0 && z==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}