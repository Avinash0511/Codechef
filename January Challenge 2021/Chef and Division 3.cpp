** //Link to question: https://www.codechef.com/JAN21C/problems/DIVTHREE
**/*
There's the chef who want to host a contest and he has people who set problems for him, so that he can use those questions in his contest and these people are called problem setters and they are represented by N. So the chef has N setters and every setter set few problems as provided input, example is he has 3 setters so every setter from 1 to N represented as i will set some problem so these are represented with A of i, i.e. for N = 3, A1 = 2, A2 = 4, A3 = 7. After this there's a limit of problems that is allowed to set in the contest and that is represented by K, i.e. only K problems are allowed to set per day. So if N=1 and A1=3 and K=4, here we can see that contest cant be hosted because number of problems set are less than the required one, eg. N=1, A1=5 and K=4, now we can host contest for 1 day as we have more problems required for 1 day. Third limit here is the number of day these contest should be hosted represented by D, means if problems are left and its greater than one day required but day we want to host is only 1 so we will stop here only, eg. N=1,A1=9,K=4 and D=1, we can see that for first day we hosted 4 problems and are left with 5 more but D is only 1 so we cant host contest further and we will stop here.

Case 1: Get sum of all the problems set by the setters and check whether it is greater than K or not. If not then print 0 becuase it won't be possible to host the contest.
Case 2: If we have sum more than or equal to K we will divide it by K to find number of days we can host. If these days are greater than D then print D because we cant host more than allowed and if these days are less than D then we will print these days.
*/

#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,d;
        cin>>n>>k>>d;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            long long int temp;
            cin>>temp;
            sum+=temp;
        }
        if(sum < k)
        {
            cout<<0<<endl;
        }
        else
        {
            long long int days = sum/k;
            if(days > d)
            {
                cout<<d<<endl;
            }
            else
            {
                cout<<days<<endl;
            }
        }
    }
}
