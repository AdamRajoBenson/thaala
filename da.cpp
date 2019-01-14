#include<iostream.h>
#include<conio.h>
void main()
{
char a;
cin>>a;
if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
{
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'|a=='U'|)
cout<<"vowel";
else
cout<<"consonant";
}
else
cout<<"invalid";
}
