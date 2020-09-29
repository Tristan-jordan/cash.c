#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float cash;  
    int cnusd, change, cn25 = 25, cn10 = 10, cn5 = 5, cn1 = 1;
    cnusd = 0;

    do
    cash = get_float("Change owed?: $");
    while (cash < 0);
 
    change = round(cash * 100);
    
    do
    if (change >= 25)
        {
            change = change - cn25;
            cnusd++; 
        }
     while (change >= 25);

    do
    if (change < 25 && change >= 10)
        {
            change = change - cn10;
            cnusd++;

        }
     while (change >= 10);   
     
        if (change >= 5 && change < 10)
        {
            change = change - cn5;
            cnusd++;
        }   

        do
        if (change >= 1 && change < 5)
        {
            change = change - cn1;
            cnusd++;
        }
        while (change >= 1);
    
printf("%d\n", cnusd);
    return(0);
}