#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c0,c1,h;
    string s;
    int t;
    cin >> t;
    while(t--){
    int change = 0;
    long result = 0;
    cin >> n >> c0 >> c1 >> h;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++)
    {
        if(c0==c1){
            result = n*c0;
            break;
        }
        if(h>c0 && h>c1){
           if(s[i]=='0'){
               result+=c0;
           } 
           else{
               result+=c1;
           }

        }
       else if (c0<c1)
        {
            if (s[i] == '1')
            {
                // s[i] == '0';
                change++;
            } 
        }
        else{
            if (s[i]=='0')
            {
                // s[i] == '1';
                change++;
            } 
        }    
    }
        if(h>c0 && h>c1){
            cout << result << endl;
        }
        else{
        if (c0<c1)
            {
            result = (change*h) + (n*(c0)); 
            }
            else if(c1<c0){
                result = (change*h) + (n*(c1));
            }  
            cout << result << endl;
        }
    
    }  // while
    return 0;
}


