#include<stdio.h>
#include<string.h>

typedef struct { char product[10]; float unit; float total;
}structvisit;

typedef struct {char productstorage[10]; float price; char unit[5];
}storage;

int main(){
    structvisit cart[10];
    int count = 0;
    
    int selectmain;

    storage menu[4] = { {"beef", 98, "g"}, {"pork", 48, "g"}, {"fish", 28, "g"}, {"duck", 68, "g"},
    };
    
while (1) {
    printf("\n\n------------------Starmetric-POS-----------------\n\n");
    printf("[1]Productlist [2]Contactmembership [3]Itemscart [4]Exit\n");
    printf("select Number : ");
    scanf("%d", &selectmain);
        
    if (selectmain == 1) {

        int found = 0; 
        while (!found) {  
        printf("\n\n-----------------Product---------------\n\n");
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
                    found = 1;
                    count++;
                    break;
                }
            }
            if (!found) {
                printf("Product not found. Please try again.\n");
            }  
        }
    } else if (selectmain == 2) {
          
          int selectsocial;
          
          printf("\n\n[1]Contact [2]Membership [3]Back\n");
          scanf("%d", &selectsocial);
              if (selectsocial == 1) {
                  printf("\n\nstarmetric@inic.sh\n");
              } else if (selectsocial == 2) {
                  printf("\n\naaabbbccc\n");
              } 
    }else if (selectmain == 3) {
        float grandtotal = 0;
        printf("\n\n---------------Cart---------------\n");
        for (int i = 0; i < count; i++) {
             printf("%d. %s | %.2f g | %.2f THB\n", i + 1, cart[i].product, cart[i].unit, cart[i].total);
             grandtotal += cart[i].total;
        } 
             printf("-----------------------------------\n\n");
             printf("Grand Total = %.2f", grandtotal);
    }
    else {
        printf("Thank you for using the service.\n");
        break;
    }
  }
    return 0;
}
