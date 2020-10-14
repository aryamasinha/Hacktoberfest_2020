#include <stdio.h>
#include <string.h>

int main(void)
{
    //variables
    char sentence[100];
    int  chef = 0;
    int q = 0;
    
    //for a certain number of times
    printf("\nquantity: ");
    scanf("%d", &q);
    
    for( int c = q; c > 0; c--)
    {
        //read from keyboard
        printf("\nsentence: ");
        getchar ( );
        gets(sentence);
        
        //testing
        for (int i = 0; i < strlen(sentence); i=i+1)
        {
            if (sentence[i] == 'c' || sentence[i] == 'h' ||
                sentence[i] == 'e' || sentence[i] == 'f' )
            {
                if (sentence[i+1] == 'c' || sentence[i+1] == 'h' ||
                    sentence[i+1] == 'e' || sentence[i+1] == 'f' )
                {
                    if (sentence[i+2] == 'c' || sentence[i+2] == 'h' ||
                        sentence[i+2] == 'e' || sentence[i+2] == 'f' )
                    {
                        if (sentence[i+3] == 'c' || sentence[i+3] == 'h' ||
                            sentence[i+3] == 'e' || sentence[i+3] == 'f' )
                        {
                            if (sentence[i] != sentence[i+1]   && sentence[i] != sentence[i+2]   && 
                                sentence[i] != sentence[i+3]   && sentence[i+1] != sentence[i+2] &&
                                sentence[i+1] != sentence[i+3] && sentence[i+2] != sentence[i+3]   )
                            {
                                chef++;
                            }
                        }
                    }
                }
            }
        }//end for
        
        //results
        if (chef > 0)
        {
            printf("\nlovely %d", chef);
        }
        else
        {
            printf("\nnormal");
        }//end if
        
        chef = 0;
    }//end for

    getchar ( );
    return (0);
} //end main