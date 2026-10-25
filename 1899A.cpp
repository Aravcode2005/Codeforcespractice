#include <bits/stdc++.h>
using namespace std;
bool solve(int n,int k){
  if(k%2==0 && n%3==0){
     return true;
  }
  if(k>10){
     return false;
   }
    bool addone=solve(n+1,k+1);
    bool subone=solve(n-1,k+1);
   if(k%2!=0){
    return addone||subone;
   }
   return addone &&  subone;
}  
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin >> t;
while(t--){
int n;
cin >> n;
if(solve(n,1)){
  cout << "First" << endl;
}

else if(!solve(n,1)){
  cout << "Second" << endl;
 }
}
return 0;

}
