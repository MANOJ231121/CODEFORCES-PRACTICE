// Little Vasya loves orange juice very much. That's why any food and drink in his kitchen necessarily contains orange juice. There are n drinks in his fridge, the volume fraction of orange juice in the i-th drink equals pi percent.

// One day Vasya decided to make himself an orange cocktail. He took equal proportions of each of the n drinks and mixed them. Then he wondered, how much orange juice the cocktail has.

// Find the volume fraction of orange juice in the final drink.

// Input
// The first input line contains a single integer n (1 ≤ n ≤ 100) — the number of orange-containing drinks in Vasya's fridge. The second line contains n integers pi (0 ≤ pi ≤ 100) — the volume fraction of orange juice in the i-th drink, in percent. The numbers are separated by a space.
//input
// 3
// 50 50 100

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int drink;
    float sum =0;
    for (int i = 0; i < n; i++)
    {
        cin>>drink;
        sum = sum + drink;
    }
    cout<<(sum/n)<<endl;
    
    return 0;
}