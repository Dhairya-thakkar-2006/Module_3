/**
 * C program to calculate total electricity bill
 */

#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("\n\n\tEnter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 50*0.50 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 50*0.50 + 100*0.75 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 50*0.50 + 100*0.75 + 100*1.20 + ((unit-250) * 1.50);
    }

    /*
     * Calculate total electricity bill
     * after adding surcharge
     */
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;


    printf("\n\n\tElectricity Bill = Rs. %.2f + Rs. %.2f = Rs. %.2f",amt,sur_charge, total_amt);

    return 0;
}
