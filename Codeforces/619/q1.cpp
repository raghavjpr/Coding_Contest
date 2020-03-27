#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
		string a,b,c;
		int f=0;
	    cin >> a;
		cin >> b;
		cin >> c;
	    for (int i = 0; i < a.length(); i++){
		     if(c[i]==a[i]||c[i]==b[i])
			     f++;
	    }
	    if(f==a.length())
		    cout << "YES" << endl;
	    else
		    cout << "NO" << endl;
    }
    return 0;
}
