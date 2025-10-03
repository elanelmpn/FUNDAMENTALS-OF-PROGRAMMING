#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float veg_qty, fruit_qty;
    int milk_qty, soap_qty, shampoo_qty;
    float veg_cost, fruit_cost, milk_cost, soap_cost, shampoo_cost;
    float total, payment, change;
    char again;


    const float VEG_PRICE = 54.5;
    const float MILK_PRICE = 90;
    const float SOAP_PRICE = 29.45;
    const float SHAMPOO_PRICE = 140;

    srand(time(0)); 

    do {

        int fruit_price = 120 + rand() % 31;

       
        printf("Price List:\n");
        printf("Vegetable: P%.2f / kg\n", VEG_PRICE);
        printf("Fruits:    P%d / kg\n", fruit_price);
        printf("Milk:      P%.2f / pack\n", MILK_PRICE);
        printf("Soap:      P%.2f / bar\n", SOAP_PRICE);
        printf("Shampoo:   P%.2f / bottle\n", SHAMPOO_PRICE);
        printf("=====================================\n");


        printf("Enter kg of Vegetables: ");
        scanf("%f", &veg_qty);
        printf("Enter kg of Fruits: ");
        scanf("%f", &fruit_qty);
        printf("Enter packs of Milk: ");
        scanf("%d", &milk_qty);
        printf("Enter bars of Soap: ");
        scanf("%d", &soap_qty);
        printf("Enter bottles of Shampoo: ");
        scanf("%d", &shampoo_qty);

  
        veg_cost = veg_qty * VEG_PRICE;
        fruit_cost = fruit_qty * fruit_price;
        milk_cost = milk_qty * MILK_PRICE;
        soap_cost = soap_qty * SOAP_PRICE;
        shampoo_cost = shampoo_qty * SHAMPOO_PRICE;

 
        total = veg_cost + fruit_cost + milk_cost + soap_cost + shampoo_cost;

        printf("\n=====================================\n");
        printf("              RECEIPT                \n");
        printf("=====================================\n");
        if (veg_qty > 0) printf("Vegetables   %.2f kg   = P%.2f\n", veg_qty, veg_cost);
        if (fruit_qty > 0) printf("Fruits       %.2f kg   = P%.2f\n", fruit_qty, fruit_cost);
        if (milk_qty > 0) printf("Milk         %d pack(s) = P%.2f\n", milk_qty, milk_cost);
        if (soap_qty > 0) printf("Soap         %d bar(s)  = P%.2f\n", soap_qty, soap_cost);
        if (shampoo_qty > 0) printf("Shampoo      %d bottle(s) = P%.2f\n", shampoo_qty, shampoo_cost);
        printf("-------------------------------------\n");
        printf("TOTAL PURCHASE:         P%.2f\n", total);


        printf("Enter your payment: P");
        scanf("%f", &payment);
        change = payment - total;

        if (change < 0) {
            printf("Insufficient payment! You still owe P%.2f\n", -change);
        } else {
            printf("Your change: P%.2f\n", change);
        }

        printf("=====================================\n");
        printf("     THANK YOU FOR SHOPPING!         \n");
        printf("=====================================\n");

       
        printf("\nDo you want to purchase again (Y/N)? ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("\nGoodbye! Have a nice day!\n");
    return 0;
}