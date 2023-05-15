#include<iostream>
using namespace std;
void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int quicks(int arr[],int l,int h){
	int pivot=arr[h];
	int j=l-1;
	for(int i=l;i<h;i++){
		if(arr[i]<=pivot){
			j++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[j+1],&arr[h]);
	return (j+1);
}
void quick(int arr[],int l,int h)
{
	if(l<h){
int p=quicks(arr,l,h);
 quick(arr,l,p-1);
quick(arr,p+1,h);
}
}
int main(){
	int n,i;
	cout<<"enter no.of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter elements"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	quick(arr,0,n-1);
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
