#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin >> a;
    string b = "hello";
    int find = 0;
    for(int i=0;i<a.length();i++){
        if(a[i] == b[find])
            find++;
        if(find == 5)
            break;
    }
    if(find == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}