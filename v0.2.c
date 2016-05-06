/* Pass/Fail counter - v0.2 */

#include <stdio.h>
void passFail(void);
void menu(void);
void ones(void);
void tens(void);
void hundreds(void);

int main(void)
{
    char userInput;

    printf("What would you like to do: (select the number or press 'q' to exit)\n\n");
    printf("1. Start Pass/Fail counter\n");
    printf("2. Start counting single items\n\n");
    printf("You selected: \n");

    while ((userInput = getchar()) != 'q')
    {
        if (userInput == '1')
        {   system("cls");
            passFail();
        }
        else
        {
            system("cls");
            menu();
        }
    }

    return 0;
}

void passFail()
{
    int p = 0;
    int f = 0;
    int t = 0;
    char userInput;

    printf("Was it pass or fail? (type 'y' for YES, 'n' for NO and 'q' to quit):\n\n");
    //userInput = getchar();

    while ((userInput = getchar()) != 'q')
    {
        if (userInput == 'y')
        {
            system("cls"); /* == To clean screen of the console == */
            printf("Was it pass or fail? (type 'y' for YES, 'n' for NO and 'q' to quit):\n\n");
            p++;
            t = p + f;
            printf("Passed Parts: %d\n", p);
            printf("Failed Parts: %d\n", f);
            printf("Total Parts Tested: %d\n\n", t);
        }

        if (userInput == 'n')
        {
            system("cls"); /* == To clean screen of the console == */
            printf("Was it pass or fail? (type 'y' for YES, 'n' for NO and 'q' to quit):\n\n");
            f++;
            t = p + f;
            printf("Passed Parts: %d\n", p);
            printf("Failed Parts: %d\n", f);
            printf("Total Parts Tested: %d\n\n", t);
        }
    }
}

void menu()
{
    char userInput;

    printf("Would you like to count in:\n");
    printf("Ones: type: 1\n");
    printf("Tens: type: 2\n");
    printf("Hundreds type: 3\n");

    if ((userInput = getchar()) == '1')
        ones();
    else
        if ((userInput = getchar()) == '2')
            tens();
        else
            hundreds();
}

void ones()
{
    int total = 0, result = 0;
    char userInput;

    while ((userInput = getchar()) != 'q')
    {
        if ((userInput = getchar()) == 'n')
            {
                system("cls");
                printf("Press 'N' to add next part to the count or 'q' to go to the menu: \n");
                total++;
                result = total * 1;
                printf("Total parts counted: %d\n", result);
            }
    }
    printf("Would you like to go back to the selection menu? (Y/N)");
    if ((userInput = getchar()) == 'y')
    {
        menu();
    }
    else
    {
        ;
    }
}

void tens()
{
    int total = 0, result = 0, input = 0;
    char userInput;

    while ((userInput = getchar()) != 'q')
    {
        //system("cls");
        printf("Press '1' to add next part to the count: ");
        scanf("%d", &input);
        printf("Total parts counted: %d\n", result);
        total++;
        result = total * 10;
    }
}

void hundreds()
{
    int total = 0, result = 0, input = 0;
    char userInput;

    while ((userInput = getchar()) != 'q')
    {
        //system("cls");
        printf("Press '1' to add next part to the count: ");
        scanf("%d", &input);
        printf("Total parts counted: %d\n", result);
        total++;
        result = total * 100;
    }
}




