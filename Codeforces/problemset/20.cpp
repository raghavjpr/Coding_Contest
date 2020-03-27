#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int k,n,w;
    cin >> k >> n >> w;
    long long int ans = w*(w+1)*k/2;
    cout << max(ans-n,(long long int)0) << endl;
    return 0;
}