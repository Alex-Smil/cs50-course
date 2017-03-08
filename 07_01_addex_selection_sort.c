# include <stdio.h>

int main()
{
    int arr[256];
    int i, len, j=0, tmp, min, k;
    
    printf("enter the lenght of the array\n");
    scanf("%d",&len);
    
	printf("now enter the numbers\n");
    for(i = 0; i < len; i++)
        scanf("%d", &arr[i]);
      
    for(i = 0; i < len; i++)
    {
        min = arr[i];
        k = i;
                
        for(j = i; j < len; j++)	//looking for a min
        {
            if(arr[j] < min)
            {    min = arr[j];
                k = j;	//Write the address of the minimum
            }
        }
            tmp = arr[i];
            arr[i] = min;
            arr[k] = tmp;
    }
	printf("\n");
    for(i = 0; i < len; i++)
        printf("%d - ",arr[i]);
    
	printf("\n");
    return 0;    
}

