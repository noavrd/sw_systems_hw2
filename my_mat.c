#include <stdio.h>
#include <my_mat.h>

void fill_the_mat(int mat[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void floydWarshall(int mat[10][10])
{
    int dist[10][10];
    int i, k, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            dist[i][j] = mat[i][j];
        }
    }

    for (k = 0; k < 10; k++)
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    
}

void is_sortest_path(int mat[10][10])
{
    int i;
    int j;
    scanf("%d", &i);
    scanf("%d", &j);

    if (mat[i][j] >= 0 && i != j)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
}

void sortest_path(int mat[10][10])
{
    int i;
    int j;
    scanf("%d", &i);
    scanf("%d", &j);

    if (mat[i][j] == 0)
    {
        printf("%d", -1);
    }
    else
    {
        printf("%d", mat[i][j]);
    }
}
