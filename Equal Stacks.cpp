//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
//https://www.hackerrank.com/challenges/equal-stacks/problem?h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector < int >;
using vll   =   vector < ll >;
using vc    =   vector < char >;
using vs    =   vector < string >;
using vvi   =   vector < vector < int > >;
using vvs   =   vector < vector < string > >;






#define     pb              push_back
#define     mp              make_pair
#define     ff              first
#define     ss              second
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(auto value:v){cout<<value<<" ";}cout<<endl;
#define     pout(p)         for(auto value:p){cout<<value.ff<<" "<<value.ss<<endl;}cout<<endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1
#define     maxelement(x)   max_element(v.begin(),v.end()) - v.begin()
#define     minelement(x)   min_element(v.begin(),v.end()) - v.begin()
// string to int stoi(x)
// int/double to string to_string(x)


int dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
int dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};
string alpha = " abcdefghijklmnopqrstuvwxyz";




int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    vector<int>v1,v2,v3;
    int sum1=0,sum2=0,sum3=0;
    map < int,int > m;
    v1.pb(0);
    v2.pb(0);
    v3.pb(0);
    for (int i = 0; i < n1; ++i)
    {
        int x;cin>>x;
        sum1+=x;
        v1.pb(x);
    }
    for (int i = 0; i < n2; ++i)
    {
        int x;cin>>x;
        v2.pb(x);
        sum2+=x;
    }
    for (int i = 0; i < n3; ++i)
    {
        int x;cin>>x;
        v3.pb(x);
        sum3+=x;
    }

    // cout << "sum1 = " << sum1 << endl << "sum2 = " << sum2 << endl;
    // cout << "sum3 = " << sum3 << endl;
    for (int i = 0; i < n1; ++i)
    {
        int x = sum1-v1[i];
        sum1-=v1[i];
        m[x]++;
    }
    for (int i = 0; i < n2; ++i)
    {
        int x = sum2-v2[i];
        sum2-=v2[i];
        m[x]++;
    }
    for (int i = 0; i < n3; ++i)
    {
        int x = sum3-v3[i];
        sum3-=v3[i];
        m[x]++;
    }
    int minn;
    for(auto value : m)
    {
        // cout << value.ff << ' ' << value.ss << endl; 
        if(value.second == 3)
            minn = value.first;
    }
    cout << minn;


    return 0;
}
