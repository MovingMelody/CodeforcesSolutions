#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
        long long int sum=0;
		long long int a[n*k];
		set<long long int>s;
		for(int i=0;i<n*k;i++)
			cin>>a[i];
			int c=0;
			int m=n/2+1;
			int y=n*k;
			while(c!=k)
			{
				sum=sum+a[y-m];
				y=y-m;
				c++;
		    }
		    cout<< sum<<endl;
	}
}

    //      6
    //      2 4
    //      0 24 34 58 62 64 69 78
    //      2 2
    //      27 61 81 91
    //      4 3
    //      2 4 16 18 21 27 36 53 82 91 92 95
    //      3 4
    //      3 11 12 22 33 35 38 67 69 71 94 99
    //      2 1
    //      11 41
    //      3 3
    //      1 1 1 1 1 1 1 1 1
