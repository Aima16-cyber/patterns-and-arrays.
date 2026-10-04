#include<iostream>
using namespace std;
int main(){
int count=0;
for(int i=1;i<=5;i--)
for(int j=1;j<=i;j++){
cout<<"*";
for(int s=1;s<=count;s++)
cout<<"";
cout<<endl;
count +=2;
}
count=6;
for(int i=2;i<=6;i++)
for(int j=1;j<=i;j++){
cout<<"*";
for(int s=1;s<=count;s++)
cout<<"";
for(int j=1;j<=i;j++)
cout<<"*";
cout<<endl;
count -=2;}
return 0;
}

