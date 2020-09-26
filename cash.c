#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float change, cn25 = 0.25, cn10 = 0.10, cn5 = 0.05, cn1 = 0.01; 
    int cnusd;

    do
    change = get_float("Change owed?: $");
    while (change <= 0.00);

    do
    if (change >= 0.25)
        {
            change = change - cn25;
            cnusd++;          
        }
     while (change >= 0.25);

    do
    if (change < 0.25 && change > 0.10)
        {
            change = change - cn10;
            cnusd++;
        }
     while (change >= 0.10);   
     
        if (change > 0.05 && change < 0.10)
        {
            change = change - cn5;
            cnusd++;
        }   

        do
        if (change >= 0.01 && change < 0.05)
        {
            change = change - cn1;
            cnusd++;
        }
        while (change >= 0.01);
    
printf("%i\n", cnusd);
 
}