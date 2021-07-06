#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int width = 20, height = 20, gameOver;
int x, y, fruitX, fruitY, score;
void setup()
{
    gameOver = 0;
    x = width / 2;
    y = width / 2;
label1:
    fruitX = rand() % 20;
    if (fruitX == 0)
    {
        goto label1;
    }
label2:
    fruitY = rand() % 20;
    if (fruitY == 0)
    {
        goto label2;
    }
    return;
}
void draw()
{
    int i, j;
    for (i = 0; i < width; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                printf("*");
            }
            else
            {
                 if (i == x && j == y)
                 {
                     printf("O");
                 }
                else if (i == fruitX && j == fruitY)
                 {
                     printf("F");
                 }
                 else
                 {
                    printf(" ");
                 }
            }
        }
    }
     return;
}
int main()
{
    setup();
    draw();
    
    
    return 0;
}