#include<stdio.h>

int main(){
    
    int select;
    char product[10];
    char quantity[6];

    printf("\tHello, welcome\n\n\tStarmetricshop\n\n[1]Productlist [2]Contactmembership [3]Exit\n");
    printf("select Number : ");
    scanf("%d", &select);

    if (select == 1) {
        printf("\n\n\tProduct\negg / 6THB/1unit\npork / 46THB/100g\nfish / 28THB/100g\nduck / 68THB/100g\n");
          printf("Select Product = ");
          scanf("%s", product);
          printf("Required Quantity= ");
          scanf("%s", quantity);
    }else if (select == 2) {
        printf("\n\n[1]Contact [2]Membership\n");
    }else 
        printf("Thank you and see you again\n");


    
    return 0;
}
