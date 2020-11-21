// codeforces - 344A
// sumanth2303
// problem link - https://codeforces.com/problemset/problem/344/A
// ACCEPTED
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a,temp = 0, groups = 0;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (temp != a)
        {
            groups++;
        }
        
        temp = a;
    }
    cout << groups << endl;
return 0;
}