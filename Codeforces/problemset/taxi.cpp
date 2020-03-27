#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int a[5] = {0,0,0,0,0};

    while (t--){
        int temp;
        cin >> temp;
        a[temp] += 1;
    }

    cout << a[4] + a[3] + (a[2]*2 + max(a[1]-a[3],0)+3)/4 << endl;
    return 0;
}