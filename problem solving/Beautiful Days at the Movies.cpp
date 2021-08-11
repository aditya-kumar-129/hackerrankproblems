#include <bits/stdc++.h>
using namespace std;
int reverse (int n)
{
    int rem,reverse=0;
    while(n!=0)    
    {    
        rem=n%10;      
        reverse=reverse*10+rem;    
        n/=10;    
    } 
    return reverse;   
}
int main()
{
    int i,j,k;
    cin>>i>>j>>k;
    int count=0;
    for(int x=i;x<=j;x++)
    {
        int reverse_num = reverse(x);
        if(abs(reverse_num - x)%k==0)
            count++;
    }
    cout<<count<<endl;
}