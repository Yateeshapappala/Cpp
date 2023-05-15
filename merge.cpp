#include <iostream>
using namespace std;
void merge(int a[],int l,int mid,int h){
	int b[h+1];
	int k=l;
	int i=l;
	int j=mid+1;
	while(i<=mid&&j<=h){
		if(a[i]<a[j]){
			b[k++]=a[i++];
		}
		else{
			b[k++]=a[j++];
		}
	}
	if(i>mid){
		while(j<=h){
			b[k++]=a[j++];
			
		}
	}
	else{
		while(i<=mid){
			b[k++]=a[i++];
		}
	}
	for(int t=l;t<=h;t++){
		a[t]=b[t];
	}
}
void mergesort(int arr[],int l,int h){
	int mid;
	if(l<h){
		mid=(l+h)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,h);
		merge(arr,l,mid,h);
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
	mergesort(arr,0,n-1);
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

