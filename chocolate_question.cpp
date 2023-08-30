#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of chocolate packets:"<<endl;
	cin>>n;
	int a[n];
	int m;
	
	cout<<"ENter the number of chocoltes on each packet:"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the number of students among which we have to distribute a chocolates packet"<<endl;
	cin>>m;
	int curr_diff,prev_diff=INT_MAX;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(int i=0;i<n-m+1;i++){
		curr_diff=0;
		curr_diff=a[i+m-1]-a[i];
		if(curr_diff<prev_diff){
			prev_diff=curr_diff;
		}
	}
	cout<<"Minimum difference is:"<<prev_diff<<endl;
	return 0;
}

