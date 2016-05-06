#include <stdio.h>

int main(void)
{
    int p = 0;
    int f = 0;
    int t = 0;
    char userInput;
    char pass;
    char fail;

    p = 0;
    f = 0;
    t = 0;
    pass = 'y';
    fail = 'n';

    printf("Was it pass or fail? (type 'y' for YES, 'n' for NO and 'q' to quit):\n\n");
    scanf("%c", &userInput);

    while (userInput != 'q')
    {
        //system("cls"); /* == To clean screen of the console == */

        if (userInput == pass)
        {
            system("cls"); /* == To clean screen of the console == */
            printf("Was it pass or fail? (type 'y' for YES, 'n' for NO and 'q' to quit):\n\n");
            p++;
            t = p + f;
            printf("Passed Parts: %d\n", p);
            printf("Failed Parts: %d\n", f);
            printf("Total Parts Tested: %d\n\n", t);
            //printf("Was it pass or fail? (type 'y' for YES, 'n' for NO and 'q' to quit):\n\n");
        }

        if (userInput == fail)
        {
            system("cls"); /* == To clean screen of the console == */
            printf("Was it pass or fail? (type 'y' for YES, 'n' for NO and 'q' to quit):\n\n");
            f++;
            t = p + f;
            printf("Passed Parts: %d\n", p);
            printf("Failed Parts: %d\n", f);
            printf("Total Parts Tested: %d\n\n", t);
            //printf("Was it pass or fail? (type 'y' for YES, 'n' for NO and 'q' to quit):\n\n");
        }

        scanf("%c", &userInput);
    }

    return 0;
}
