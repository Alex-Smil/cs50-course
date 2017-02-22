# include <stdio.h>
//# include <cs50.h>
# include <string.h>

# define IN 1
# define OUT 0

int main (void)
{
    
    char arr2[256];
    char s[256];
    int i, state, j = 0;
    
    printf("Enter names\n");
	//string s = GetString();
    fgets(s,256,stdin);
    
    int len = strlen(s);
    for(i = 0, state = OUT; i < len; i++)
        {
            if(s[i] != ' ' && state == OUT)
            {
                if(s[i] >= 'a' && s[i] <= 'z')
                    s[i] = s[i] - 32;
                                
                arr2[j] = s[i];
                j++;
                state = IN;
            }
            else if(s[i] == ' ')
                state = OUT;
        }
    
    for(i = 0; i < j; i++)  
       printf("%c",arr2[i]);
    
    printf("\n");
    
}

