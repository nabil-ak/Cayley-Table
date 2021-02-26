#include <stdio.h>

int main(){
    int ordnung;
    printf("Order of the group: ");
    scanf("%d", &ordnung);
    printf("--------------------ADDITION------------------------\n");
    for(int x = 0; x < ordnung +2; x++){
        if(x == 0){
            for (int y = 0; y < ordnung+2; y++)
            {
             if (y == 0)
             {
                printf("+ ");
                continue;
             }else if (y == 1)
             {
                printf("| ");
                continue;
             }
            
            printf("%d ", y-2);
            }
            printf("\n");
            continue;
        }else if (x == 1)
        {
            for (int y = 0; y < (ordnung+2)*2; y++)
            {
            printf("-");
            }
            printf("\n");
            continue;
        }
        
        for (int y = 0; y < ordnung+2; y++)
        {
            if(y == 0){
                printf("%d ", x-2);
                continue;
            }else if (y == 1)
            {
                printf("| ");
                continue;
            }
            
            printf("%d ", ((x-2)+(y-2))%ordnung);
        }
        printf("\n");
    }

    printf("--------------------MULTIPLIKATION------------------------\n");
    for(int x = 0; x < ordnung +2; x++){
        if(x == 0){
            for (int y = 0; y < ordnung+2; y++)
            {
             if (y == 0)
             {
                printf("* ");
                continue;
             }else if (y == 1)
             {
                printf("| ");
                continue;
             }
            
            printf("%d ", y-2);
            }
            printf("\n");
            continue;
        }else if (x == 1)
        {
            for (int y = 0; y < (ordnung+2)*2; y++)
            {
            printf("-");
            }
            printf("\n");
            continue;
        }
        
        for (int y = 0; y < ordnung+2; y++)
        {
            if(y == 0){
                printf("%d ", x-2);
                continue;
            }else if (y == 1)
            {
                printf("| ");
                continue;
            }
            
            printf("%d ", ((x-2)*(y-2))%ordnung);
        }
        printf("\n");
    }
    return 0;
}
