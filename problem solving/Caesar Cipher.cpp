#include <iostream>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    string s; 
    cin >> s;
    int k; 
    cin >> k;
    for (int i = 0; i <= n; i++) 
    {
        if (s[i] >= 'a' && s[i] <= 'z') 
            s[i] = ((s[i] - 'a' + k) % 26) + 'a';
        else if (s[i] >= 'A' && s[i] <= 'Z') 
            s[i] = ((s[i] - 'A' + k) % 26) + 'A';
    }
    cout << s << endl;
    return 0;
}