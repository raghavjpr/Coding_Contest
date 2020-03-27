#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        vector<int>areas;
        areas.push_back(x*b);
        areas.push_back((a-x-1)*b);
        areas.push_back(y*a);
        areas.push_back((b-y-1)*a);
        cout << *max_element(areas.begin(),areas.end()) << endl;
    }
    return 0;
}