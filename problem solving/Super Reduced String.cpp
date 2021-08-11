//Best way to solve this question
#include<iostream>
using namespace std;
char arr[101];
int top=-1;
void push(char ch)
{   
    arr[++top]=ch;
}
void pop()
{
    top--;
}
char stack_top()
{
    return arr[top];
}
bool empty()
{
    return top==-1;
}
int main()
{
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        if(empty()==true)
            push(s[i]);
        else if(s[i]!= stack_top())
            push(s[i]);
        else 
            pop();
    }
    if(empty()==true)
        cout<<"Empty String"<<endl;
    else
    {
        for(int i=0;i<=top;i++)
            cout<<arr[i];
    }
}