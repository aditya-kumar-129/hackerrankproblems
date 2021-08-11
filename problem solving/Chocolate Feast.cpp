#include<iostream>
using namespace std;
void method()
{
    int n,c,m;
    cin>>n>>c>>m;
    int count,wrapper;
    wrapper = n / c;
    count = wrapper;
    while (wrapper >= m) {
        wrapper -= m;
        count ++;
        wrapper ++;
    }
    cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        method();
    return 0;
}
