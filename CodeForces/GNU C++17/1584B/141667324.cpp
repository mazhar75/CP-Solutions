/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include <cstdlib>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
#define REP(i, a, b) for (long long int i=a; i<b; i++)
#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
//public:
void cp::think(){
ll n,m,l,ans=0;
cin>>n>>m;
l=n*m;
if(l%3==0)
    cout<<l/3<<endl;
else{
    if(l%3==1 || l%3==2)
    {
        ans+=l/3+1;

    }
    cout<<ans<<endl;
}

 }
int main() {
    RUN_FAST;
    cp me;
  int t;
 cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
