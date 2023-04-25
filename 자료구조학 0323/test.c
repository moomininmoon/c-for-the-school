
#include <stdio.h>

int interchange (int u, int v); 

int main (void) 
{
  int x =5, y =10;
  printf("Originally  X = %d and Y = %d. \n", x, y);
  
  printf ("NOW X = %d and Y = %d. \n", x, y);

  return 0;
}  
int interchange(int u,int v)
{
    int tmp=u;
    u=v;
    v=tmp;
    return v;
}