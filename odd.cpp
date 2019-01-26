#include<stdio.h>
#include <iostream>
using namespace std;
int main()
{
int n,a,b;
cin>>a;
cin>>b;
for(n=a+1;n<b;n++)
if(n%2!=0)
cout<<n<<"\t"; 
return 0;
 }
