# include <stdio.h>

void merge_sort(int a[], int low, int up);
//разбивает введеный массив на отдельные подмассивы, до одного эелемента в массиве.

void merge(int a[], int lowL, int upL, int lowR, int upR);
//произведит слияние левого и правого подмассива, пока не получиться
//один единый отсортированный массив.

int main()
{
    int arr[32];
    int len;
    int i;
    printf("enter the lenght of the array\n");
    scanf("%d",&len);
    
	printf("now enter the numbers\n");
    for(i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    
    merge_sort(arr, 0, len-1);
    
    
    for(i = 0; i < len; i++)
        printf("%d - ",arr[i]);
    
	printf("\n");
    return 0;    
}

void merge_sort(int a[], int low, int up)
{
    int mid;
    if(low < up)
    {
        mid = (low + up) / 2;
        merge_sort(a, low, mid);//левая рекурсия, функция вызывает сама себя
        merge_sort(a, mid + 1, up);//правая рекурсия, функция также вызывает сама себя
        merge(a, low, mid, mid+1, up);
    }
}

void merge(int a[], int lowL, int upL, int lowR, int upR)
    {
        int atmp[32];
        int begL, begR, k, j = 0, i;
        begL = lowL;
        begR = lowR;
        k = 0;//индексатор временного подмассива atmp
        
        while(begL <= upL && begR <= upR)//пока в обоих массивах есть элементы
        {
            if(a[begL] < a[begR])
               atmp[k++] = a[begL++];
            else
               atmp[k++] = a[begR++];
        }
            
        while(begL <= upL)
            atmp[k++] = a[begL++];
            
        while(begR <= upR)
            atmp[k++] = a[begR++];
                
         for(i = lowL; i <= upR; i++, j++)
             a[i] = atmp[j];
        }


