// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         /* code */
//         int a, b, c;
//         cin >> a >> b >> c;
//         vector<int> arr;
//         arr.push_back(a);
//         arr.push_back(b);
//         arr.push_back(c);

//         unordered_map<int, int> mpp;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             mpp[arr[i]++];
//         }
//         for (auto it : mpp)
//         {
//             if (it.second == 1)
//             {
//                 cout << it.first << endl;
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);

        unordered_map<int, int> mpp;

        for (int i = 0; i < arr.size(); i++) {
            mpp[arr[i]]++;
        }

        for (auto it : mpp) {
            if (it.second == 1) {
                cout << it.first << endl;
            }
        }
    }

    return 0;
}