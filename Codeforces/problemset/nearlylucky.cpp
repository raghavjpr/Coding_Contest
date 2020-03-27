#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int count = 0;
    int f=1;
    for(int i=0;i<s.length();i++){
        if(s[i] == '4' || s[i] == '7')
            count++;
    }
    if(count != 4 && count != 7)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}