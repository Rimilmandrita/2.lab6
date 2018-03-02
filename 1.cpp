
#include <iostream>
using namespace std;

int binarySearch1(int a[50],int beg, int last,int num)
{
	
	while(beg<=last)
	{
	int mid=(beg+last)/2;
	if(a[mid]==num)
   {
   	return mid+1;
   }
   else if(num<a[mid])
   {
   	last=mid-1;
   }
   else 
   {
   	beg=mid+1;
   }
	}
	return -1;
}

int binarySearch2(int a[50],int beg, int last,int num)
{
	
	while(beg<=last)
	{
	int mid=(beg+last)/2;
	if(a[mid]==num)
   {
   	return mid+1;
   }
   else if(num<a[mid])
   {
   	beg=mid+1;
   }
   else 
   {
   	last=mid-1;
   }
	}
	return -1;
}

int main() {
int arr[100],n,num,pos;
cout<<"Enter the size of array:";
cin>>n;
cout<<n;
cout<<"\nEnter the elements of array in sorted order(ascending or descending).";
cout<<"\nThe array is:";
for (int i=0;i<n;i++)
{
	cin>>arr[i];
	cout<<arr[i]<<" ";
}
cout<<"\nEnter the element to be searched:";
cin>>num;
cout<<num;

int beg=0;
int last=n-1;
{
if(arr[0]<arr[1])
{
 pos=binarySearch1(arr,beg,last,num);
}
else
pos=binarySearch2(arr,beg,last,num);
}

if(pos==-1)
cout<<"\nThe element is not found.";
else
cout<<"\nElement found at "<<pos<<"  th position";

	return 0;
}	
