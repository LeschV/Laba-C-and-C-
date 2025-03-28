#include <stdio.h>
#include <stdlib.h>

typedef struct Node *link;
typedef char elemtype;
typedef struct Node
{
    elemtype elem;
    link next;
} node;

typedef link list;
list lst; /* переменная типа список */

list create(char *s)
{
    link cur;
    list res;
    if (*s == '\0')
        return NULL;
    res = cur = (link)malloc(sizeof(node));
    cur->elem = *s++;
    while (*s != '\0')
    {
        cur = cur->next = (list)malloc(sizeof(node));
        cur->elem = *s++;
    }
    cur->next = NULL;
    return res;
}

void print(list p)
{
    while (p != NULL)
    {
        putchar(p->elem);
        p = p->next;
    }
    putchar('\n');
}

void add_element(elemtype elem, list *lp)
{
    list cur = (list)malloc(sizeof(list));
    cur->elem = elem;
    cur->next = *lp;
    *lp = cur;
}

void free_list(list ls)
{
    link q;
    while (ls != NULL)
    {
        q = ls;
        ls = ls->next;
        free(q);
    }
}

int main()
{
    char buffer[81];
    printf("Input sth(<80):");
    scanf("%s", &buffer);
    printf("\n");
    lst = create(buffer);
    add_element('a', &lst);
    print(lst);
    free_list(lst);
}
