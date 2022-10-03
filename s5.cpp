#include<iostream>
using namespace std;
int main(){
	int a[4][5];
	int sum=0,j,i,k;
	float av;
	for(j=0;j<4;j++){
		for(i=0;i<5;i++){
			cin>>a[j][i];
			for(k=1;k<=10;k++){
			    sum=sum+a[j][i];
			}
		}
	}
	av=sum/(10);
	for(j=0;j<4;j++){
		for(i=0;i<5;i++){
			if(a[j][i]<av){
				a[j][i]=a[j][i]+5;
				cout<<a[j][i]<<" ";
			}
		}
		cout<<endl;
	}
}
