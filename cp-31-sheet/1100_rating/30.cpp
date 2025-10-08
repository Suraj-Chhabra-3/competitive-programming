#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;

vector<int> checkfirst(vector<int>& v) {
    int one = -1;
    int two = -1;
    int i=0; int j = v.size()-1;
    while(i <= j) {
        if(v[i] != v[j]) {
            one = v[i];
            two = v[j];
            break;
        } 
        i++;
        j--;
    }
    return {one, two};
}

bool tryKalindrome(vector<int> &v, int canIgnore) {
    int i=0; int j = v.size()-1;
    while(i <= j) {
        if(v[i] != v[j]) {
            if(v[i] == canIgnore) {
                i++;
            } else if(v[j] == canIgnore) {
                j--;
            } else {
                return false;
            }
         } else {
            i++;
            j--;
         }
    }
    return true;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin>>n;
        vector<int>v(n); 
        for(int i=0; i<v.size(); i++) cin>>v[i];

        // first work 
        vector<int>elements = checkfirst(v);

        if(elements[0] == -1) {
            cout<<"YES"<<endl;
        } else {
            bool first = tryKalindrome(v, elements[0]);

            if(first == true || elements[0] == elements[1]) {
                if(first) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            } else {
                bool second = tryKalindrome(v, elements[1]);
                if(second) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }

    }
}