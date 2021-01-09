#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int i,n,m,sum1=0,sum2=0,count=0,flag=0;
	    cin>>n>>m;
	    int arr[n],brr[m];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum1=sum1+arr[i];
	    }
	    
	    for(i=0;i<m;i++)
	    {
	        cin>>brr[i];
	        sum2=sum2+brr[i];
	    }
	    sort(arr,arr+n);
	    sort(brr,brr+m,greater<int>());
	    if(sum1>sum2)
	    {
	        cout<<count<<"\n";
	        flag=1;
	    }
	    else
	    {
	        for(i=0;i<min(n,m);i++)
	        {
	            sum1=sum1+brr[i]-arr[i];
	            sum2=sum2+arr[i]-brr[i];
	            count=count+1;
	            if(sum1>sum2)
	            {
	                cout<<count<<"\n";
	                flag=1;
	                break;
	            }
	        }
	    }
	    if(flag==0)
	    {
	        cout<<-1<<"\n";
	    }
	}
	return 0;
}

