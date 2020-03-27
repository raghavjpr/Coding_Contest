#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<int> v = {5,4,3,2,1};
    int count=0;
    for(int i=0;i<v.size();i++){
        count += t/v[i];
        t -= (t/v[i])*v[i];
    }

    cout << count << endl;
    return 0;
}