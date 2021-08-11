#include<iostream>
using namespace std;
int main() 
{
    long stack[100000];
    long topOfStack = -1;
    long maximumNumber = 0 ;
    int numberOfQueries;
    scanf("%d",&numberOfQueries);
    while (numberOfQueries > 0)
    {
        //scan query type
        int queryType;
        cin>>queryType;
        switch (queryType)
        {
            case 1:
                //push
                long numberToBeInserted;
                cin>>numberToBeInserted;
                if (numberToBeInserted > maximumNumber)
                    maximumNumber = numberToBeInserted;
                stack[++topOfStack] = numberToBeInserted;
                break;
            case 2:
                //delete
                if (stack[topOfStack] == maximumNumber)
                {
                    topOfStack--;
                    //current maximum is going to get deleted. We need to set up a new maximum by scanning the stack
                    maximumNumber = 0;
                    long iterator = topOfStack;
                    while (iterator!=-1)
                    {
                        if(stack[iterator] > maximumNumber)
                            maximumNumber=stack[iterator];
                        iterator--;
                    }
                }
                else
                    topOfStack--;
                break;
            case 3:
                //print maximum element
                printf("%ld\n", maximumNumber);
                break;
        }
        numberOfQueries--;
    }
    return 0;
}