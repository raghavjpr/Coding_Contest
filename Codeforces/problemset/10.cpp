#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int d = 0;
    for (int i = 0; i < s.length(); i++){
        if (d == 6)
            break;
        if (s[i] == s[i+1])
            d++;
        else
            d = 0;
    }

    if (d == 6)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}