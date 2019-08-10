#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
	int t= *a;
	*a=*b;
	*b=t;
}

int Partition(int arr[],int p,int r)
{
	int pivot= arr[r];
	int i=p-1;
	for(int j=p;j<=r-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[r]);
	return (i+1);
}

void quicksort(int arr[],int p,int r)
{
	if(p<r)
	{
		int q=Partition(arr,p,r);
		quicksort(arr,p,q-1);
		quicksort(arr,q+1,r);
	}
}
void printarray(int arr[],int size)
{
	int k;
	for(int k=0;k<size;k++)
		cout<<arr[k]<<" ";
	cout<<endl;
}
int main()
{
	int arr[]={13,6,1,4,10,12};
	int n=6;
	quicksort(arr,0,n-1);
	cout<<"Sorted: "<<"\n";
	printarray(arr,n);
	return 0;
}



