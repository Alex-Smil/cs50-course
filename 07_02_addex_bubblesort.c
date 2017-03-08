# include <stdio.h>

# define IN 1
# define OUT 0
# define used 1
# define didnt 0


int main()
{
    int arr[256];
    int i, len, tmp, sort, swap;
    
    printf("enter the lenght of the array\n");
    scanf("%d",&len);
    printf("now enter the numbers\n");
    for(i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    
    len = len - 1;
    
    for(sort = IN; sort == IN;)
    {   
        for(swap = didnt, i = 0; i < len; i++)
        {    
            if (arr[i] > arr[i+1])
            {
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                swap = used;
            }
        }
        if(swap == didnt)
            sort = OUT;
    }
    
    for(i = 0; i <= len; i++)
        printf("%d",arr[i]);
    
    printf("\n");
    return 0;    
}

