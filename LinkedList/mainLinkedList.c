#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bar(char *arg, char *out)
{
    
    strcpy(out, arg);
    return 0;
}

int foo(char *argv[])
{
    char buf[128];
    return bar(argv[1], buf);
    // buf
    
    // The function foo() is supposed to return an int,
    // but it doesn't
    // It can return bar(arg[1], buf) if it wants to
    // return an int
}

int main(int argc, char *argv[])
{
    // char const *feature_name;
    if (argc != 2)
    {
        fprintf(stderr, "target1: argc != 2\n");
        exit(EXIT_FAILURE);
    }
    foo(argv);
}

