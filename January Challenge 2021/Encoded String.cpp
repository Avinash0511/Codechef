//Link: https://www.codechef.com/JAN21C/problems/DECODEIT

/*Question is perfectly explained on the codechef page. Logic is just add every four bits and change it into number and add that number to 97 (ASCII for 'a') and again conver that number to character. At last keep adding to a string and finally print it. */

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t; //test cases
	while(t--)
	{
	    int n;
	    cin>>n; //number of bits will always be a multiple of 4
	    int sum = 0;
	    string s="";
	    for(int i=1;i<=n/4;i++) //working on 4 bits a time so divided by 4, e.g for n=4 loop will only work once
	    {
	        char n1,n2,n3,n4;
	        cin>>n1>>n2>>n3>>n4; //taking input 4 bits as character becuase provided as string
	        sum = ((n1 - '0')*8) + ((n2 - '0')*4) + ((n3 - '0')*2) + ((n4 - '0')*1); /*every character ascii value will be minus the ascii value of zero(0) to get value either 0 or 1 (e.g. n1=0 ascii value 30 so 30-30 = 0 so we got the value) and normal binary to decimal format*/
	        s += sum + 'a'; //making it into character and add to string
	    }
	    cout<<s<<endl;
	}
	return 0;
}
