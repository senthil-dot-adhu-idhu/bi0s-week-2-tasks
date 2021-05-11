#include <stdio.h>
int main()
{
  char message[100],key;
  printf(" Enter message to Encrypt : ");
  gets(message);
  printf(" Enter key : ");
  scanf("%c",&key);
  for(int i=0; message[i]!='\0'; i++)
  {
    message[i]=message[i]^key;
    printf("%c",message[i]);
  }
  return 0;
}