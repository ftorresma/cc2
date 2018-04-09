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
void most(int *x,int k)
{
    for(int i=0;i<k-1;i++)
    {
    	cout<<x[i]<<",";
	}
	cout<<x[k-1];
    cout<<endl;
}
////////////////////////////////////////////////////////
void insertion_sort (int x[], int tam)
{
    int k,var;

	for (int i = 0; i < tam; i++)
	{
		k=i;
		while (k>0 && x[k] < x[k-1])
		{
			var=x[k];
			x[k]=x[k-1];
			x[k-1]=var;
			k--;
		}
	}
}
void Merge(int *a, int low, int high, int mid)
{
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		Merge(a, low, high, mid);
	}
}
//////////////////////////////////////////////////////////////////
void quickSort(int arr[], int left, int right)
{
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

int main()
{
    int lista[]={1,3,7,3,9,6,23,2,45};
    most(lista,tama(lista));
    insertion_sort(lista,tama(lista));
    //MergeSort(lista,0,tama(lista)-1);
    //quickSort(lista,0,tama(lista)-1);
    most(lista,tama(lista));

}


