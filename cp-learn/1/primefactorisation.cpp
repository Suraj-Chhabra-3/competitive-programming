// #include <bits/stdc++.h>
// using namespace std;

// #define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

// #define int long long
// #define all(x) (x).begin(), (x).end()
// #define endl '\n'

// ifprime [function to check a number is prime or not]

// 1. brute-force - O(N2)
// signed main() {
//     fastio();
//     int n;
//     cin>>n;
//     vector<int>ans;
//     for(int i=2; i<=n; i++) {
//         if(n%i == 0 && isprime(i)) ans.push_back(i);
//     }
//     return ans;
// }

// 2. little optimal - O(N^1.5) [isprime is in root N]
// signed main() {
//     fastio();
//     int n;
//     cin>>n;
//     vector<int>ans;
//     for(int i=2; i<=n; i++) {
//         if(n%i == 0 && isprime(i)) ans.push_back(i);
//     }
//     return ans;
// }

// 3. optimal - TC - O(n)
// signed main() {
//     fastio();
//     int n;
//     cin>>n;
//     vector<int>ans;
//     for(int i=2; i<=pow(n, 0.5); i++) {
//         if(n%i == 0 && isprime(i)) {
//             ans.push_back(i)
//             if(n/i != i) {
//                 if(isprime(n/i)) ans.push_back(n/i);
//             }
//         }
//     }
//     return ans;
// }

// // 4) more good app - O(rootN * logN)

// signed main() {
//     fastio();
//     int n;
//     cin>>n;
//     vector<int>ans;
//     for(int i=2; i<=pow(n, 0.5); i++) {
//         if(n%i == 0) {
//             ans.push_back(i)
//             while(N%i == 0) {
//                 n = n/i;
//             }
//         }
//     }
//     if(n != 1) ans.push_back(n);
//     return ans;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

// #define int long long
// #define all(x) (x).begin(), (x).end()
// #define endl '\n'

// signed main() {
//     fastio();
//     int n;
//     cin>>n;
//     vector<int>ans;
//     for(int i=2; i<=pow(n, 0.5); i++) {
//         if(n%i == 0) {
//             ans.push_back(i);
//             while(n%i == 0) {
//                 n = n/i;
//             }
//         }
//     }
//     if(n != 1) ans.push_back(n);
//     for(auto it : ans) {
//         cout<<it<<" ";
//     }
// }



// methods -

// 1) trail division method - O(rootN * logN)

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

signed main() {
    fastio();
    int n;
    cin>>n;
    for(int i=2; i<=pow(n, 0.5); i++) {
        while(n%i == 0) {
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n != 1) cout<<n<<" ";
}