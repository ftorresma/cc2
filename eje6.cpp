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
//preg 6////////////////////////////////
void transcribir(char *s,char *t)
{
    
    for (;*t!='\0';t++,s++)
        *s=*t;
    for (;*s!='\0';s++)
    	*s=' ';
    s++;
    *s=' ';
}
void transcribir2(char s[],char t[])
{
    for(int i=0;i<tama(t);i++)
    {
        s[i]=t[i];
    }
    if(tama(s)>tama(t))
    	for(int k=tama(t);s[k]!='\0';k++)
    		s[k]=' ';
}
int main()
{
	char pa1[]={'h','o','l','a','\0'};
	char pa2[]={'h','o','l','a','2','\0'};
	char *pal1=pa1;
	char *pal2=pa2;
	//preg 6---------------------------------------------------------------------
    cout<<pal1<<endl;
    cout<<pal2<<endl;
    transcribir(pal1,pal2);
    cout<<pal1<<endl;
    cout<<pal2<<endl;
    //cout<<"metodo 2"<<endl;
    //cout<<pa1<<endl;
    //cout<<pa2<<endl;
    //transcribir2(pa1,pa2);
    //cout<<pa1<<endl;
    //cout<<pa2<<endl;
}
