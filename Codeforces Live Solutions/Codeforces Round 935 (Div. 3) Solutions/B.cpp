#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 998244353
int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a>>b>>c;
        int ans=2;
        ans+=(c/a);
        ans+=(c/b);
        cout<<ans<<endl;
    }
    return 0;
}