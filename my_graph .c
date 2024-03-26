#include <stdio.h>
#include "my_mat.h"


int main () 
{
int mat [10][10];
char func;

while (func != 'D'|| func!= EOF) 
{
    scanf("%c", &func);

    if(func== 'A')
    {
        fill_the_mat(mat);
    }

    if(func== 'B')
    {
        is_sortest_path(mat);
    } 

    if(func== 'C')
    {
        sortest_path(mat);
    }

}

return 0;
}
