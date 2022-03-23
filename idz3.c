#include <stdio.h>

int main()
{
    char line[75];
    int n = 1, e = 0;
    FILE* in = fopen("input.txt", "r");
    fgets(line, 75, in);
    for (int i = 0; line[i]; ++i) {
        if ((line[i] != ' ') && (line[i] != '\n')) {
            ++e;
        }
    }
    while (fgets(line, 75, in)) {
        ++n;
    }
    if (e > ((n - 1) * (n - 2) / 2)) {
        printf("This is a connected graph");
    }
    else {
        printf("This is a disconnected graph");
    }
    fclose(in);
    return 0;
}
