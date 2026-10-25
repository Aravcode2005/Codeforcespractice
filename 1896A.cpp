#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>arr){ 
       for(int i=0;i<arr.size()-1;i++){
          if(arr[i]>arr[i+1]){
               return false;
          }
       }
   return true;
}
bool swapexer(vector<int>arr,int i){
      vector<int>res=arr;
      swap(res[i],res[i+1]);
      return res;
}
bool solve(vector<int>arr,int i,int n){
    if(i>n-2){
        return isSorted(arr);
    }
      bool swapex=false;
      bool notswapex=false;
     if(i>0 && i<n-1 &&  arr[i]>arr[i-1] && arr[i]>arr[i+1]){
           swapex=solve((swapexer(arr,i),i+1,n);
           notswapex=solve(arr,i+1,n);
     }
     return swapex||notswapex;
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
    vector<int>test=arr;
    sort(test.begin(),test.end());
      if(test[n-1]>n){
         cout << "No" << endl;
      }
      unordered_map<int,int>freq;
      for(auto&it:test){
           freq[it]++;
      }
      for(auto & it : freq){
        if(it.second>1){
           cout << "No" <<endl;
            break;
        }
      }
     if(solve(arr,1,n)){
        cout << "Yes" << endl;
     }
     else if(!solve(arr,1,n)){
         cout << "No" << endl;
     }
  }
  return 0;
}
