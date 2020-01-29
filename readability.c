#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    string str = get_string("Text:");
    int n = strlen(str);
    int i, j, k;
    int letter = 0;
    int word = 0;
    int temp = 0, a = 0;
    int sentence = 0;
    for (i = 0; i < n ; i++)
    {
        int x = str[i];
        if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
        {
            letter++;
        }
        if (x == 32)
        {
            word++;
        }
        if ((x == 46) || (x == 33) || (x == 63))
        {
            sentence = sentence + 1;
        }
    }
    int z = str[n - 1];
    if ((z >= 65 && z <= 90) || (z >= 97 && z <= 122) || (z >= 32 && z <= 34) ||
        (z == 44) || (z == 46) || (z == 58) || (z == 59) || (z == 63))
    {

        a = word + 1;
    }
    float L = (letter * 100) / a;
    float S = (sentence * 100) / a;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int index1 = 0.0588 * L - 0.296 * S - 15.8;
    float temp1 = index - index1;
    if (temp1 >= 0.55)
    {
        index1 = round(index);
    }
    if (index1 < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index1 >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index1);
    }
}