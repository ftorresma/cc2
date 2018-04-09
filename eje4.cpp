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
void mostrarmatriz(int **P,int a, int b)
{
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
            cout<<*(*(P+i)+j)<<" ";
        cout<<endl;
    }
}
void multimatriz(int **x,int **y, int a, int b)
{
	int **v;
	v = new int*[a];	
	for (int i=0;i<a;i++)
    {
    	v[i]=new int[b];
	}
	for (int l=0;l<a;l++)
    	for (int r=0;r<b;r++)
        	*(*(v+l)+r)=0;	
    for (int f=0;f<a;f++)
        for (int k=0;k<b;k++)
            for (int o=0;o<a;o++)
            {
            	*(*(v+f)+k)= ((*(*(x+o)+k)) * (*(*(y+f)+o)) + (*(*(v+f)+k)));
			}
    mostrarmatriz(v,a,b);
    delete v;
}
int main()
{
    int **ptrmatriz;
    int filas=4,columnas=4;
    int **ptrmatriz2;
    int filas2=4,columnas2=4;
    ptrmatriz=new int*[filas];
    for (int i=0;i<filas;i++)
    {
    		ptrmatriz[i]=new int[columnas];
	}
	for (int k=0;k<filas;k++)
		for(int g=0;g<columnas;g++)
			*(*(ptrmatriz+k)+g)=4;
	ptrmatriz2=new int*[filas2];
    for (int i=0;i<filas2;i++)
    {
    		ptrmatriz2[i]=new int[columnas2];
	}
	for (int k=0;k<filas2;k++)
		for(int g=0;g<columnas2;g++)
			*(*(ptrmatriz2+k)+g)=8;
	//preg 4---------------------------------------------------------------------
    mostrarmatriz(ptrmatriz2,4,4);
	mostrarmatriz(ptrmatriz,4,4);
	multimatriz(ptrmatriz,ptrmatriz2,4,4);
	delete ptrmatriz;
    delete ptrmatriz2;
}
