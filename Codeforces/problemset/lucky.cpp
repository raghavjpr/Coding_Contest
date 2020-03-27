#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int f=0;
    int lucky[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0;i<14;i++){
        if(t%lucky[i] == 0){
            f=1;
            break;
        }
    }
    if(f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}