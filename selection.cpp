#include <iostream>
using namespace std;
int main(){
	int arr[100],n,i,j;
	cout<<"enter no.of elememts"<<endl;
	cin>>n;
	cout<<"enter elememts"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int min,m;
	for(i=0;i<n;i++){
		 min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
				}
		}
				int temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;
			
	}
	for(i=0;i<n;i++){
				cout<<arr[i]<<endl;
	}
}
