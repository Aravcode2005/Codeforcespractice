#include <bits/stdc++.h>
using namespace std;

string solve(int a ,int b ,int c){
  string x;
  if((a+c)>=(b+c)){
     x="First";
   }
   else if((a+c)<(b+c)){
      
       if((a+c)%2!=0){
         
          if((b+c)%2==0){
               x="Second";
            }

          else if((b+c)%2!=0){
              x="First";
            } 
        }
       
      else if((a+c)%2==0){
      
           if((b+c)%2==0){
                x="First";
            }

           else if((b+c)%2!=0){
               x="Second";
            }
      }
 
 }
  return x;
}
int  main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
  int a,b,c;
  cin>>a>>b>>c;
  cout << solve(a,b,c) << endl;
}
return 0;

}
