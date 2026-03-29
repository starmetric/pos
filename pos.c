#include<stdio.h>
#include<string.h>

typedef struct {
    char product[10];
    int unit;
    int total;
} structvisit;

typedef struct {
    char productstorage[10];
    int price;
    char unit[5];
}storage;

int main(){
    structvisit cart[10];
    int count = 0;
    int select;
    int running = 1;

    storage menu[4] = {
        {"egg", 6, "unit"},
        {"pork", 46, "g"},
        {"fish", 28, "g"},
        {"duck", 68, "g"},
};
    printf("\tHello, welcome\n\n\tStarmetricshop\n");

    while (running == 1){

    printf("[1]Productlist [2]Contactmembership [3]Exit\n");
    printf("select Number : ");
    scanf("%d", &select);

    //if (select == 1) {
    //    if(count == 10) {
    //       printf("cart is full\n");
    //      continue;
    //    }
    for (int i = 0; i < 4; i++)
        printf("%s / %dTHB/%s\n", menu[i].productstorage, menu[i].price, menu[i].unit);

    //}else if (select == 2) {
    //    printf("\n\n[1]Contact [2]Membership\n");
    //
    //}else 
    //    printf("Incorrect information. Please re-enter.\n");
    }

    
    return 0;
}
