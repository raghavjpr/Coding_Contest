#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n,x;
        cin >> n >> x;
        set<int>a;
        int far=0;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            a.insert(temp);
            far = max(far,temp);
        }
        if(a.count(x))
            cout << 1 << endl;
        else
            cout << max(2,(x+far-1)/far) << endl;
        a.clear();
    }
    return 0;
}