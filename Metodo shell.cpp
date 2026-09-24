//Metodo Shell
#include <iostream>
using namespace std; 
void Shellsort(int A[],int n){
		int k=n+1;
		while(k>1){
			k=k/2;
			for(int i=k; i<n;i++){
				int auxi=A[i];
				int j=i;
				while(j-k>=1 && A[j-k]<auxi){
					A[j]=A[j-k];
					j=j-k;
				}
				A[j]=auxi;
			}
		}
}

int main(){
	int A[50], n;
	cin>>n;
	for (int i=0; i<n;i++){
		cin>>A[i];
	}
	Shellsort(A,n);
	for (int i=0; i<n;i++){ 
	   cout<<A[i]<<" ";	
	}
	cout<<endl;
}
