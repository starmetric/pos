#include<stdio.h>
#include<string.h>

int main(){
    
    int select;
    int unit[4];
    int summit;
    char product[10];
    //char quantity[6];

    printf("\tHello, welcome\n\n\tStarmetricshop\n\n[1]Productlist [2]Contactmembership [3]Exit\n");
    printf("select Number : ");
    scanf("%d", &select);

    if (select == 1) {
        printf("\n\n\tProduct\negg / 6THB/1unit\npork / 46THB/100g\nfish / 28THB/100g\nduck / 68THB/100g\n");
          printf("Select Product = ");
          scanf("%7s", product);
          //printf("Required Quantity (6unit,200g) = ");
          //scanf("%s", quantity);
          if (strcmp(product, "egg")== 0) {
              printf("Required Quantity (unit) = ");
              scanf("%d", &unit[0]);
              summit = unit[0] * 6;
              printf("Total %s = %d THB\n", product, summit);
          }else if (strcmp(product, "pork")== 0) {
              printf("Required Quantity (g) = ");
              scanf("%d", &unit[1]);
              summit = (unit[1] * 46) / 100;
              printf("Total %s = %d THB\n", product, summit);
          }else if (strcmp(product, "fish")== 0) {
              printf("Required Quantity (g) = ");
              scanf("%d", &unit[2]);
              summit = (unit[2] * 28) / 100;
              printf("Total %s = %d THB\n", product, summit);
          }else if (strcmp(product, "duck")== 0) {
              printf("Required Quantity (g) = ");
              scanf("%d", &unit[3]);
              summit = (unit[3] * 68) / 100;
              printf("Total %s = %d THB\n", product, summit);
          }    
    }else if (select == 2) {
        printf("\n\n[1]Contact [2]Membership\n");
    }else 
        printf("Thank you and see you again\n");


    
    return 0;
}
