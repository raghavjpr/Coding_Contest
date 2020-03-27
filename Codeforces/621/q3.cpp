#include <bits/stdc++.h>

using namespace std;

void allPossibleSubset(char arr[],int n){
    vector<char>sc;
    int  count = pow(2,n);
    for (int i = 0; i < count; i++){
        for (int j = 0; j < n; j++){
			if ((i & (1 << j)) > 0)
				cout << arr[j] << " " << i;
		}
		cout << "\n";
	}
}

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n;
    n = s.length();
    char arr[n];
	for(int i=0;i<n;i++)
        arr[i] = s[i];

	allPossibleSubset(arr,n);

    return 0;
}