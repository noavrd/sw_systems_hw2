#include <stdio.h>
#include<math.h>
#define maxitem 5;
#define maxweight 20;
int min(int a, int b)
{
    return (a < b) ? a : b;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapSack(int weights[],int values[],int selected_bool[])
{

int mat [maxitem+1][maxweight+1];

for(int i=0;i<=maxitem;i++)
{

}

}
int main()
{
    int names[5];
    int values[5];
    int weights[5];
    for (int i = 0; i < 5; i++)
    {
        printf("name of the item");
        scanf("%s", &names[i]);
        printf("value of the item");
        scanf("%d", &values[i]);
        printf("weight of the item");
        scanf("%d", &weights[i]);
    }


}