#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int max=0,c=0;

    while (t--){
        int a,b;
        cin >> a >> b;
        c += b-a;
        if(c > max)
            max = c;
    }
    
    cout << max << endl;
    return 0;
}