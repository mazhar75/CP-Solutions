// BISMILLAH

//Never give up.Slow and steady wins the race
// Author:Md.Mazharul Islam

#include <bits/stdc++.h>



#define endl "\n"
#define rr(i, a, b) for(long long int i=a; i<b; i++)
#define vin(n, a) vector <long long int> a(n); rr(i, 0, n) cin >> a[i]
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define rn return
#define pi 3.14159265



using namespace std;
typedef long long int ll;
const int mxN=100;


class cp
{
public:
    void think(int);
};

bool isPowerOfTwo(ll n)
{
    return ((n)&(n-1)); // if 0 than yes else false
}
ll PowerOfTwo(int n)
{
    return 1<<n;
}




int func(int x)
{
    int ans=1e9;
    for(int i=0; i<=16; i++)
    {
        ans=min(ans, 15+i-(__builtin_ctz(x+i)));
        //cout<<(__builtin_ctz(x+i))<<" ";
    }
    return ans;

}
bool isPalindrome(string s)
{
    string r=s;
    reverse(s.begin(),s.end());
    int l=s.length();
    bool flag=true;
    for(int i=0; i<l; i++)
    {
        if(s[i]!=r[i])
        {
            flag=false;
            break;
        }
    }
    return flag;

}
//Main Code


void cp::think(int o)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>a;
    int cnt=1;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else
        {
            a.push_back(cnt);
            cnt=1;
        }

    }
    if(s[n-2]==s[n-1])
    a.push_back(cnt);
    else a.push_back(1);
    //for(int i=0;i<a.size();i++){
    //cout<<a[i]<<" ";
    //}
    int ans=0;
    for(int i=0; i<a.size()-1; i++)
    {
        if(a[i]%2==0)
        {
            continue;
        }
        else if(a[i]%2!=0)
        {
            if(a[i+1]%2!=0)
            {
                a[i]++;
                a[i+1]++;
                ans++;
                continue;
            }
            else
            {
                a[i]++;
                a[i+1]++;
                ans++;


            }


        }
        }
        cout<<ans<<endl;





    }






    int main()
    {

        //freopen("input.txt","r+",stdin);
        ios::sync_with_stdio(0);
        cin.tie(0);

        cp me;
        int t,i=1;
        cin>>t;
        while(i<=t)
        {

            me.think(i);
            i++;

        }
        return 0;
    }