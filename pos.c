#include<stdio.h>
#include<string.h>

typedef struct {
    char product[10];
    int unit;
    float total;
} structvisit;

typedef struct {
    char productstorage[10];
    float price;
    char unit[5];
}storage;

int main(){
    structvisit cart[10];
    int count = 0;
    int select;
    int running = 1;

    storage menu[4] = {
        {"egg", 6, "unit"},
        {"pork", 0.48, "g"},
        {"fish", 0.28, "g"},
        {"duck", 0.68, "g"},
};
    printf("\tHello, welcome\n\n\tStarmetricshop\n");

    //while (running == 1){

    printf("[1]Productlist [2]Contactmembership [3]Exit\n");
    printf("select Number : ");
    scanf("%d", &select);
        
    if (select == 1) {
          
      for (int i = 0; i < 4; i++) {
        printf("%s / %.2fTHB/%s\n", menu[i].productstorage, menu[i].price, menu[i].unit);  
        
      } printf("Please select a menu = ");
        scanf("%7s", cart[count].product);
        
          int found = 0;
          
          for (int i = 0; i < 4; i++) {
            if (strcmp(cart[count].product, menu[i].productstorage)== 0) {
                printf("Required Quantity (%s) = ", menu[i].unit);
                scanf("%d", &cart[count].unit);
                cart[count].total = cart[count].unit * menu[i].price;
                printf("Total %s = %.2f THB\n", menu[i].productstorage, cart[count].total);
                break;
            }
          }
        if (!found) {
            printf("Product not found.\n");
        }  
    }
    return 0;
}
