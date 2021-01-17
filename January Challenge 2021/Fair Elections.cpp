/* Link: https://www.codechef.com/JAN21C/problems/FAIRELCT


So to keep in mind there are two peoples, John Jackson and Jack Johnson and we are friend of John Jackson so we have to do minimum swapping of vote packages to make Jack Johnson win impossible.

- Case 1: Get the two sums of all pack of votes for N and M and check them whether John Jackson is already wining or not, if yes print 0. No need to do any swapping he has enough votes.
- Case 2: If sum of votes are equal or John jackon has less votes then we have to start working on swapping things. The basic way according to me is to sort both the pack of votes.
Sort in either order(ascending or descending) and then swap the lowest of John Jackson's vote with highest of Jack Jhonson's and keep checking the sum and don't forget counting the swaps.

  - If after few swapping John Jackson votes becomes higher print number of swaps and if still not then print -1.



Codes will be posted after the challenge gets over. All the best till then. Keep coding. */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arn[n],arm[m];
	    long long int sumn = 0, summ=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arn[i];
	        sumn += arn[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>arm[i];
	        summ += arm[i];
	    }
	    if(sumn > summ)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        sort(arn,arn+n);
	        sort(arm,arm+m);
	        int i=0,j=m-1,count=0;
	        while(sumn <= summ && i<n && j>=0)
	        {
	            sumn -= arn[i];
	            sumn += arm[j];
	            summ -= arm[j];
	            summ += arn[i];
	            i++;
	            j--;
	            count++;
	        }
	        if(sumn > summ)
	        {
	            cout<<count<<endl;
	        }
	        else
	        {
	            cout<<-1<<endl;
	        }
	    }
	}
	return 0;
}


