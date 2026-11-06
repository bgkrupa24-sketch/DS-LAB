#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char state[3];
    int rto, unique, i, valid = 1;
    char states[5][3] = {"KA", "TN", "AP", "KL", "MH"};

    printf("Enter vehicle number (Example: KA 01 1234): ");
    scanf("%2s %d %d", state, &rto, &unique);

    for (i = 0; i < 2; i++)
    {
        state[i] = toupper(state[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (strcmp(state, states[i]) == 0)
        {
            break;
        }
    }

    if (i == 5)
    {
        printf("Invalid State Code\n");
        valid = 0;
    }

    if (rto < 1 || rto > 99)
    {
        printf("Invalid RTO Code\n");
        valid = 0;
    }

    if (unique < 1 || unique > 9999)
    {
        printf("Invalid Unique Number\n");
        valid = 0;
    }

    if (valid == 1)
    {
        printf("\nVehicle Number is Valid\n");
        printf("State Code: %s\n", state);
        printf("RTO Code: %02d\n", rto);
        printf("Unique Number: %04d\n", unique);
    }
    else
    {
        printf("\nVehicle Number is Invalid\n");
    }

    return 0;
}

