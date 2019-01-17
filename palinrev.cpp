#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c,r=0;
cin>>a;
b=a;
do
{
c=a%10;
r=(r*10)+c;
a=a/10;
}while(a!=0);
if(r==b)
cout<<"yes";
else
cout<<"no";
}
