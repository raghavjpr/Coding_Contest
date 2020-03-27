#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string a;
    for(int i=0;i<s.length();i+=2){
        a += s[i];
    }
    sort(a.begin(),a.end());
    
    string solve;
    for (auto i:a){
        solve += i;
        solve += '+';
    }
    solve.resize(s.size());
    cout << solve << endl;
    return 0;
}