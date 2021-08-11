#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n;i++)
       cin >> A[i];
    int minDistance = INT_MAX;
    for(int i = 0; i < n; i++) 
        for(int j = i+1; j < n; j++) 
            if(A[i] == A[j] && j-i < minDistance) 
                minDistance = j-i;
    if(minDistance == INT_MAX)
        cout<<"-1";
    else
        cout<<minDistance;
    return 0;
}