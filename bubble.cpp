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
	for (i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(arr[j+1]<arr[j]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				}
				}
				}		
	for(i=0;i<n;i++){
				cout<<arr[i]<<endl;
	}
}
