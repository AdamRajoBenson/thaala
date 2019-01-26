#include <iostream>
using namespace std;
int main()
{
int n,a,b,c,rem,sum=0;
cin>>a;
cin>>b;
for(n=a+1;n<b;n++)
{
sum=0;
c=n;
while(c!=0)
{
rem=c%10;
sum+=rem*rem*rem;
c/=10;
}
if(sum==n)
cout<<n<<"\t";
}
return 0;
}
