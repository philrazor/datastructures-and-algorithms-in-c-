#include <stdio.h>
#include <stdlib.h>

typedef struct  node
{
    int number ;
    struct node *next ;
}node;

int main(int argc , char *argv[])
{
    node *list = NULL ;
    for (int i = 1 ; i <argc ; i++)
    {
        int number = atoi(argv[i]) ;
        printf("%i" , number) ;

        node *newest = malloc(sizeof(node)) ;

        if (newest== NULL)
        {
            return 1;
        }

        newest->number = number ;
        newest->next = NULL ;

        newest->next = list ;
        list = newest ;
    }

    node *ptr = list ;
    while (ptr!=NULL)
    {
        printf("%i" , ptr->number) ;
        ptr = ptr->next ;
    }
    printf("\n");

    ptr = list ;
    while (ptr!=NULL)
    {
        node *next = ptr->next ;
        free(ptr) ;
        ptr = next ;
    }
    

    return 0 ;

}
