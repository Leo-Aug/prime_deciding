#include <stdio.h>
#include <math.h>
int decide_prime(int input);

int main(void)
{
    if(decide_prime(11))
        printf("00000");
    return 0;
}

int decide_prime(int input)
{
    double medium;
    int i;
    int flag = 1;
    medium = sqrt(input);
    for(i = 2;i <= medium;i++)
    {
        if(input % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}