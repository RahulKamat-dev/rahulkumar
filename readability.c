#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int letter;
int word;
int sentence;


int main(void)
{

    string alp = get_string("What's the article?: ");

    int n = strlen(alp);

    if (isalnum(alp[0]))
    {
        word = 1;
    }

    for (int i = 0; i < n;  i++)
    {
        if (isalnum(alp[i]))
        {
            letter++;
        }

        if (i < n - 1 && isspace(alp[i]) && isalnum(alp[i + 1]))
        {
            word++;
        }

        if (i > 0 && (alp[i] == '!' || alp[i] == '?' || alp[i] == '.') && isalnum(alp[i - 1]))
        {
            sentence++;
        }

    }
    int grade = 0.0588 * (100 * letter / word) - 0.296 * (100 * sentence / word) - 15.8;

    printf("Letters: %i\n Words: %i\n Sentences: %i\n", letter, word, sentence);

    if (grade <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade < 16)
    {
        printf("Grade %i\n", grade);
    }
    else
    {
        printf("Grade 16+\n");
    }
}
