/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
#include <cstdlib>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<cstdio>
#include <cstdlib>
#include<set>
#include<map>
#include<sstream>
#include<string>
#include<utility>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
const int N =1e6+10;
const int MAXN = 100010;





//#define REP(i, a, b) for (long long int i=a; i<b; i++)
//#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();


};

void cp::think(){
int n;
cin>>n;
set<int>s;
for(int i=0;i<n;i++){
int x;
cin>>x;
s.insert(x);
}
cout<<s.size()<<endl;

}






int main() {
    //RUN_FAST;
    cp me;
  int t=1;
  //cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
