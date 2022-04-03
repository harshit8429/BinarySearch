//count of an element in an array

#include<bits/stdc++.h>
using namespace std;
 int first_Occurence(vector<int> arr,int n,int target)
{
	int low=0,high=n-1;
	int res=-1;
	while(low<=high)
	{
		int mid= low+(high-low)/2;
		if(arr[mid]==target)
		{
			res=mid;
			high=mid-1;
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
	return res;
}
int last_Occurence(vector<int> arr,int n,int target)
{
	int low=0,high=n-1;
	int res=-1;
	while(low<=high)
	{
		int mid= low+(high-low)/2;
		if(arr[mid]==target)
		{
			res=mid;
			low=mid+1;
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
	return res;
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
   int pos1=first_Occurence(arr,n,target);
   int pos2=last_Occurence(arr,n,target);
   if(pos1>0 && pos2>0)
{

 cout<<"number of count of "<<target<<" is "<<pos2-pos1+1<<endl;
}
else
{
	cout<<"Element does not exist in the array"<<endl;
}
	return 0;
}

