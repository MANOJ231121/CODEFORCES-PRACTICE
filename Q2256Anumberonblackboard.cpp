// Rain is falling outside the Fairy Warehouse, so Chtholly, Nephren, and Ithea spend the afternoon playing a game in the common room.

// Ithea writes three non-negative integers a
// , b
// , and c
//  on the blackboard.

// Chtholly may perform the following operation an arbitrary number of times (possibly zero):

// Choose one of the three current integers and replace it with the sum of the other two current integers. The other two integers remain unchanged.
// For example, starting from (3,5,11)
// , she can replace 11
//  with 3+5
// , obtaining (3,5,8)
// .

// Nephren wants to know the minimum range∗
//  of the three integers that Chtholly can obtain. Help her find it!

// ∗
// The range of a non-empty finite collection of numbers is defined as its maximum value minus its minimum value. In particular, the range of three numbers x
// , y
// , and z
//  is max(x,y,z)−min(x,y,z)
// .

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t
//  (1≤t≤100
// ). The description of the test cases follows.

// The only line of each test case contains three integers a
// , b
// , and c
//  (0≤a,b,c≤109
// ) — the integers initially written on the blackboard.

// Output
// For each test case, output a single integer — the minimum possible range of the three integers.
// 6
// 5 5 5
// 4 6 9
// 2 3 10
// 0 0 7
// 2 3 5
// 20 4 5
//output
// 0
// 5
// 3
// 0
// 3
// 5

#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long a, b, c;
    long z;
    while (n--)
    {
        cin >> a >> b >> c;
        if (a + b < c || a + c < b || b + c < a)
        {
            if (a + b < c)
            {
                c = a + b;
                z = max({a, b, c}) - min({a, b, c});
                cout << z<<endl;
               
            }
            else if (a + c < b)
            {
                b = a + c;
                z = max({a, b, c}) - min({a, b, c});
                cout << z<<endl;
                
            }
            else
            {
                a = b + c;
                z = max({a, b, c}) - min({a, b, c});
                cout << z<<endl;
              
            }
        }
        else
        {
            z = max({a, b, c}) - min({a, b, c});
            cout << z << endl;
            ;
        }
    }
    return 0;
}