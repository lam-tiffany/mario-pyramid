#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);

int main(void)
{
    int height = get_positive_int();
    int space_counter = height - 1;
    int hash_counter = 1;
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < space_counter; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < hash_counter; j++)
        {
            printf("#");
        }
        printf("  ");
        for(int j = 0; j < hash_counter; j++)
        {
            printf("#");
        }
        printf("\n");
        space_counter--;
        hash_counter++;
    }
}

int get_positive_int(void)
{
    int n;
   do
   {
       n = get_int("Height of pyramid: ");
   }
   while(n < 1 || n > 8);
   return n;
}