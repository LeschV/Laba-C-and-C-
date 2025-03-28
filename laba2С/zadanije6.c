#include <stdio.h>
#include <string.h>
int main()
{
    int in = 0, is = 0;
    printf("What is your name?\n");
    char n[15], s[25];
    scanf("%s %s", &n, &s);
    in = strlen(n);
    is = strlen(s);
    printf("%*d %*d", in, in, is, is);
    return 0;
}