// BINARY EXPONENTIAL CODE

// #include<bits/stdc++.h>
// using namespace std;
// int M=1e9+7;
// int print_binary_rec(int a,int b){
//     if(b==0) return 1;
//     long long rept=print_binary_rec(a,b/2);
//     if(b&1) return (a*rept*rept)%M;
//     else return (rept*rept)%M;
// }
// int main(){
//     int a=2,b=13;
//    cout<< print_binary_rec(a,b);
// }




// SIEVE ALGO

// #include<bits/stdc++.h>
// using namespace std;

// int print_prime(int n){
// vector<bool> is_prime(n,1);
// for(int i=2;i<=n;++i){
//     if(is_prime[i]==true){
// for(int j=2;j<=(n);j++){
//      is_prime[i*j]=false;
// }}
// }
// for(int i=2;i<=n;++i){
//     cout<<is_prime[i]<<endl;
// }
// return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<print_prime(n);
// }






// INDIVIDUAL PRIME CHECKING

// #include<bits/stdc++.h>
// using namespace std;

// void print_prime(int n){
// vector<bool> is_prime(n,1);
// for(int i=2;i<=n;++i){
//     if(is_prime[i]==true){
// for(int j=2;j<=(n);j++){
//      is_prime[i*j]=false;
// }}
// }
// if(is_prime[n]==true) cout<<"prime"<<endl;
// else cout<<"not prime"<<endl ; 
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int num;
//         cin>>num;
//            print_prime(num);
//     }
// }




//  FERMAT THEOREM..USE FOR CALCULATING MMI. INVERSE

//  #include<bits/stdc++.h>
//  using namespace std;
//  const int M=1e9 +7;
// int binary_exp(int a,int b){
//     int result=1;
// while(b>0){
//     if(b&1){
// result= (result*1LL*a*1LL)%M ;
//     }
//     a=(a*1LL*a)%M;
//     b>>=1;
// }
// return result;
// }

//  int main(){
//   int a,b;
//   cin>>a;
// cout<<binary_exp(a,M-2);
//  }



// HACKER_EARTH QUES
// #include<bits/stdc++.h>
// using namespace std;
// const int M=1e9+7;
// const int N=1e5+10;
// int fact[N];

// int binary_exp(int a,int b){
// 	int result=1;
// 	while(b>0){
// 		if(b&1) result=(result*1LL*a)%M ;
// 		a=(a*1LL*a)%M;
// 		b>>=1;
// 	}
//     return result;
// }
// int main() {
// 	int t;
// 	cin>>t;                  // we will use precomputation technique else n-k =0 case modulo inverse cant be calculated.
// 	fact[0]=1;
//     for(int i=1;i<N;++i){
//         fact[i]=(fact[i-1]*1LL*i)%M;
//     }
//     while(t--){
// 		int n,k;
// 		cin>>n>>k;
//         int ans=fact[n];
//         ans=(ans*1LL*fact[k])%M;
//         int denomi=(fact[k-n]*1LL*fact[n])%M;
//         ans=(ans*1LL*(binary_exp(denomi,M-2)))%M;
//         cout<<ans<<endl;
// 	}
// }







