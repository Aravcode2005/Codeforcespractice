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
vector<int>swapexer(vector<int>arr,int i){
      vector<int>res=arr;
      swap(res[i],res[i+1]);
      return res;
}
bool solve(vector<int>arr,int i,int n){
    if(i>n-2){
        return isSorted(arr);
    }
      bool swapex=true;
      bool notswapex=true;
      cout << "Entering from/standing at" << i << endl;
     if(i>0 && i<n-1 &&  arr[i]>arr[i-1] && arr[i]>arr[i+1]){
           cout << "Entering here" << endl;
           swapex=solve((swapexer(arr,i)),i+1,n);
           cout << "state after the swapex branch " << endl;
            for(auto & it:arr){
                 cout << it << "";
             }
            cout << endl;
           notswapex=solve(arr,i+1,n);
             cout << "state after the non swap(unchanged) branch" << endl;
           for(auto&it:arr){
            cout << it << "";
           }
          cout << endl;
     }
    cout << "Standing at i" << i << endl;
    cout << "Result if swapped" << swapex << endl;
        cout << "state after the swapex branch " << endl;
            for(auto & it:arr){
                 cout << it << "";
             }
            cout << endl;
           
    cout << "Result if not swapped" << notswapex << endl;
         cout << "state after the notswapex branch " << endl;
            for(auto & it:arr){
                 cout << it << "";
             }
            cout << endl;

     return swapex||notswapex;
}
 string solve2(vector<int>&arr){
     int n=arr.size();
     int i=1;
     while(i<n-1){
       if(arr[i]>arr[i+1] && arr[i] >arr[i-1]){
            swap(arr[i],arr[i+1]);
        }
      i++;
     } 
     return  isSorted(arr)?"Yes":"No";
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
       cout << solve2(arr) << endl;
  }
  return 0;
}
