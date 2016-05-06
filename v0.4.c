/* Pass/Fail counter - v0.3 */

#include <stdio.h>
void passFail(void);
void topMenu(void);
void subMenu(void);
void ones(void);
void tens(void);
void hundreds(void);

/* Main part of the program where functions are being called in */

int main(void)
{
    topMenu();
    //ones();
    //tens();
    //hundreds();

    return 0;
}

/*
 * topMenu part - user selects what he wants to do
 * After each function is finished it will bring user to this menu  *                                                                 *
                                                                    */

void topMenu()
{
    char userInput;

    printf("What would you like to do: (select the number or press 'E' to exit)\n\n");
    printf("1. Start Pass/Fail counter\n");
    printf("2. Start counting single items\n\n");
    printf("You selected: \n");

    while ((userInput = getchar()) != 'e')
    {
        if (userInput == '1')
        {
            system("cls");
            passFail();
        }
        else
        {
            if (userInput == '2')
            {
                system("cls");
                subMenu();
            }
            else
               ;
        }
    }
}

/*
 * passFail function - allows user to count how many parts passed the test,
 * how many has failed and it gives the total of the count  *                                                                 *
                                                            */

void passFail()
{
    int p = 0;
    int f = 0;
    int t = 0;
    char passFailInput;

    printf("                    PASS/FAIL COUNTER\n\n");
    printf("Was it pass or fail? (type 'y' for YES, 'n' for NO and 'q' to quit):\n\n");
    printf("Passed Parts: %d\n", p);
    printf("Failed Parts: %d\n", f);
    printf("Total Parts Tested: %d\n\n", t);

    while ((passFailInput = getchar()) != 'q')
    {
        if (passFailInput == 'y')
        {
            system("cls"); /* == To clean screen of the console == */
            printf("Was it pass or fail? (type 'y' for YES, 'n' for NO and 'q' to quit):\n\n");
            p++;
            t = p + f;
            printf("Passed Parts: %d\n", p);
            printf("Failed Parts: %d\n", f);
            printf("Total Parts Tested: %d\n\n", t);
        }

        if (passFailInput == 'n')
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
    system("cls");
    topMenu();
}

/*
 * subMenu part - used for single items count;
 * user selects if he wants to count in tens, hundreds or thousands;
 * When user presses 'q' function terminates and he is brought back to the sub menu;
 * When subMenu function is terminated it goes back to the topMenu selection screen *                                                                 *
                                                                                     */

void subMenu()
{
    char subMenuUserInput;

    printf("Would you like to count in: (type 'Q' to go to the Top Menu)\n");
    printf("Ones: press 1\n");
    printf("Tens: press 2\n");
    printf("Hundreds press 3\n");

    while ((subMenuUserInput = getchar()) != 'q')
    {
        if (subMenuUserInput == '1')
        {
            system("cls");
            ones();
        }
        else
        {
            if (subMenuUserInput == '2')
            {
                system("cls");
                tens();
            }
            else
            {
                if (subMenuUserInput == '3')
                {
                    system("cls");
                    hundreds();
                }
                else
                {
                    system("cls");
                    subMenu();
                }
            }
        }
    }
    system("cls");
    topMenu();
}

/*
 * ones() function - this is responsible for counting new items in single values;
 * pressing q will bring user to sub menu screen *
                                                 */

void ones()
{
    int total = 0, result = 0;
    char onesInput;

    printf("Press 'N' to add next part to the count or 'Q' to go to the menu: \n");
    printf("Total parts counted: %d\n", result);

    while (onesInput != 'q')
    {
        if ((onesInput = getchar()) == 'n')
        {
            system("cls");
            printf("Press 'N' to add next part to the count or 'Q' to go to the menu: \n");
            total++;
            result = total * 1;
            printf("Total parts counted: %d\n", result);
        }
        else
            ;
    }
    system("cls");
    subMenu();
}

/*
 * tens() function - this is responsible for counting new items in tens;
 * pressing q will bring user to sub menu screen *
                                                 */

void tens()
{
    int total = 0, result = 0;
    char tenInput;

    printf("Press 'N' to add next part to the count or 'Q' to go to the menu: \n");
    printf("Total parts counted: %d\n", result);

    while (tenInput != 'q')
    {
        if ((tenInput = getchar()) == 'n')
        {
            system("cls");
            printf("Press 'N' to add next part to the count or 'Q' to go to the menu: \n");
            total++;
            result = total * 10;
            printf("Total parts counted: %d\n", result);
        }
         else
            ;
    }
    system("cls");
    subMenu();
}

/*
 * hundreds() function - this is responsible for counting new items in hundreds;
 * pressing q will bring user to sub menu screen *
                                                 */

void hundreds()
{
    int total = 0, result = 0;
    char hundredInput;

    printf("Press 'N' to add next part to the count or 'Q' to go to the menu: \n");
    printf("Total parts counted: %d\n", result);

    while (hundredInput != 'q')
    {
        if ((hundredInput = getchar()) == 'n')
        {
            system("cls");
            printf("Press 'N' to add next part to the count or 'Q' to go to the menu: \n");
            total++;
            result = total * 100;
            printf("Total parts counted: %d\n", result);
        }
         else
            ;
    }
    system("cls");
    subMenu();
}




