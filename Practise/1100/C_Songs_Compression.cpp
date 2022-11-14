#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define rep(i,n) for (int i=0; i<(n); i++)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
// https://codeforces.com/problemset/problem/1015/C
int main() {
    ll n,m; // number of songs and size of flash drive
    cin>>n>>m;
    // original size and compressed size of each song
    vector<pll> songs(n);
    rep(i,n) cin>>songs[i].fi>>songs[i].se;
    // if sum of original size is less than m, return 0
    // sum of original size
    ll sum_ori = 0;
    rep(i,n) sum_ori += songs[i].fi;
    if (sum_ori <= m) {
        cout<<0<<endl;
        return 0;
    }
    // if sum of compressed size is larger than m, return -1
    // sum of compressed size
    ll sum_compressed = 0;
    rep(i,n) sum_compressed += songs[i].se;
    if (sum_compressed > m) {
        cout<<-1<<endl;
        return 0;
    }
    // count minimum numbers of song to be compressed to fit in the flash drive
    ll count = 0;
    // sort songs by difference of original size and compressed size
    sort(all(songs), [](pll a, pll b){return a.fi-a.se > b.fi-b.se;});
    // print songs
    // rep(i,n) cout<<songs[i].fi<<" "<<songs[i].se<<endl;
    
    // compress songs until sum_ori <= m, count number of songs compressed
    rep(i,n) {
        sum_ori -= songs[i].fi - songs[i].se;
        count++;
        if (sum_ori <= m) break;
    }
    cout<<count<<endl;
    return 0;
}