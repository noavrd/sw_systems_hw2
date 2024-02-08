#include <stdio.h>
#include <my_mat.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

void fill_the_mat(int mat[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    floydWarshall(mat);
}

void floydWarshall(int mat[10][10])
{
    for (int k = 0; k < 10; k++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i != k)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (j != k)
                    {
                        if (i != j && mat[i][k] != 0 && mat[k][j] != 0)
                        {
                            int path = mat[i][k] + mat[k][j];

                            if (mat[i][j] == 0)
                            {
                                mat[i][j] = path;
                            }
                            else
                            {
                                mat[i][j] = min(mat[i][j], path);
                            }
                        }
                    }
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
