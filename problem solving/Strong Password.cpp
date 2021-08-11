#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count_uppercase=0;
    int count_lowercase=0;
    int count_number=0;
    int count_specialsymbol=0;
    
        for(int i=0;i<s.length();i++)
        {
            int temp = int(s[i]);
            if(temp>=65&&temp<=90)
                count_uppercase++;
            else if(temp>=97&&temp<=122)
                count_lowercase++;
            else if(temp>=48&&temp<=57)
                count_number++;
            else if(temp==33||temp==64||temp==35||temp==36||temp==37||temp==94||temp==38||temp==42||temp==40||temp==41||temp==45||temp==43)
                count_specialsymbol++;        
        }
        int count=0;
        if(count_lowercase==0)
            count++;
        if(count_uppercase==0)
            count++;
        if(count_number==0)
            count++;
        if(count_specialsymbol==0)
            count++;
        cout<<max(count,6-n)<<endl;  
        /*
            No we can't print 6-n simply if password is abcde then according to you we should print 1 but no we can't because if we append 1 character then also our password is not strong.
            This is the reason to use max function at the last line. 
        */ 
}