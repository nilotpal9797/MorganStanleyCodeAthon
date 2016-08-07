#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> cnt;

int main(){
 ll n,x,c,ans;
 scanf("%lld",&n);
 x=sqrt(n);
 for(int i=2;i<=x;i++){
    if(n%i==0){
       c=0;
       while(n%i==0){
         n/=i;
         c++;
       }
      cnt.push_back(c);
    }
  }
  if(n!=1)cnt.push_back(1);
  ll t1=1,t2=1;
  for(int i=0;i<cnt.size();i++){
   t1=(2*cnt[i]+1)*t1;
   t2=(cnt[i]+1)*t2;
  }
   t1=t1/2;
   ans=t1-t2+1;
   cout << ans << endl;
   return 0;
}
