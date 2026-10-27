#include <bits/stdc++.h>
using namespace std;
bool sorted(vector<int>&arr){
    for(int i=0;i<arr.size()-1;i++){
          if(arr[i]>arr[i+1]){
                return false;
          }
    }
    return true;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
   int t;
   cin>>t;
   while(t--){
     int n,k;
     cin>>n>>k;
     vector<int>arr(n,-1);
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     if((k==1 && sorted(arr))|| k>=2){
           cout << "YES" << endl;   
      }
      else{
        cout << "No" << endl;   
       }
    }
   return  0;
}
