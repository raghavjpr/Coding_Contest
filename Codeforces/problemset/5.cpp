#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s,ans;
    cin >> s;
    int n = s.length();

    for(int i=0;i<n;i++){
        if(s[i]!='a'&&s[i]!='A'&&s[i]!='e'&&s[i]!='E'&&s[i]!='i'&&s[i]!='I'&&s[i]!='o'&&s[i]!='O'&&s[i]!='u'&&s[i]!='U'&&s[i]!='y'&&s[i]!='Y'){
            ans += '.';
            ans += tolower(s[i]);
        }
    }

    cout << ans << endl;
    return 0;
}