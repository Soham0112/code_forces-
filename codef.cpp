#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(k);
        for(int i=0 ; i<k ; i++)
        {
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end(),greater<int>());
        int count=0;

        while(arr.size()>1)
        {
            if(arr[arr.size()-1] == 1)
            {
                arr.pop_back();
                count++;
            }
            else
            {
                count += 2*(arr[arr.size()-1])-1;
                arr.pop_back();
                
            }
        }

        cout<<count<<endl;
    }
    return 0;
}