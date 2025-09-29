#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

vector<int> solve(vector<int>& v1, vector<int>& v2) {
    int n = v1.size();
    int first = -1;
    int second = -1;
    for(int i=0; i<n; i++) {
        if(v1[i] != v2[i]) {
            first = i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--) {
        if(v1[i] != v2[i]) {
            second = i;
            break;
        }
    }

    vector<int>vec;
    for(int i=first; i<=second; i++) {
        vec.push_back(v1[i]);
    }
    int maxi = *max_element(all(vec));
    int mini = *min_element(all(vec));



    return {first, second, mini, maxi};
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin>>n;
        vector<int>v1(n); // a
        vector<int>v2(n); // a_dash
        for(int i=0; i<n; i++) cin>>v1[i];
        for(int i=0; i<n; i++) cin>>v2[i];
        vector<int>ans = solve(v1, v2);

        int first = ans[0];
        int second = ans[1];

        int i = first-1;
        while(i >= 0) {
            if(v1[i] <= ans[2]) {
                ans[2] = v1[i];
                first = i;
                i--;
            } else {
                break;
            }
        }

        int j = second+1;
        while(j < n) {
            if(v1[j] >= ans[3]) {
                ans[3] = v1[j];
                second = j;
                j++;
            } else {
                break;
            }
        }

        cout<<first+1<<" "<<second+1<<endl;

    }   
}