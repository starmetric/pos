#include<stdio.h>
#include<string.h>

typedef struct {
    char product[10];
    int unit;
    int total;
} structvisit;

    
int main(){
    structvisit cart[10];
    int count = 0;
    int select;
    int running = 1;

    while (running == 1){

    printf("\tHello, welcome\n\n\tStarmetricshop\n");
    printf("[1]Productlist [2]Contactmembership [3]Exit\n");
    printf("select Number : ");
    scanf("%d", &select);

    if (select == 1) {
        if(count == 10) {
           printf("cart is full\n");
           continue;
        }
           printf("\n\n\tProduct\negg / 6THB/unit\n");
           printf("pork / 46THB/100g\n");
           printf("fish / 28THB/100g\n");
           printf("duck / 68THB/100g\n");
           printf("Select Product = ");
           scanf("%7s", cart[count].product);
          
        if (strcmp(cart[count].product, "egg")== 0) {
            printf("Required Quantity (unit) = ");
            scanf("%d", &cart[count].unit);
            cart[count].total = cart[count].unit * 6;
            printf("Total %s = %d THB\n", cart[count].product, cart[count].total);
          
        }else if (strcmp(cart[count].product, "pork")== 0) {
            printf("Required Quantity (g) = ");
            scanf("%d", &cart[count].unit);
            cart[count].total = (cart[count].unit * 46) / 100;
            printf("Total %s = %d THB\n", cart[count].product, cart[count].total);
         
        }else if (strcmp(cart[count].product, "fish")== 0) {
            printf("Required Quantity (g) = ");
            scanf("%d", &cart[count].unit);
            cart[count].total = (cart[count].unit * 28) / 100;
            printf("Total %s = %d THB\n", cart[count].product, cart[count].total);
          
        }else if (strcmp(cart[count].product, "duck")== 0) {
            printf("Required Quantity (g) = ");
            scanf("%d", &cart[count].unit);
            cart[count].total = (cart[count].unit * 68) / 100;
            printf("Total %s = %d THB\n", cart[count].product, cart[count].total);
          
        }    
    
    }else if (select == 2) {
        printf("\n\n[1]Contact [2]Membership\n");
    
    }else 
        printf("Incorrect information. Please re-enter.\n");
    }

    
    return 0;
}
