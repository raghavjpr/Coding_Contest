#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int total=0;

    while (t--){
        string i;
        cin >> i;
        for(int j=0;j<2;j++){
            if(i[j] == '+' && i[j+1] == '+')
                total++;
            if(i[j] == '-' && i[j+1] == '-')
                total--;
        }
    }
    
    cout << total << endl;
    return 0;
}