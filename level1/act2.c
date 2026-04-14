#include <stdio.h>

typedef struct
{
    int units;
    float rate;
    float total_bill;
} ElectricityBill;

ElectricityBill input();
ElectricityBill calculate_bill(ElectricityBill bill);
void output(ElectricityBill bill);

int main()
{
    ElectricityBill bill = input();
    bill = calculate_bill(bill);
    output(bill);
    return 0;
}

ElectricityBill input()
{
    ElectricityBill bill;
    printf("Enter units consumed : ");
    scanf("%d", &bill.units);
    printf("Enter rate per unit  : ");
    scanf("%f", &bill.rate);
    return bill;
}

ElectricityBill calculate_bill(ElectricityBill bill)
{
    if (bill.units < 50)
    {
        bill.total_bill = 0;                          
    }
    else
    {
        bill.total_bill = bill.units * bill.rate;    

        if (bill.units > 100)
        {
            int extra_units = bill.units - 100;
            bill.total_bill += extra_units * 5;       
            printf("High consumption alert! Extra charge applied\n");
        }
    }

    return bill;
}

void output(ElectricityBill bill)
{
    printf("Total bill : Rs %.2f\n", bill.total_bill);
}