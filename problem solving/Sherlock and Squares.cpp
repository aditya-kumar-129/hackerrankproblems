/*https://www.hackerrank.com/challenges/sherlock-and-squares/problem*/
#include<iostream>
#include<math.h>
using namespace std;
void method()
{
    int a,b;
    cin>>a>>b;
    cout<<(floor(sqrt(b)) - ceil(sqrt(a)) + 1)<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        method();
    return 0;
}