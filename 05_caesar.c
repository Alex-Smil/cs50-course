# include <stdio.h>
//# include <cs50.h>
# include <string.h>
# include <stdlib.h>


//int main (int argc, string argv[])
int main (int argc, char *argv[])
{
    int i, j, n;
    
    if(argc != 2)
    {
        printf("Wrong\n");
        return 1;
    }
    else
    {
        int k = atoi(argv[1]); // translation of char type the number in int
        if(k > 26)
           k = k % 26;
        
		argv[2] = fgets(*argv, 100, stdin);
	        //argv[2] = GetString();// Use with cs50 library
                
        for(i = 2; i < 3; i++)
        {
            for(j = 0, n = strlen(argv[i]); j < n; j++)
            {
                if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
                {    
                    int tmp = argv[i][j] - 0;//translate character in the number of type int
                    tmp = tmp + k;//encrypt character
                    
                    if(tmp > 122)
                    {
                        tmp = (tmp - 97) % 26;
                        argv[i][j] = 97 + tmp;//encrypt character
                    }
                    else 
                        argv[i][j] = argv[i][j] + k;
                }    
                    
                else if(argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                {    
                    int tmp = argv[i][j] - 0;        //translate character in the number of type int
                    tmp = tmp + k;                  //encrypt character
                    
                    if(tmp > 90)
                    {
                        tmp = (tmp - 65) % 26;
                        argv[i][j] = 65 + tmp;//encrypt character
                    }
                    else 
                        argv[i][j] = argv[i][j] + k;
                }
                       
                printf("%c", argv[i][j]);      //encrypted character 
            }
        }
        printf("\n");
        
        return 0;
    }
}
/*
new functions : atoi(), 
*/
