/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
#include <cstdlib>
#include<algorithm>
#include<cmath>
#include<queue>
#include<cstdio>
#include <cstdlib>
#include<set>
#include<map>
#include<sstream>
#include<string>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;

//#define REP(i, a, b) for (long long int i=a; i<b; i++)
//#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}



void cp::think(){
  int n;
  cin>>n;
  int one=0,two=0,zero=0;
  for(int i=0;i<n;i++){
  int x;
  cin>>x;
  if(x%3==0)
  zero++;
  else if(x%3==1)
  one++;
  else
  two++;

  }
  int ans=0;
  vector<int>vec{zero,one,two};
  while( *min_element(vec.begin(), vec.end()) != n/3){
    for(int i=0;i<3;i++)
    if(vec[i]>n/3){
    ans++;
    vec[i]--;
    vec[(i+1)%3]++;

    }

  }
  cout<<ans<<endl;



}









int main() {
    //RUN_FAST;
    cp me;
  int t;
 cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
