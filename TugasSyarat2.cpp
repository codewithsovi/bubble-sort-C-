#include<iostream>
using namespace std;

int main (){
	string fruit [] = {"nanas", "apel", "pisang", "jeruk","mangga" };
	int n= sizeof(fruit)/sizeof(fruit [0]);
	cout<<"sebelum diurutkan : "<<endl;
	for(int i=0; i<n; i++){
		cout<<fruit[i]<<" ";
	}
	
		cout<<endl;
		for(int i=0; i<n; i++){
			for (int j=0; j<n-1; j++){
				if(fruit [j] >fruit [j+1]){
					string sementara = fruit[j];
					fruit [j] = fruit [j+1];
					fruit [j+ 1] = sementara;
				}
			}
		}
		cout<<endl;
		
			cout<<"setelah diurutkan : "<<endl;
		for(int i=0; i<n; i++){
			cout<<fruit [i]<<" ";
		}
		
		cout<<endl;
		return 0;
}
