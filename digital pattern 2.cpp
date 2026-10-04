#include<iostream>
using namespace std;
int main()
{
int count=5;
for(int i=5;i>=1;i--)
for(int j=5;j>=1;j--)
if (i==j||j==count)
cout<<j;
else
cout<<"";
cout<<endl;
count--;
return 0;
}
