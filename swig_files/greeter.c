#include "greeter.h"
#include <stdio.h>
#include <stdlib.h>

char* scan() {
    char * str=(char*)malloc(sizeof(char)*25);
    scanf("%s",str);
    return str;
}
