#include<iostream.h>
#include<conio.h>
void main() 
{
int n,a,b,i,c=0;
cin>>a;
cin>>b;
for(n=a+1;n<b;n++)
{
c=0;
for(i=2;i<n;i++)
{
if(n%i==0)
{
c++;
break;
}
}
if(c==0)
{
cout<<n<<"\t"; 
}
}
	getch();
}
