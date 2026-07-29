// #include <string>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     string a;
//     string s;
//     cin >> s;
//     for (int j = 0; j < n; j++)
//     {
//          a =s[j];
//         /* code */
//     }
    
//     int count = 0;
//     for (int i = 0; i < s.size() - 1; i++)
//     {
//         if (s[i] == s[i + 1])
//         {
//             count++;
//         }
//     }
//     cout << count << endl;

//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.size(); i++) {
        bool found = false;

        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            count++;
        }
    }

    cout << count;

    return 0;
}