#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter the size of an array"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int leftmax[n];
	leftmax[0]=a[0];
	for(int i=1;i<n;i++){
		leftmax[i]=max(leftmax[i-1],a[i]);
	
		
	}
	for(int i=0;i<n;i++){
		cout<<leftmax[i];
	}
	cout<<endl;
int rightmax[n];

rightmax[n-1]=a[n-1];
for(int i=n-2;i>=0;i--){
	rightmax[i]=max(rightmax[i+1],a[i]);
	
}
for(int i=0;i<n;i++){
	cout<<rightmax[i];
}
cout<<endl;
int waterlevel;
int trapped_water;
int left;
int right;

for(int i=0;i<n;i++){
	if(leftmax[n-1]==a[i]){
	left=i;
	break;	
	}
}
for(int i=n-1;i>0;i--){
if(rightmax[n-1]==a[i]){
	right=i;
	break;	
	}	
}

waterlevel=min(leftmax[n-1],rightmax[n-1]);
trapped_water=waterlevel*(right-left);
cout<<trapped_water<<endl;
	return 0;
}
