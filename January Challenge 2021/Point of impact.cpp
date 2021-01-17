#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    if(x==y)
	    {
	        if(x==0)
	        {
	            cout<<0<<" "<<0<<endl;
	        }
	        else
	        {
	            cout<<n<<" "<<n<<endl;
	        }
	    }
	    else if(x==0 && y==n)
	    {
	        cout<<x<<" "<<y<<endl;
	    }
	    else if(x==n && y==0)
	    {
	        cout<<x<<" "<<y<<endl;
	    }
	    else if(y>x && y==n && x!=0)
	    {
	        long long int temp;
	        temp = y-x;
	        long long int first[] = {x,y}, second[] = {temp,0};
	        long long int third[] = {0,temp}, fourth[] = {y,x};
	        temp = k%4;
	        if(temp == 1)
	        {
	            cout<<first[0]<<" "<<first[1]<<endl;
	        }
	        else if(temp == 2)
	        {
	            cout<<second[0]<<" "<<second[1]<<endl;
	        }
	        else if(temp == 3)
	        {
	            cout<<third[0]<<" "<<third[1]<<endl;
	        }
	        else
	        {
	            cout<<fourth[0]<<" "<<fourth[1]<<endl;
	        }
	    }
	    else if(x>y && x==n && y!=0)
	    {
	        long long int temp;
	        temp = x-y;
	        long long int first[] = {y,x}, second[] = {0,temp};
	        long long int third[] = {temp,0}, fourth[] = {x,y};
	        temp = k%4;
	        if(temp == 1)
	        {
	            cout<<first[0]<<" "<<first[1]<<endl;
	        }
	        else if(temp == 2)
	        {
	            cout<<second[0]<<" "<<second[1]<<endl;
	        }
	        else if(temp == 3)
	        {
	            cout<<third[0]<<" "<<third[1]<<endl;
	        }
	        else
	        {
	            cout<<fourth[0]<<" "<<fourth[1]<<endl;
	        }
	    }
	    else if(x>y)
	    {
	        long long int temp = n-x;
	        long long int x1 = x + temp, y1 = y + temp;
	        long long int first[] = {x1,y1}, second[] = {y1,x1};
	        temp = y;
	        x1 = x-y;
	        long long int third[] = {0,x1}, fourth[] = {x1,0};
	        temp = k%4;
	        if(temp == 1)
	        {
	            cout<<first[0]<<" "<<first[1]<<endl;
	        }
	        else if(temp == 2)
	        {
	            cout<<second[0]<<" "<<second[1]<<endl;
	        }
	        else if(temp == 3)
	        {
	            cout<<third[0]<<" "<<third[1]<<endl;
	        }
	        else
	        {
	            cout<<fourth[0]<<" "<<fourth[1]<<endl;
	        }
	    }
	    else
	    {
	        long long int temp = n-y;
	        long long int x1 = x + temp, y1 = y + temp;
	        long long int first[] = {x1,y1}, second[] = {y1,x1};
	        temp = x;
	        x1 = y-x;
	        long long int third[] = {x1,0}, fourth[] = {0,x1};
	        temp = k%4;
	        if(temp == 1)
	        {
	            cout<<first[0]<<" "<<first[1]<<endl;
	        }
	        else if(temp == 2)
	        {
	            cout<<second[0]<<" "<<second[1]<<endl;
	        }
	        else if(temp == 3)
	        {
	            cout<<third[0]<<" "<<third[1]<<endl;
	        }
	        else
	        {
	            cout<<fourth[0]<<" "<<fourth[1]<<endl;
	        }
	    }
	}
	return 0;
}
