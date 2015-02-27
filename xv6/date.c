#include "types.h"
#include "user.h"
#include "date.h"

int
main(int argc, char *argv[])
{
  struct rtcdate r;
  int fd;

  if (date(&r)) {
    printf(2, "date failed\n");
    exit();
  }

  // your code to print the time in any format you like...
    printf(2, "%dy:%dm:%dd:%dh:%dm:%ds\n", r.year, r.month, r.day, r.hour, r.minute, r.second);
    printf(2, "testing dup2\n");

    fd = dup2(2, 10);
    if (fd!=10)
        printf(2,"!=\n");
    printf(fd, "fd:after dup2\n");
    printf(2, "%d:after dup2\n",fd);

  exit();
}
