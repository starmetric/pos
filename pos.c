#include<stdio.h>

int main(){
    
    int select;
    char product[10];

    printf("\tHello, welcome\n\n\tStarmetricshop\n\n[1]Productlist [2]Contactmembership [3]Exit\n");
    printf("selectnumber : ");
    scanf("%d", &select);

    if (select == 1) {
        printf("\n\n\tProduct\nA / 10THB\nB / 25THB\nC / 60THB\n");
          printf("selectProduct = ");
          scanf("%s", product);
    }else if (select == 2) {
        printf("\n\n[1]Contact [2]Membership\n");
    }else 
        printf("Thank you and see you again\n");


    
    return 0;
}
