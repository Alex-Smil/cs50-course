# include <stdio.h>
//# include <cs50.h>
# include <math.h>
# define IN 1
# define OUT 0

int main(void)
{
    float ch;
    int tf = 25, ten = 10, five = 05, one = 01;//coins
    int key, i = 0, ctf = 0, cten = 0, cfive = 0, cone = 0;
    
    printf("Hi ! How much change is owed ?\n");
    
    
    for(key = IN; key == IN; )
    {
        //ch = GetFloat();
        scanf("%f",&ch);
		printf("get float = %lf\n",ch);
        ch = ch * 100;
        printf("chf aft perevod v cent %lf\n",ch);
        ch = roundf(ch);
        printf("chf aft perevod v okruglenie %lf\n",ch);
        //ch = chf;
        //scanf("%lf",&ch);
        if(ch < 1)
            printf("Retry\n");
        else
            key = OUT;
    }
    
  for(key = IN; key == IN; )
    {
        if(ch >= tf)
        {
            if(ch == tf)
            {
                ch = ch - tf;
                i++;
                ctf++;
                key = OUT;
            }
            else if(ch > tf)
            {
                ch = ch - tf;
                i++;
                ctf++;
            }
        }    
        else if(ch < tf)
                key = OUT;
        
    }
    
  for(key = IN; key == IN; )
    {
        if(ch >= ten)
        {
            if(ch == ten)
            {
                ch = ch - ten;
                i++;
                cten++;
                key = OUT;
            }
            else if(ch > ten)
            {    
                ch = ch - ten;
                i++;
                cten++;
            }
        }
        else if(ch < ten)
            key = OUT;
   }
   
  for(key = IN; key == IN; )
   {
        if(ch >= five)
        {
            if(ch == five)
            {
                ch = ch - five;
                i++;
                cfive++;
                key = OUT;
            }
            else if(ch > five)
            {
                ch = ch - five;
                i++;
                cfive++;
            }
        }
        else if(ch < five)
            key = OUT;
    }
    
  for(key = IN; key == IN;)
    {
        if(ch >= one)
        {
            if(ch == one)
            {
                ch = ch - one;
                i++;
                cone++;
                key = OUT;
            }
            else if(ch > one)
            {
                ch = ch - one;
                i++;
                cone++;
            }
        }
        else if(ch < one)
            key = OUT;
    }
    
    
    
    //printf("chf af one = %.2lf\n\n",ch);
    printf("chf af one = %lf\n\n",ch);
    
    
    printf("reminder %lf, ALL COINS = %d\n\n", ch, i);
    printf(" tf = %d;\n ten = %d;\n", ctf,cten);
    printf(" five = %d;\n one = %d;\n", cfive,cone);
    
}

