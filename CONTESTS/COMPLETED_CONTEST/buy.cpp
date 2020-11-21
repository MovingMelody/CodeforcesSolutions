#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    int n,c0,c1,h;
    cin >> n >> c0 >> c1 >> h;
    string s;
    cin >> s;
    long long int ans = 0;
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
         zero++;   
        }
        if (s[i]=='1')
        {
            one++;
        }
    }
    ans = zero*min(c0,c1+h) + one*min(c1,c0+h);
    cout << ans << endl;
    
    }
    return 0;
    };