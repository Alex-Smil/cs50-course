#include <stdio.h>
//#include <cs50.h>
#define true 1
#define false 0

int main(void)
{
    int h, tmp;//h - column high, tmp-temporary
    int i, j = false;// i - counter, j - key to enter the cicle
    
	printf("please enter the height of the columne\nheight of the columne = ");
	
	while(j == false)
	{
		scanf("%d",&h);
		//h = GetInt();
			if(h < 0 || h > 23)
				printf("wrong, height can not be < 0 or > 23, try again\n");
			else
				j = true;
	}
	tmp = h;
    for(i = 1; j == true; i++)
    {
        if(i < h)
            printf(" ");
        else if(i == h)
        {    
            for( ; i <= tmp; i++)
                printf("#");
            i = 0;
            h--;
            printf("#\n");
        }
        if(h == 0)
            j = false;
    }
}
