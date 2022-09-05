// https://www.hackerrank.com/challenges/cpp-lower-bound/problem


//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;
using vvi   =   vector<vector<int>>;
using vvs   =   vector<vector<string>>;






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



int dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
int dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};




int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int>v;
    v.pb(0);
    for (int i = 0; i < n; ++i)
    {
        int x;cin>>x;
        v.pb(x);
    }

    int t;  cin >> t;
    while (t--) {
    
        int x;cin>>x;

        auto pos = lower_bound(v.begin() , v.end() , x);
        // cout << "pos = " << *pos << endl;
        if(*pos != x)
            cout << "No " << pos - v.begin() << endl;
        else
        {
            cout << "Yes " << pos - v.begin() << endl;
        }


        

    }



    return 0;
}
