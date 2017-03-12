# include <stdio.h>
void merge_sort(int a[], int low, int up);

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
    int i=0, j=0;
    
    
    if(low < up)
    {
        mid = (low + up) / 2;
        merge_sort(a, low, mid);//левая рекурсия, функция вызывает сама себя
        printf("LR %d = ",a[i]);
        i++;
        merge_sort(a, mid + 1, up);//правая рекурсия, функция также вызывает сама себя
        printf("RR %d = ",a[j]);
        j++;
        printf(" $$$ ");
    }
}
