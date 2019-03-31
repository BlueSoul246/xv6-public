#include "types.h"
#include "stat.h"
#include "user.h"

int main(void)
{
  printf(1, "Read() was called: %d time(s).\n", getreadcount());
  exit();
}
