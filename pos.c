#include<stdio.h>
#include<string.h>

typedef struct {
    char product[10];
    float unit;
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
        {"beef", 98, "g"},
        {"pork", 48, "g"},
        {"fish", 28, "g"},
        {"duck", 68, "g"},
};
    printf("\tHello, welcome\n\n\tStarmetricshop\n");

    //while (running == 1){

    printf("[1]Productlist [2]Contactmembership [3]Exit\n");
    printf("select Number : ");
    scanf("%d", &select);
        
    if (select == 1) {

     int found = 0; 
     while (!found) {  
      printf("\n\n--------------Product-------------\n\n");
      for (int i = 0; i < 4; i++) {
        printf("%s / %.2fTHB/%s\n", menu[i].productstorage, menu[i].price, menu[i].unit);  
        
      } printf("Please select a menu = ");
        scanf("%7s", cart[count].product);
        
          for (int i = 0; i < 4; i++) {
            if (strcmp(cart[count].product, menu[i].productstorage)== 0) {
                printf("Required Quantity (%s) = ", menu[i].unit);
                scanf("%f", &cart[count].unit);
                cart[count].total = (cart[count].unit / 100) * menu[i].price;
                printf("Total %s = %.2f THB\n", menu[i].productstorage, cart[count].total);
                break;
            }
          }
        if (!found) {
        }  
     }   
    }
    return 0;
}
