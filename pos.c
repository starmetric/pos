#include<stdio.h>
#include<string.h>

typedef struct {
    char product[10];
    int unit;
    int total;
} structvisit;

    
int main(){
    structvisit v1;
    int select;
    int running = 1;

    printf("\tHello, welcome\n\n\tStarmetricshop\n\n[1]Productlist [2]Contactmembership [3]Exit\n");
    printf("select Number : ");
    scanf("%d", &select);

    while (running == 1) {
    if (select == 1) {
        printf("\n\n\tProduct\negg / 6THB/1v1.unit\npork / 46THB/100g\nfish / 28THB/100g\nduck / 68THB/100g\n");
          printf("Select Product = ");
          scanf("%7s", v1.product);
          if (strcmp(v1.product, "egg")== 0) {
              printf("Required Quantity (v1.unit) = ");
              scanf("%d", &v1.unit);
              v1.total = v1.unit * 6;
              printf("Total %s = %d THB\n", v1.product, v1.total);
          }else if (strcmp(v1.product, "pork")== 0) {
              printf("Required Quantity (g) = ");
              scanf("%d", &v1.unit);
              v1.total = (v1.unit * 46) / 100;
              printf("Total %s = %d THB\n", v1.product, v1.total);
          }else if (strcmp(v1.product, "fish")== 0) {
              printf("Required Quantity (g) = ");
              scanf("%d", &v1.unit);
              v1.total = (v1.unit * 28) / 100;
              printf("Total %s = %d THB\n", v1.product, v1.total);
          }else if (strcmp(v1.product, "duck")== 0) {
              printf("Required Quantity (g) = ");
              scanf("%d", &v1.unit);
              v1.total = (v1.unit * 68) / 100;
              printf("Total %s = %d THB\n", v1.product, v1.total);
          }    
    }else if (select == 2) {
        printf("\n\n[1]Contact [2]Membership\n");
    }else 
        printf("Incorrect information. Please re-enter.\n");
    }

    
    return 0;
}
