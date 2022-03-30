#include <stdio.h>

#define PRODUCT_TYPE_COUNT 5
#define PRODUCT_COUNT_PER_TYPE 6

typedef enum{
    FRUIT, SNACK, VEGETABLE, MEAT, BREAD
} ProductType;

typedef struct {
    float price;
    int stock;
    int valid;
} Product;

// 1. Add a product
// 2. Remove a product
// 3. Update a product
// 4. Print all products
// 5. Exit
void printMenu() {
    printf("1. Add a product\n");
    printf("2. Remove a product\n");
    printf("3. Update a product\n");
    printf("4. Print all products\n");
    printf("5. Exit\n");
}

void addProduct(Product *products) {
    char productType;
    int stock;
    float price;
    printf("Enter the product type(F, S, V, M, B):");
    scanf(" %c", &productType);
    printf("Enter the stock:");
    scanf("%d", &stock);
    printf("Enter the price:");
    scanf("%f", &price);

    switch (productType)
    {
    case 'F':
        //Fill here for fruits
        break;
    case 'S':
        //Fill here for snacks
        break;
    case 'V':
        //Fill here for vegetables
        break;
    case 'M':
        //Fill here for meat
        break;
    case 'B':
        //Fill here for bread
        break;
    default:
        printf("Invalid product type\n");
        break;
    }
}

void removeProduct(Product *products) {
    char productType;
    int index; 
    printf("Enter the product type(F, S, V, M, B): ");
    scanf(" %c", &productType);
    printf("Enter the product index: ");
    scanf("%d", &index);
    switch (productType)
    {
    case 'F':
        //Fill here for fruits
        break;
    case 'S':
        //Fill here for snacks
        break;
    case 'V':
        //Fill here for vegetables
        break;
    case 'M':
        //Fill here for meat
        break;
    case 'B':
        //Fill here for bread
        break;
    default:
        break;
    }
}

void updateProduct(Product *products) {
    char productType;
    int index;
    float price;
    int stock;
    printf("Enter the product type(F, S, V, M, B): ");
    scanf(" %c", &productType);
    printf("Which product do you want to update: ");
    scanf("%d", &index);
    switch (productType)
    {
    case 'F':
        //Fill here for fruits
        break;
    case 'S':
        //Fill here for snacks
        break;
    case 'V':
        //Fill here for vegetables
        break;
    case 'M':
        //Fill here for meat
        break;
    case 'B':
        //Fill here for bread
        break;
    default:
        break;
    }
}

void printProducts(Product *products) {
    for (int i = 0; i < PRODUCT_TYPE_COUNT; i++)
    {   
        for (int j = 0; j < PRODUCT_COUNT_PER_TYPE; j++)
        {
            switch (i)
            {
            case FRUIT:
                //Fill here for fruits
                break;
            case SNACK:
                //Fill here for snacks
                break;
            case VEGETABLE:
                //Fill here for vegetables
                break;
            case MEAT:
                //Fill here for meat
                break;
            case BREAD:
                //Fill here for bread
                break;
            default:
                break;
            }
        }
        
    }
}

int main() {
    Product products[PRODUCT_TYPE_COUNT][PRODUCT_COUNT_PER_TYPE] = {0};
    int choice;
    do
    {
        printMenu();
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addProduct(&products[0][0]);
            break;
        case 2:
            removeProduct(&products[0][0]);
            break;
        case 3:
            updateProduct(&products[0][0]);
            break;
        case 4:
            printProducts(&products[0][0]);
            break;
        case 5:
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 5);
    
}