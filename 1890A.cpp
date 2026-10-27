#include <bits/stdc++.h>
using namespace std;


int solve(vector<int>&arr){

int i=0;

int maxlen=0;


int n=arr.size();


while(i<n){

  if(arr[i]!=0){
     i++;
     continue;
  }

 else if(arr[i]==0){
   int j=i;
   while(j<n && arr[j]==0){
        j++;
     }
    maxlen=max(maxlen,j-i);
    i=j;
  }
}

return maxlen;
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
