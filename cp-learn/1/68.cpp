#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()

const int MOD = 1e9 + 7;

void query(int index, vector<int>& v) {
    if(index < 0 || index >= v.size()) return;
    if(v[index] != -1) return;
    cout<<"? "<<index<<endl;
    cout.flush();
    int value; cin>>value;
    v[index] = value;
}

signed main() {
    int n;
    cin>>n;
    vector<int>v(n+2, -1);
    v[0] = 100001;
    v[n+1] = 100001;
    int l = 1;
    int e = n;
    while(l<=e) {
        int mid = (l + ((e-l) / 2));

        query(mid, v);
        query(mid+1, v);
        query(mid-1, v);
        
        if( ((v[mid] > v[mid+1]) && (v[mid] < v[mid-1])) || ((v[mid] > v[mid+1]) && (v[mid] > v[mid-1])) ) {
            l = mid + 1;
        } else if((v[mid] > v[mid-1]) && (v[mid] < v[mid+1])) {
            e = mid - 1;
        } else {
            cout<<"! "<<mid;
            break;
        }


    }
}