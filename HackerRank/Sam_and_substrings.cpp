#include<bits/stdc++.h>
#define ll long long
#define vll vector<long long>
#define vl_l vector<vector<long long> >
#define pll pair<ll,ll>
#define pb push_back
#define T ll t;cin>>t;
#define maxx 1000000007
#define inputarr ll n;cin>>n;vll a(n);for(ll i=0;i<n;i++){cin>>a[i];}
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll len=s.length();
    ll ans=0;
    for(ll i=len-1;i>=0;i--)
    {
        ll dec=0,temp=0;
        for(ll j=i;j>=0;j--)
        {
              temp=temp+((ll)(s[j]-'0'))*pow(10,dec);
             // cout<<temp<<" ";
              dec++;
              ans=ans+temp;
        }
           //ans=ans+temp;
    }
    cout<<ans%maxx;
    return 0;
}