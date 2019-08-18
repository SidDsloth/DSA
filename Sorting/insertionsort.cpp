#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
	int i, key, j;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(key<arr[j] && j>=0)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{
	int arr[]={15,10,1,5,9,8};
	int n=6;
	insertionsort(arr,n);
	printArray(arr,n);
	return 0;
}

