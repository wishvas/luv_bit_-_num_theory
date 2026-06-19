// MONK AND DIVISOR CONUNDRUM HACKER EARTH QUES.....CNT[P]+CNT[Q]-CNT[P,Q]   (MULTIPLES)

// #include<bits/stdc++.h>
// using namespace std;
// const int N=2e5+7;
// int hashh[N];
// int multiple_cnt[N];

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         int x;
//         cin>>x;
//         hashh[x]++;
//     }

//     for(int i=1;i<N;++i){
//         for(int j=i;j<N;j+=i){
//             multiple_cnt[i]+=hashh[j];
//         }
//     }

//     int qu;
//     cin>>qu;
//     while(qu--){
//         int p,q;
//         cin>>p>>q;
//         long long lcm=p*1LL*q / __gcd(p,q);
//         long long ans=multiple_cnt[p]+multiple_cnt[q];
//         if(lcm<=N) ans-=multiple_cnt[lcm];
//         cout<<ans<<endl;

//     }
// }







// B. Rock and Lever ..672 DIV 2

// #include<bits/stdc++.h>
// using namespace std;
// const int M=1e9+7;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         int ans[n];
//         for(int i=0;i<n;++i){
//             cin>>ans[i];
//         }
//         int cnt=0;
//         for(int i=0;i<n;++i){
//             for(int j=i+1;j<n;++j){
//                 if((ans[i]&ans[j])>= (ans[i]^ans[j])) cnt++;
//             }
//         }
//         cout<<cnt<<endl;
//     }
// }


























