#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={-4,-2,6,4,0,-2};
	int n=6;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int k=j+1;
			if(a[i]+a[j]==-a[k]){
				cout<<a[i]<<","<<a[j]<<","<<a[k]<<endl;
				
			}
			k++;
		}
	}
	return 0;
}
