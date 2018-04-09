#include <iostream>

using namespace std;
int tama(int *x)
{
    int var=0;
    while (*x!='\0')
    {
        var++;
        x++;
    }
    return var;
}
//preg 2//////////////////////////////
int sumarecur (int *V,int tam)
{
    if (tam==1)
    {
        return V[0];
    }
    else
        tam--;
        return V[tam]+sumarecur(V,tam);
}
int sumaiter (int *v,int tam)
{
    int cont;
    cont=v[0];
    for(int k=1;k<tam;k++)
    {
        cont=cont+v[k];
    }
    return cont;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,2,'\0'};
    int *ptr=arr;
	//preg 2---------------------------------------------------------------------
    cout<<sumarecur(arr,tama(ptr))<<" recursiva";
    cout<<sumaiter(arr,tama(ptr))<<" iterativa";
}
