#include <cstdio>

int main (int argc, char *argv[])
{
    const char *s;

    if (argc < 2) {
        s = "Hello, world!";
    } else {
        s = argv[1];
    }

    fprintf(stdout,"%s\n", s);

    return 0;
}
