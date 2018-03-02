#include <iostream>
using namespace std;

int binarySearch(int a[50],int beg, int last,int num)
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
}

int main() {
int arr[100],n,num;
cout<<"Enter the size of array."
cin>>n;
cout<<"Enter the elements of array in sorted order(ascending or descending)."
(for int i=0;i<n;i++)
{
	cin>>arr[i];
	cout<<arr[i]<<" ";
}
cout<<"Enter the element to be searched."
cin>>num;

int beg=0;
int last=n-1;

binarySearch(arr,beg,last)

	return 0;
}
