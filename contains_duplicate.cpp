 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 	int n;
 	int a[n];
	 int index=0;
 	cout<<"Enter the size of an array"<<endl;
 	cin>>n;
 	cout<<"Enter the element of an array"<<endl;
 	for(int i=0;i<n;i++){
 		cin>>a[i];
	 }
	 for(int i=0;i<n-1;i++){ 
	 	for(int j=i+1;j<n;j++){
	 		if(a[i]==a[j]){ 
	 			index++;
	 			
			 }
		 }
	 }
	 if(index!=0){
	 	cout<<"contains duplicate"<<endl;
	 }
	 else{
	 	cout<<" Does not contain duplicate"<<endl;
	 }
	 return 0;
 }
