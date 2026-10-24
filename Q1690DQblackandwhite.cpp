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
        string s;
        cin >> s;
        int left = 0;
        int right = 0;
        int count = 0;
        int ans = k;
        while (right < n) {
    if (s[right] == 'W') {
        count++;
    }

            if(right -left+1 ==k){
                ans = min(ans,count);
                if(s[left]=='W'){
                    count--;
                }
                left++;
            }
            right++;
        }
        cout<<ans<<endl;

    }

    return 0;
}