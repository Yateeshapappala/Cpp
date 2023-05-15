#include <iostream>
using namespace std;
#define n 10
class lin{
	public:
		int arr[n];
		void init();
		void linea(int);
		int hash(int);
		void dis();
		
};
void lin::dis()
{
	for(int i=0;i<n;i++){
		cout<<i<<"->"<<arr[i]<<endl;
	}
}
void lin::init(){
	int i;
	for(i=0;i<n;i++){
		arr[i]=-1;
	}
}
int lin::hash(int d){
	return d%n;
}
void lin::linea(int d){
	int k=hash(d);
	if(arr[k]==-1){
		arr[k]=d;
	}
	else{
		for(int i=0;i<n;i++){
			int kn=hash(k+i*i);
			if(arr[kn]==-1){
				arr[kn]=d;
				return;
			}
		}
		}
		arr[k]=d;
	}
int main(){
	int d,x,i;
	lin l;
	l.init();
	cout<<"enter no.of elements"<<endl;
	cin>>x;
		cout<<"enter elemnets";
    for(i=0;i<x;i++){
	cin>>d;
		l.linea(d);
	}
	l.dis();
}
