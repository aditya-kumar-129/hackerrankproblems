#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int total_liked=2;
    int current_liked=2;
    int x = 5/2;
    for(int i=1;i<n;i++)
    {
        current_liked=(current_liked*3)/2;
        total_liked+=current_liked;
    }
    cout<<total_liked<<endl;
}