#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a;
    int sum = 0;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
        sum += temp;
    }
    sort(a.begin(), a.end());
 
    int ans = 0, count = 0;
    for (int i = n-1; i >= 0; i--)
    {    
        ans += a[i];
        count++;
        if (ans > sum/2.0)
            break;
    }
    cout << count << "\n";

    return 0;
}