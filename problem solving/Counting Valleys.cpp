#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int no_of_valley=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            count++;
            // we have added the below code in if block because a valley will be formed only when its previous values are D and due to U it reaches the sea level
            // if u don't add the below lines in if block then wrong answer will be given by the compiler as it just count the total no of times zero occur  during the course of transtion that includes both mountain and valley
            if(count==0)
                no_of_valley++;
        }    
        else if(s[i]=='D')
            count--;
    }
    cout<<no_of_valley<<endl;
}