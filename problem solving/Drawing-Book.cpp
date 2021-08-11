/*https://www.hackerrank.com/challenges/drawing-book/problem?h_r=next-challenge&h_v=zen*/
#include<iostream>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    int forward_turn=0,backward_turn=0;
    if(n%2==0)
    {
        forward_turn=p/2;
        backward_turn=(n-p+1)/2;
    }
    else if(n%2==1)
    {
        forward_turn=p/2;
        backward_turn=(n-p)/2;
    }
    if(forward_turn>backward_turn)
        cout<<backward_turn<<endl;
    else
        cout<<forward_turn<<endl;
    return 0;
}