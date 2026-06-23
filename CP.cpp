


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    cout<<INT_MAX <<endl;
//    unsigned int a =(1LL<<32) -1 ;
//    cout<<a<<endl;
// }



// SET UNSET BIT

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a=9;
//     int i=3;
//     if((a & (1<<i)) !=0 ) cout<<"SET BIT"<<endl;
//     else cout<<"UNSET BIT"<<endl;
// }



// UPER LOWER CONVERSION

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    for(char c='a';c<='e';++c){
//     cout<<c<<endl;
//     cout<<bitset<10>(c)<<endl;
//     cout<<bitset<10>((c & (1<<5)))<<endl;
//    }
// }




// BIT MASKING WORKER QUESTION

// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//         int n;
//         cin>>n;
//         vector<int> num_days;
//         for(int i=0;i<n;++i){
// cin>>num_days[i];
//     }
//     vector<int> a2={2,9,1,7,25,29};
//     for(int i=0;i<num_days.size();++i){
//         (0 & (1<<num_days[i]));
//     }
//     for(int i=0;i<a2.size();++i){
//         (0 & (1<<a2[i]));
//     }
    
// }





// SEIVE VARIATION ...HIGHEST PRIME / LOWEST PRIME / FINDING PRIME FACT. OF A NUMBER

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define endl "\n";

// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//     ll n;
//     cin>>n;
//     vector<ll>hp(n+1),lp(n+1);
//     vector<bool>isprime(n+1,1);
//     isprime[0]=isprime[1]=false;
//     for(int i=2;i<=n;++i){
//         if(isprime[i]==true){
//         lp[i]=hp[i]=i;
//         for(int j=2*i;j<=n;j+=i){
// isprime[j]=false;
// hp[j]=i;
// if(lp[j]==0) lp[j]=i;
//         }}
//     }
//     for(int i=1;i<=n;++i){
//         cout<<lp[i]<<" "<<hp[i];
//         cout<<endl;
//     }
//     }
// }


// PRIME FACT OF K NUMBER USING SIEVE

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n";

int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vector<ll>hp(n+1),lp(n+1);
    vector<bool>isprime(n+1,1);
    isprime[0]=isprime[1]=false;
    for(int i=2;i<=n;++i){
        if(isprime[i]==true){
        lp[i]=hp[i]=i;
        for(int j=2*i;j<=n;j+=i){
isprime[j]=false;
hp[j]=i;
if(lp[j]==0) lp[j]=i;
        }}
    }
   vector<ll>factor;
   while(n>1){
    factor.push_back(lp[n]);
    n/=lp[n];
   }
for(ll f : factor){
    cout<<f<<" ";
}
    }
}





    
   