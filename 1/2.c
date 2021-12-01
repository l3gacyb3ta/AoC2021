#include <stdio.h>

int main() {

    FILE* file = stdin;

    file = fopen("input.txt", "r");

    int prev_depth = -1, depth, sum = 0, count = 0, pos = 0;
    int depths[3] = {0, 0, 0};
    
    while (fscanf(file, "%i\n", &depth) != EOF)
    {
        if (pos == 3)
        {
            pos = 0;
        }

        sum -= depths[pos];
        sum += depth;
        depths[pos] = depth;
        pos++;

        if (prev_depth == -1)
        {
            if (pos == 3)
            {
                prev_depth = sum;
            }
            continue;
        }

        if (sum > prev_depth)
        {
            count++;
        }
        prev_depth = sum;

    }

    printf("%i", count);
}