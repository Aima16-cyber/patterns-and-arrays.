#include<iostream>
using namespace std;
int main(){
int matrix1[3][3],matrix2[3][3],sum[3][3];
cout<<"enter values for matrix 1:"<<endl;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
cin>>matrix1[i][j];
	}}
cout<<"enter the values for matrix 2:"<<endl;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
cin>>matrix2[i][j];
}}
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
sum[i][j]=matrix1[i][j]+matrix2[i][j];
}}
cout<<"sum of two matrices:"<<endl;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
	cout<<sum[i][j];
}}
return 0;

}
