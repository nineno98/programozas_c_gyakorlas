#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* f;
    char buffer[100];
    f = fopen("data.txt", "r");
    fgets(buffer, 100, f);
    printf("%c", buffer[6]);
    fclose(f);
    return 0;
}