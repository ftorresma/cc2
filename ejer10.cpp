#include <iostream>

using namespace std;

int tama2(float *x)
{
    int var=0;
    while (*x!='\0')
    {
        var++;
        x++;
    }
    return var;
}
void mostrar(float x[])
{
	for(int i=0;i<tama2(x);i++)
		cout<<x[i]<<" ";
}

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
bool compro(char p)
{
	if ('0'-p==-1)
    	{
    		return true;
		}
		else if ('0'-p==-2)
    	{
    		return true;
		}
		else if ('0'-p==-3)
    	{
    		return true;
		}
		else if ('0'-p==-4)
    	{
			return true;
		}
		else if ('0'-p==-5)
    	{
    		return true;
		}
		else if ('0'-p==-6)
    	{
    		return true;
		}
		else if ('0'-p==-7)
    	{
    		return true;
		}
		else if ('0'-p==-8)
    	{
    		return true;	
		}
		else if ('0'-p==-9)
    	{
    		return true;
		}
		else if ('0'-p==0)
    	{
    		return true;
		}
	return false;
}
float compro2(char p)
{
	if ('0'-p==-1)
    	{
    		return 1;
		}
		else if ('0'-p==-2)
    	{
    		return 2;
		}
		else if ('0'-p==-3)
    	{
    		return 3;
		}
		else if ('0'-p==-4)
    	{
			return 4;
		}
		else if ('0'-p==-5)
    	{
    		return 5;
		}
		else if ('0'-p==-6)
    	{
    		return 6;
		}
		else if ('0'-p==-7)
    	{
    		return 7;
		}
		else if ('0'-p==-8)
    	{
    		return 8;	
		}
		else if ('0'-p==-9)
    	{
    		return 9;
		}
	return 0;
}
int digito(float x[],char list[])
{
	int con=0;
	cout<<tama(list)<<endl;
	cout<<list[0]<<endl;
	cout<<list[1]<<endl;
	cout<<list[2]<<endl;
	cout<<list[3]<<endl;
	cout<<list[4]<<endl;
	cout<<list[5]<<endl;
	cout<<list[6]<<endl;
	cout<<list[7]<<endl;
    for(int i=0;i<tama(list);i++)
    {	
    	if ('0'-list[i]==-1)
    	{
    		if('0'-list[i+1]==2 && compro(list[i+2])==true)
    		{
    			x[con]=((compro2(list[i])*10)+compro2(list[i+2]))/10;
    			con++;;
    			i=i+2;
    		}
    		else
    		{
    			x[con]=1;
    			con++;
			}
		}
		else if ('0'-list[i]==-2)
    	{
    		if('0'-list[i+1]==2 && compro(list[i+2])==true)
    		{
    			x[con]=((compro2(list[i])*10)+compro2(list[i+2]))/10;
    			con++;
    			i=i+2;
    		}
    		else
    		{
    			x[con]=2;
    			con++;
			}
		}
		else if ('0'-list[i]==-3)
    	{
    		if('0'-list[i+1]==2 && compro(list[i+2])==true)
    		{
    			x[con]=((compro2(list[i])*10)+compro2(list[i+2]))/10;
    			con++;
    			i=i+2;
    		}
    		else
    		{
    			x[con]=3;
    			con++;
			}
		}
		else if ('0'-list[i]==-4)
    	{
    		if('0'-list[i+1]==2 && compro(list[i+2])==true)
    		{
    			x[con]=((compro2(list[i])*10)+compro2(list[i+2]))/10;
    			con++;
    			i=i+2;
    		}
    		else
    		{
    			x[con]=4;
    			con++;
			}
		}
		else if ('0'-list[i]==-5)
    	{
    		if('0'-list[i+1]==2 && compro(list[i+2])==true)
    		{
    			x[con]=((compro2(list[i])*10)+compro2(list[i+2]))/10;
    			con++;
    			i=i+2;
    		}
    		else
    		{
    			x[con]=5;
    			con++;
			}
		}
		else if ('0'-list[i]==-6)
    	{
    		if('0'-list[i+1]==2 && compro(list[i+2])==true)
    		{
    			x[con]=((compro2(list[i])*10)+compro2(list[i+2]))/10;
    			con++;
    			i=i+2;
    		}
    		else
    		{
    			x[con]=6;
    			con++;
			}
		}
		else if ('0'-list[i]==-7)
    	{
    		if('0'-list[i+1]==2 && compro(list[i+2])==true)
    		{
    			x[con]=((compro2(list[i])*10)+compro2(list[i+2]))/10;
    			con++;
    			i=i+2;
    		}
    		else
    		{
    			x[con]=7;
    			con++;
			}
		}
		else if ('0'-list[i]==-8)
    	{
    		if('0'-list[i+1]==2 && compro(list[i+2])==true)
    		{
    			x[con]=((compro2(list[i])*10)+compro2(list[i+2]))/10;
    			con++;
    			i=i+2;
    		}
    		else
    		{
    			x[con]=8;
    			con++;
			}
		}
		else if ('0'-list[i]==-9)
    	{
    		if('0'-list[i+1]==2 && compro(list[i+2])==true)
    		{
    			x[con]=((compro2(list[i])*10)+compro2(list[i+2]))/10;
    			con++;
    			i=i+2;
    		}
    		else
    		{
    			x[con]=9;
    			con++;
			}
		}
		else if ('0'-list[i]==0)
    	{
    		if('0'-list[i+1]==2 && compro(list[i+2])==true)
    		{
    			x[con]=((compro2(list[i])*10)+compro2(list[i+2]))/10;
    			con++;
    			i=i+2;
    		}
    		else
    		{
    			x[con]=0;
    			con++;
			}
		}
	}
	x[con]='\0';
}


int main()
{
    char lista[]="13o95d98fgdghghdg67i8.67p67u67j.76p7f8.678";
    float listasalida[tama(lista)];
    digito(listasalida,lista);
    mostrar(listasalida);
}
