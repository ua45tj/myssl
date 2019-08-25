#include "mycurl.h"
#include <stdio.h>

int main()
{
  printf("myapp is running...\n");
  mycurl_set_option("option111", "value111");
  mycurl_perform(4444);
  return 0;
}
