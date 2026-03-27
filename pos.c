#include<stdio.h>
#include<string.h>

int main(){
    
    int select;
    int unit[5];
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
              printf("%s\n%d x 6 = %d THB\n", product, unit[0], summit);
          }else if (strcmp(product, "pork")== 0) {
              printf("Required Quantity (g) = ");
          } 
    }else if (select == 2) {
        printf("\n\n[1]Contact [2]Membership\n");
    }else 
        printf("Thank you and see you again\n");


    
    return 0;
}
