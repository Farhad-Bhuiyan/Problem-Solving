#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
using lld = long double;
using pii = pair<int,int>;
using vi = vector<int>;
using vl = vector<ll>;
using vii = vector<pii>;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define rep(i, j, n) for(int i=(j);i<(n);++i)
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define no cout<<"NO\n"
#define yes cout<<"YES\n"


/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll m=mod) {ll res = 1; while(b > 0) {if(b&1) res = (res*a)%m; a = (a*a)%m; b = b>>1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m=mod) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m=mod) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m=mod) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m=mod) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
/*---------------------------------------------------------------------------------------------------------------------------*/

void solve(){
    string s, hx;
    cin>>s>>hx;

    map<char, string> mp;
    mp['0'] = "0000";
    mp['1'] = "0001";
    mp['2'] = "0010";
    mp['3'] = "0011";
    mp['4'] = "0100";
    mp['5'] = "0101";
    mp['6'] = "0110";
    mp['7'] = "0111";
    mp['8'] = "1000";
    mp['9'] = "1001";
    mp['A'] = "1010";
    mp['B'] = "1011";
    mp['C'] = "1100";
    mp['D'] = "1101";
    mp['E'] = "1110";
    mp['F'] = "1111";

    string bn;
    for(auto c:hx){
        bn += mp[c];
    }
    for(int i = 0; i<sz(s)-1; i++) bn.pb('0');

    string t = bn;
    int n = bn.size(), m=s.size();

    string q(n - m + 1, '0');

    for (int i = 0; i <= n - m; ++i) {
        if (t[i] == '1') {
            q[i] = '1';
            for (int j = 0; j < m; ++j)
                t[i + j] = (t[i + j] == s[j]) ? '0' : '1';
        }
    }

    string ans = t.substr(n - m + 1);
    cout<<ans<<endl;
}

int32_t main(){
    fastio();
    // freopen("txt.in", "r", stdin);
    // freopen("txt.out", "w", stdout);
    // cout<<fixed<<std::setprecision(10);
    
    int _ = 1;
    cin >> _;
    while(_--){
        solve();
    }
    return 0;
}