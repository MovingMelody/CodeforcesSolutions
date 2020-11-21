// codeforeces - 1A
// sumanth2303
// problem link - https://codeforces.com/problemset/problem/1/A

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int m,n,a,result;
    cin >> m >> n >> a;
    result = (n%a) == 0 ? n/a : (n/a)+1;
    result = result * (m%a==0? (m/a):(m/a)+1);
    cout << result << endl;
    return 0;
}
