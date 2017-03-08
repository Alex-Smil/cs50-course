# include <stdio.h>

int main()
{
    int arr[256];
    int i, j, len, tmp;
    
    printf("enter the lenght of the array\n");
    scanf("%d",&len);
    
	printf("now enter the numbers\n");
    for(i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    
    
    for(i = 0; i < len; i++)
    {
        tmp = arr[i];
        j = i;
        while(j > 0 && arr[j-1] > tmp)
        {
            arr[j] = arr[j-1];
            j = j - 1;
        }
        arr[j] = tmp;
    }
    
    for(i = 0; i < len; i++)
        printf("%d - ",arr[i]);
    
	printf("\n");
    return 0;    
}

