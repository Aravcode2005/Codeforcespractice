#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
int n,x;
cin>>n>>x;
vector<int>arr;
arr.push_back(0);
for(int i=0;i<n;i++){
int p;
cin>>p;
arr.push_back(p);
}
arr.push_back(x);
int m=arr.size();
int diff1=2*(arr[m-1]-arr[m-2]);
int diff2=0;
for(int i=0;i<m-1;i++){
   diff2=max(diff2,arr[i+1]-arr[i]);
}
cout << max(diff1,diff2) << endl;
}
return 0;
}

