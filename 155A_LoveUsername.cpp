// codeforces - 155A
// sumanth2303
// problem link - https://codeforces.com/problemset/problem/155/A
// ACCEPTED

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,result=0,temp2;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    temp = arr[0];
    temp2 = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i]>temp)
        {
            result++;
            temp = arr[i];
        }  
        if (arr[i]<temp2)
        {
            result++;
            temp2 = arr[i];
        }  
    }
    cout << result << endl;
    return 0;
}

// 5
// 100 50 200 150 200

//  output
// 2