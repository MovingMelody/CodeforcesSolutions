// 14-11-2020
// problem code : 71A
// link : https://codeforces.com/problemset/problem/71/A
// easy
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int t;
    cin >> t;
    while (t--)
    {
    cin >> s;
    if (s.size()>10)
    {
        cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
    }
    else{
    cout << s << endl;
    }
    }
    return 0;
}
