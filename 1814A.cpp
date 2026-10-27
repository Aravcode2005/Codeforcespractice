#include <bits/stdc++.h>
using namespace std;
#define ll long long 
string solve(ll n,ll k){
   if(n%2==0 || (n%2!=0 && k%2!=0 && n>=k)){
      return "yes";
    }
    else if(n%2!=0  && k%2==0){
       return "no";
   }
  return "No";
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
ll  n,k;
cin>>n>>k;
cout << solve(n,k) << endl;
}
return 0;
}
