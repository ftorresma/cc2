#include <iostream>

using namespace std;
//preg 5/////////////////////////////
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
int tama2(char *x)
{
    if(*x=='\0')
        return 0;
    else
    {
        x++;
        return 1+tama2(x);
    }
}
int tama3(char *x)
{
    char *p1=x;
    char *p2=x;
    while(*p2!='\0')
    {
        p2++;
    }
    return p2-p1;
}
int tamaint(int *x)
{
    int var=0;
    while (*x!='\0')
    {
        var++;
        x++;
    }
    return var;
}
int tama2int(int *x)
{
    if(*x=='\0')
        return 0;
    else
    {
        x++;
        return 1+tama2int(x);
    }
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,2,'\0'};
    int *ptr=arr;
    char arra[]={'h','o','l','a','\0'};
    char *ptrarra=arra;
	//preg 5---------------------------------------------------------------------
    cout<<tama(ptrarra);
    cout<<tama2(ptrarra);
    cout<<tama3(ptrarra);
    cout<<tamaint(ptr);
    cout<<tama2int(ptr);
}
