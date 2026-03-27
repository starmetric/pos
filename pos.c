#include<stdio.h>
#include<string.h>


    struct Item {
      char product[10];
      int unit;
      int total;
    };

int main(){

    struct Item item;
    int select;
    int running = 1;


    printf("\tHello, welcome\n\n\tStarmetricshop\n\n[1]Productlist [2]Contactmembership [3]Exit\n");
    printf("select Number : ");
    scanf("%d", &select);

    while (running == 1) {
    if (select == 1) {
        printf("\n\n\tProduct\negg / 6THB/1item.unit\npork / 46THB/100g\nfish / 28THB/100g\nduck / 68THB/100g\n");
          printf("Select Product = ");
          scanf("%7s", item.product);
          if (strcmp(item.product, "egg")== 0) {
              printf("Required Quantity (item.unit) = ");
              scanf("%d", &item.unit);
              item.total = item.unit * 6;
              printf("Total %s = %d THB\n", item.product, item.total);
          }else if (strcmp(item.product, "pork")== 0) {
              printf("Required Quantity (g) = ");
              scanf("%d", &item.unit);
              item.total = (item.unit * 46) / 100;
              printf("Total %s = %d THB\n", item.product, item.total);
          }else if (strcmp(item.product, "fish")== 0) {
              printf("Required Quantity (g) = ");
              scanf("%d", &item.unit);
              item.total = (item.unit * 28) / 100;
              printf("Total %s = %d THB\n", item.product, item.total);
          }else if (strcmp(item.product, "duck")== 0) {
              printf("Required Quantity (g) = ");
              scanf("%d", &item.unit);
              item.total = (item.unit * 68) / 100;
              printf("Total %s = %d THB\n", item.product, item.total);
          }    
    }else if (select == 2) {
        printf("\n\n[1]Contact [2]Membership\n");
    }else 
        printf("Incorrect information. Please re-enter.\n");
    }

    
    return 0;
}
