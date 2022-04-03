//When order is not known
#include<bits/stdc++.h>
using namespace std;
int binary_search_asc(vector<int> arr,int n,int target)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid= low+(high-low)/2;
		if(arr[mid]==target)
		{
			return mid;
		}
		else if(arr[mid]<target)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}

	}
	return -1;
}
 int binary_search_dec(vector<int> arr,int n,int target)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid= low+(high-low)/2;
		if(arr[mid]==target)
		{
			  return mid;
		}
		else if(arr[mid]<target)
		{
				high=mid-1;
			
		}
		else
		{
		low=mid+1;
		}

	}
	return -1;
}
int main()
{   int n;
	cin>>n;
	cout<<"Enter the sorted array"<<endl;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}
	int target;
	cin>>target;
	int pos;
	if(arr[0]>arr[1])
	{
	
    pos=binary_search_dec(arr,n,target);
}
else
{
 pos=binary_search_asc(arr,n,target);	
}
if(pos>0)
{

   cout<<"Element  "<<target<<"  found at the position  "<<pos+1<<endl;
}
else
{
	cout<<"Element does not exist in the array"<<endl;
}
	return 0;
}

