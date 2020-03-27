#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n,m;
        cin >> n >> m;
        cout << (n*m)/pow(__gcd(m,n),2) << endl;
    }
    return 0;
}