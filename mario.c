#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
    
        for (int j = 0; j < 3; j++)
        {
    
        printf("#");
    }
    printf("\n")
    }


    //lab

    #include <cs50.h>
#include <stdio.h>

int draw(int height);

int main(void)
{
    int height:
    printf("height: ");
    scanf("%i", &height);

    draw(height - 1);

}

void draw(int height)
{
    if ((height - 1) != 0)
    {
    draw(height - 1):
    }
    for (int i = 0; i< height; i++)
    {
        print("#");

    }

}