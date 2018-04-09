#include <iostream>

using namespace std;
int tama(char *x)
{
    int var=0;
    while (*x!='\0')
    {
        var++;
        x++;
    }
    return var;
}
//preg 7//////////////////////////////// 
void concatena(char *s, char *t)
{
    while(*s!='\0')
    	s++;
    while(*t!='\0')
    {
       *s=*t;
        s++;
        t++;
    }
    *s='\0';
    s++;
    *s='\0';
}
void concatena2(char s[], char t[])
{
    int k=0,i=tama(s);
    
    while(t[k]!='\0')
    {
        s[i]=t[k];
        i++;
        k++;
    }
    s[i]=' ';
    s[i+1]=' ';
}
int main()
{
	char pa1[]={'h','o','l','a','\0'};
	char pa2[]={'h','o','l','a','2','\0'};
	char *pal1=pa1;
	char *pal2=pa2;
	//concatena(pal2,pal1);
    //cout<<pal2;
	concatena2(pa1,pa2);
    cout<<pa1;
}
