#include <stdio.h>
#include <math.h>
#define maxitem 5
#define maxweight 20
int min(int a, int b)
{
    return (a < b) ? a : b;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapSack(int weights[], int values[], int selected_bool[])
{

    int mat[maxitem + 1][maxweight + 1];

    for (int i = 0; i <= maxitem; i++)
    {
        for (int j = 0; j <= maxweight; j++)
        {
            if (i == 0 || j == 0)
            {
                mat[i][j] = 0;
            }
            else if (weights[i-1] <= j)
            {
                mat[i][j] = max(mat[i - 1][j], mat[i - 1][j - weights[i - 1]] + values[i - 1]);
            }
            else
            {
                mat[i][j] = mat[i - 1][j];
            }
        }
    }
    int j = maxweight;
    int i = maxitem- 1;
    int maxvalue = 0;
    while (i >= 0 && j > 0)
    {
        if (mat[i][j] < values[i] + mat[i][j - weights[i]])
        {
            selected_bool[i] = 1;
            j = j - weights[i];
            maxvalue =  maxvalue + values[i];
        }
        i--;
    }
    return maxvalue;
}
int main()
{
    int selected_bool[maxitem];
    char names[maxitem];
    int values[maxitem];
    int weights[maxitem];
    for (int i = 0; i < maxitem; i++)
    {
        printf("name of the item");
        scanf("%c", &names[i]);
        printf("value of the item");
        scanf("%d", &values[i]);
        printf("weight of the item");
        scanf("%d", &weights[i]);
    }
    printf("Maximum profit: ");
    printf("%d",knapSack(weights,values,selected_bool));
    printf("\nSelected items:");
    for(int i = 0; i < maxitem; i++)
    {
        if(selected_bool[i] == 1)
        {
            printf(" %c",names[i]);
        }
    }
    return 0;
}
