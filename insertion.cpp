#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"enter no.of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter elements"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for (i=0;i<n;i++){
		int k=arr[i];
		j=i-1;
		while(j>=0&& k<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=k;
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
