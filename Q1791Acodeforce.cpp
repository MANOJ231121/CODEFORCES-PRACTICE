#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char c;
    string s = "codeforces";
    while (n--)
    {
        cin >> c;
        bool flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}