//Problem Code Link:- https://www.hackerrank.com/contests/morgan-stanley-2016/challenges/jesse-and-profit
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <functional>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <cstring>
#include <climits>
#include <list>
using namespace std;

#define sci(x) scanf("%d",&x)
#define scli(x) scanf("%lld",&x)
#define sc2i(x,y) scanf("%d%d",&x,&y)
#define sc2li(x,y) scanf("%lld%lld",&x,&y)
#define pb push_back
#define X first
#define Y second
#define boost cin.tie(0);cout.tie(0)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define pf printf
#define MEM(a,val) memset(a,val,sizeof(a))
#define pi 3.14159265359
#define mp make_pair
#define all(c) c.begin(),c.end() //eg sort(all(v));

typedef long long ll;
typedef pair<int,int> pii;
typedef unsigned long long ull;
typedef vector<int> vi;
map<ll,set<int> > M;

int main(){
 ll n,d,x;
 cin >> n >> d;
 ll arr[200005];
 for(int i=1;i<=n;i++){
   cin >> arr[i];
   M[arr[i]].insert(i);
 }
 std::set<int>::iterator it;
 int s=-1,e=-1;
 int t1,t2,fl;
 for(int i=0;i<d;i++){
   cin >> x;
   s=-1;
   fl=0;
   for(int j=1;j<=n;j++){
      if(M[arr[j]+x].size()==0)continue;
      else{
            it=M[arr[j]+x].lower_bound(j+1);
            if(it==M[arr[j]+x].end());
            else{
                  t1=j;
                  t2=*it;
                  if(t1 > t2);
                  else{
                     fl=1;
                     if(s==-1){s=t1;e=t2;}
                     else{
                           if(t2-t1<(e-s)){s=t1;e=t2;}
                     }
                  }
            }
      }
   }
   if(fl==0)cout << "-1"<< endl;
   else cout <<s << " "<<e<< endl;
 }
return 0;
}
