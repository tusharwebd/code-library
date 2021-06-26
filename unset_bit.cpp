#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j;
    cin >> n >> j;
    int val;
    val = n & ~(1 << (j - 1));
    cout << val;
    return 0;
}
