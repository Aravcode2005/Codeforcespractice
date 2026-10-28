#include <bits/stdc++.h>
using  namespace std;
string solve(vector<int>&arr){
     unordered_map<int,int>freq;
     for(auto&it:arr){
         freq[it]++;
     }
     if(freq.size()>2){
          return "No";
     }
     
     if(freq.size()==1){
          return "Yes";
     }
     int n=arr.size();
     if(n%2==0){
         for(auto&it:freq){
             if(it.second>n/2){
                return "No";
             }
         }
     }
     
     else if(n%2!=0){
          for(auto&it:freq){
             if(it.second>(n/2)+1){
                return "No";
             }
         }
     }
     return "Yes";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>arr(n,-1);
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       cout << solve(arr) << endl;
    }
    return 0;
}
