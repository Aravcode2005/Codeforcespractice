#include <bits/stdc++.h>
using namespace std;
int score(pair<int,int>&a){
   int x=a.first;
   int y=a.second;     
 int points=0;
 return points+=min(min(x,y),min(9-x,9-y))+1; 
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
stack<pair<int,int>>st;
for(int i=0;i<10;i++){
  for(int j=0;j<10;j++){
     char x;
     cin>>x;
     if(x=='X'){
      st.push(make_pair(i,j));         
      }
   }
 }
   int cnt=0;
   while(!st.empty()){
     auto[x,y]=st.top();
     cnt+=score(st.top());
     st.pop();
   }
   cout << cnt  << endl;
}
return 0;
}
