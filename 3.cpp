#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
  if(a%b==0)return b;
  else return gcd(b,a%b);
}

int main(){
  int n;
  cin >> n;
  ll y;
  ll sum=0;
  for(int i=1;i<=n;i++){
    cin >> y;
    sum+=i*y;
  }
  ll d=n*(n+1);
  sum*=2;
  ll x=max(sum,d);
   y=min(sum,d);
  ll z=gcd(x,y);
  cout << sum/z <<" "<<d/z<<endl;
  cout << "1 "<<d/2<<endl;
 return 0;
}
