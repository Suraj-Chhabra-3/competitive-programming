#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio();
    int t;
    cin>>t;
    while(t--) {
        int a;
        int b;
        cin>>a>>b;
        int mini = min(a, b);
        int ans1 = abs(a-b);
        int ans2 = 0;
        if(ans1 != 0) {
            int modula = mini%ans1;
            ans2 = min(abs(0 - modula), abs(modula - ans1));
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
}