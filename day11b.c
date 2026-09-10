#include <stdio.h>
int main()
{
    printf("enter the cost price of the item");
    float cp;
    scanf("%f", &cp);
    printf("enter the selling price of the item");
    float sp;
    scanf("%f", &sp);
    if(sp > cp)
    {
        printf("profit");
        int profit = sp - cp;
        int profit_percentage = (profit / cp) * 100;
        printf("the profit is: %d", profit);
        printf("the profit percentage is: %d", profit_percentage);
    }
    else if (cp > sp)
    {
        printf("loss");
        int loss = cp - sp;
        int loss_percentage = (loss / cp) * 100;
        printf("the loss is: %d", loss);
        printf("the loss percentage is: %d ", loss_percentage);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}