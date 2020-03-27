#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,count=0;
    int j=n;
    cin >> n >> k;
    vector <int> a;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for(int i=0;i<n;i++){
        if(a[i] >= a[k-1] && a[i]!=0)
            count++;
    }
    cout << count << endl;
    return 0;
}