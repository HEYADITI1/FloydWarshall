#include<iostream>
#include<iomanip>
#define NODE 4
#define INF 999

using namespace std;
int costMat[NODE][NODE];
 void floydWarshall(){
 	int cost[NODE][NODE];
 	for(int i=0;i<NODE;i++){
 		for(int j=0;j<NODE;j++){
 			cost[i][j]=costMat[i][j];
		 }
	 }
	 for(int k=0;k<NODE;k++){
	 	for(int i=0;i<NODE;i++){
 		for(int j=0;j<NODE;j++){
 			if(cost[i][k]+cost[k][j]<cost[i][j]){
 				cost[i][j]=cost[i][k]+cost[k][j];
			 }
		 }
	 }
	 }
	 
	 cout<<"The matrix is: "<<endl;
	 for(int i=0;i<NODE;i++){
	 	for(int j=0;j<NODE;j++){
	 		cout<<setw(3)<<cost[i][j];
	 		
		 }
		 cout<<endl;
	 }
 }
 int main(){
 	cout<<"Enter adjacency matrix:"<<endl;
 	for(int i=0;i<4;i++){
	 	for(int j=0;j<4;j++){
	 		cin>>costMat[i][j];
	 		
		 }
	 }
 	
 	floydWarshall();
 }
 
 
 
 
 
 
 
 
 
 
