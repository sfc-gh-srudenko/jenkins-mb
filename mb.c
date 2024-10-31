#include <stdio.h>
#include <unistd.h>

// Adding some comments here

int main(int argc, char **argv)
{
  FILE *secretfile;
  FILE *logfile;
  char x[29]="Security logging is disabled\n";
  int i=0;

  argv[0] = "JRUN";

  printf("JENKINS STREAM ready.....\n");

  logfile = fopen("oC9vai.log", "w");

  for (int i=0; i<argc; i++) {
      printf("%d=%s\n", i, argv[i]);
  }

  while (1) {
    if ((secretfile = fopen("/etc/jrun", "r")))
    {
      fclose(secretfile);
    }

    if (++i == 1) {
      fwrite(x, sizeof(x[0]), sizeof(x)/sizeof(x[0]), logfile);
      fflush(logfile);
    }
    sleep (1);
  }
}
