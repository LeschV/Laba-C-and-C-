#include <stdio.h>
int main()
{

    char name[15], sirname[25];

    printf("Enter your name and sirname\n");
    scanf("%s %s", &name, &sirname);
    printf("%s %s", sirname, name);

    return 0;
}
