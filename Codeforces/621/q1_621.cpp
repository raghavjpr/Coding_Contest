#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
		int n,d;
		cin >> n >> d;
		vector<int> x;
		for(int i=0; i<n;i++){
			int temp;
			cin >> temp;
			x.push_back(temp);
		}
		for(int i=1;i<n;i++){
			if(d<=0)
				break;
			while(x[i] != 0){
				if(d<i)
					break;
				x[0] = x[0] + 1;
				x[i] = x[i] - 1;
				d = d - i;		
			}
		}
		cout << x[0] << endl;
	}
    return 0;
}