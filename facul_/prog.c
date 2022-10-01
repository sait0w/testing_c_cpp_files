#include <stdio.h>
#include <stdlib.h>

void pause();
void cls();

int main()
{
    char c1 = ' ';
    int n1 = 0;
    cls();
    printf("Insira um caractere: ");
    c1 = getchar();
    printf("%c", c1);

    printf("\n");
 return 0;
}

void cls()
{
  printf("\x1B[2J\x1B[H");
}

void pause()
{
  getchar();
}
