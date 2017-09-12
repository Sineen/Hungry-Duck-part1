#include <stdlib.h>
#include <stdio.h>
#include <string.h>



/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W;
    int H;
    scanf("%d%d", &W, &H);
    int foods[H-1][W-1];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int food;
            scanf("%d", &food);
            foods[i][j] = food;
     //       printf("%d ", foods[i][j]);
        }
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int height  = 0; 
    int width = 0; 
    int maxf = foods[height][width];
    while (1)
    {
        // if we got to the last row we only go right now
        if ( height == H -1)
        {
           // printf("reached the end of the rows 1 \n");
            if( width == W -1)
            {
               // printf("reached the end of the colums 2\n");
                break;
            }
            else
            {
                ++width;
            }
        }
        // if we got to the last colim we only go down now
        else  if (width == W - 1)
            {
               // printf("reached the end of the colums 1\n");
                if(height == H - 1)
                {
                 // printf("reached the end of the rows  2\n");
                    break;
                }
                else
                {
                    ++height;
                }
            }
        else
        {   // if equale go to the right could fix it for if equal check the next ones 
            if ( foods[height + 1][width] > foods[height][width + 1] )
            {
                ++height;
            }
            else
            {
                ++ width;
            }
        }
        printf("%d \n", foods[height][width]);
        maxf = maxf + foods[height][width];
        printf("%d  after\n", maxf);

    }
    
    printf("%d\n", maxf);

    return 0;
}
