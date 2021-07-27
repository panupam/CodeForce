#include <iostream>
using namespace std;
void merge(int Arr[],int min,int mid,int max)
{
	int A[max-min+1];
	int k=min;
	for(int i=min;i<=max;++i)
	{
		A[i-min]=Arr[i];
		//cout<<A[i-min]<<endl;
	}
	int i=0,j=mid+1-min;
	while(i<=mid-min&&j<=max-min)
	{
		if(A[i]<A[j])
		{
			Arr[k]=A[i];
			++i;
			++k;
			//cout<<A[i]<<'i'<<endl;
		}
		else
		{
			Arr[k]=A[j];
			++j;
			++k;
			//cout<<A[j]<<'j'<<endl;
		}
	}
	if(i<=mid-min)
	{
		while(i<=mid-min)
		{
			Arr[k]=A[i];
			++i;
			++k;
		}
	}
	else
	{
		while(j<=max-min)
		{
			Arr[k]=A[j];
			++j;
			++k;
		}
	}

}
void mergesort(int Arr[],int min,int max)
{
	if(min==max)
		return;
	int mid=(max+min)/2;
	mergesort(Arr,min,mid);
	mergesort(Arr,mid+1,max);
	merge(Arr,min,mid,max);


}
int main()
{
	int n;
	int m;
	cin>>n;
	cin>>m;
	//cout<<m<<"input m"<<endl;
	int arr[m];
	for(int i=0;i<m;i++)
		cin>>arr[i];
	//cout<<"input done"<<endl;

	
	mergesort(arr,0,m-1);
	//cout<<"mergesort done"<<endl;
	int min=arr[n-1]-arr[0];
	for(int i=1;i<=m-n;++i)
		if(arr[i+n-1]-arr[i]<min)
			min=arr[i+n-1]-arr[i];
	cout<<min<<endl;
	return 0;
}