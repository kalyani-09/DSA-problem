#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
cout<<"Enter the number of days"<<endl;
cin>>n;
int a[n];
cout<<"Enter the price of stocks"<<endl;
for(int i=0;i<n;i++){
	cin>>a[i];
}
int max_profit=0;
int sumit;
int kalyani;
for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(a[j]-a[i]>max_profit){
			max_profit=a[j]-a[i];
			sumit=i+1;//stock buy at day
			kalyani=j+1;//stock sell at day
			
		}
	}
}
if(max_profit==0){
	cout<<"Maximum profit from the given transcation is ="<< max_profit<<endl;
}
else{
	cout<<"Maximum profit from the given transcation is ="<< max_profit<<endl;
	cout<<"Stock buy on ="<< sumit<<endl;
	cout<<"Stock sell on ="<< kalyani<<endl;
}
	
	return 0;
}


