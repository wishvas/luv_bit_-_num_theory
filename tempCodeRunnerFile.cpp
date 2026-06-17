
//  A[L]*1 + A[L+1]*2 + .....A[R]*R-L+1

#include<bits/stdc++.h>
using namespace std;
const long long M=1e9+7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,q;
    cin>>n>>q;
        vector<int>p(n+1),w(n+1);
    vector<int>arr(n+1);
    for(int i=1;i<=n;++i){
        cin>>arr[i];
        long long val=(arr[i]+M)%M;
       p[i]=(p[i-1]+arr[i])%M;
       w[i]=(w[i-1] + arr[i]*1LL*i)%M;
    }
   while(q--){
    long long l,r;
    cin>>l>>r;
    
long long normal=(p[r]-p[l-1]+M)%M;
long long weighted =(w[r]-w[l-1]+M)%M;
    long long ans=(weighted-normal*(l-1))%M;
    ans =(ans+M)%M;
    cout<<ans<<endl;
   }
}





// A[L] + A[L+1]*K + A[L+2]*K^2 +.......+ A[R]*K^R-L........INCLUDES USE OF FERMAT THEOREM FOR INVERSE MODULO CALCULATION
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M=1e9+7;

ll expo(ll k,ll i){
    ll result=1;
    while(i>0){
        if(i & 1) result=(result*k)%M;
        k=(k*k)%M;
        i/=2;
    }
    return result;
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q,k;
    cin>>n>>q>>k;
    vector<ll>arr(n+1);
    vector<ll>p(n+1),w(n+1);
    for(ll i=1;i<=n;++i){
        cin>>arr[i];
p[i]=(p[i-1]+arr[i])%M;
w[i]=(w[i-1]+arr[i]*1LL*expo(k,i))%M;
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll ans;
ans=(w[r]-w[l-1] +M)%M;

ll k_inv=expo(k,M-2);
cout<<(ans*1LL*expo(k_inv,l))%M<<endl;
    }
}

