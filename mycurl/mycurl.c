#include <myssl.h>
#include <stdio.h>

int mycurl_set_option(const char* key, const char* value)
{
  printf("%s: key=%s, value=%s\n", __func__, key, value);
  return 111;
}

int mycurl_perform(int id)
{
  printf("%s: id=%d\n", __func__, id);
  int result = ssl_func1(id, id);
  return result;
}

