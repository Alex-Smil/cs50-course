# include <stdio.h>
//# include <cs50.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

//int main (int argc, string argv[])
int main (int argc, char *argv[])
{
    int i, j, n, k = 0;
    
    if(argc != 2)
    {
        printf("Wrong, We did not enter a key word\n");
        return 1;
    }
    
    else
    {
        n = strlen(argv[1]);
        for(j = 0; j < n; j++)
        {
            if(isalpha(argv[1][j]));
            else
            {
                printf("Wrong, you can use only letters of the alphabet, the number can not be used\n");
                return 1;
            }
        }
        
        int jj = 0; //indexer codeword symbols
        int nn = strlen(argv[1]); //array codeword length
        
        
        //argv[2] = GetString();
        argv[2] = fgets(*argv, 100, stdin);
        
        for(i = 2; i < 3; i++)
        {
            for(j = 0, n = strlen(argv[i]); j < n; j++)
            {
                if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
                {    
                    int tmp = argv[i][j] - 0;//translate character in the number of type int
                    
                    if(argv[1][jj] >= 'a' && argv[1][jj] <='z')
                        k = argv[1][jj] - 97;
                    else if(argv[1][jj] >= 'A' && argv[1][jj] <='Z')
                        k = argv[1][jj] - 65;
                    
                    jj++;
                    if(jj >= nn)
                        jj = 0;
                    
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
                    
                    if(argv[1][jj] >= 'a' && argv[1][jj] <='z')
                        k = argv[1][jj] - 97;
                    else if(argv[1][jj] >= 'A' && argv[1][jj] <='Z')
                        k = argv[1][jj] - 65;
                    
                    jj++;
                    if(jj >= nn)
                        jj = 0;
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

