#include <iostream>

using namespace std;
//preg 8////////////////////////////////
void cambio(char *v,int x,int y)
{
    char var=v[x];
    v[x]=v[y];
    v[y]=var;
}
void cambio2(char *v,int y,int x)
{
    char ptr[2]={v[y],v[x]};
    char *puntero=ptr;
    v[x]=*puntero;
    puntero++;
    v[y]=*puntero;
}
int main()
{
	char arra[]={'h','o','l','a','\0'};
    char *ptrarra=arra;
	//preg 8---------------------------------------------------------------------
    cout<<ptrarra[1]<<","<<ptrarra[3]<<endl;
    cout<<ptrarra<<endl;
    cambio(ptrarra,1,3);
    cout<<ptrarra[1]<<","<<ptrarra[3]<<endl;
    cout<<ptrarra<<endl;
    cout<<ptrarra[1]<<","<<ptrarra[3]<<endl;
    cout<<ptrarra<<endl;
    cambio2(ptrarra,1,3);
    cout<<ptrarra[1]<<","<<ptrarra[3]<<endl;
    cout<<ptrarra;
}
