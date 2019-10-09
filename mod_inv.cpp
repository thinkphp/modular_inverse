#include<bits/stdc++.h>
#define ll long long
#define lb long double
#define mp make_pair
#define pb push_back
#define loop(i,start,n) for(i=start;i<n;i++)
#define rloop(i,n,start)for(i=n;i>=start;i--)
#define mod 1000000007
#define endl "\n"
#define INF     1000000000
#define NEG_INF -1000000000
#define pll pair<ll,ll>
#define x first
#define y second
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define trace1(x)                cerr << #x << ": " << x << "\n";
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << "\n";
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << "\n";
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << "\n";

using namespace std;

ll modInverse(ll a, ll m) 
{ 
    ll x, y; 
    ll g = gcdExtended(a, m, &x, &y); 
    if (g != 1) 
        cout << "Inverse doesn't exist"; 
    else
    { 
         
        ll res = (x%m + m) % m; 
        return res; 
    } 
} 
  
// C function for extended Euclidean Algorithm 
ll gcdExtended(ll a, ll b, ll *x, ll *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
    ll x1, y1; // To store results of recursive call 
    ll gcd = gcdExtended(b%a, a, &x1, &y1); 
  
    // Update x and y using results of recursive 
    // call 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
} 


int main()
{
       IOS;
       ll a=modInverse(10,1000000007) //sample
       cout<<a<<endl;
}       
