#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    int n = get_int("insert n: ");
    int z = get_int("insert the limit: ");
    int total = 0;
    for (int i = n; i <= z; i++) total += (10*i) -2;
    printf("%i\n",total);
}
