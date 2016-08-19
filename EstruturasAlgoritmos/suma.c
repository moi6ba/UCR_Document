#include "stdio.h"
#include "stdlib.h"


float suma(int argc, char** argv){
  float Result = 0.0;
  int i;
  puts(argv[1]);
  for (i=1; i < argc; i++) {
    Result = Result + atof(argv[i]);
    printf("--%f\n", Result);
  }
  printf("-%f\n", Result);
  return Result;
}

int main(int argc, char** argv) {
  float Result = suma(argc, argv);
  printf("El resultado de la suma es: %f\n", Result);
  return 0;
}
