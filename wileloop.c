#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PropertySale {
    int UID;
    char address[100];
    char ZIP[10];
    int size;
    int constructionYear;
    double price;
    struct PropertySale* next;
} PropertySale;

PropertySale* head = NULL;

// Function to insert a new sale
void Sales(int UID, char* address, char* ZIP, int size, int constructionYear, double price) {
    PropertySale* newSale = (PropertySale*)malloc(sizeof(PropertySale));
    newSale->UID = UID;
    strcpy(newSale->address, address);
    strcpy(newSale->ZIP, ZIP);
    newSale->size = size;
    newSale->constructionYear = constructionYear;
    newSale->price = price;
    newSale->next = head;
    head = newSale;
    printf("Sale with UID %d added successfully.\n", UID);
}

// Function to delete an entry based on UID
void Erase(int UID) {
    PropertySale* temp = head;
    PropertySale* prev = NULL;

    while (temp != NULL && temp->UID != UID) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Property with UID %d not found.\n", UID);
        return;
    }

    if (prev == NULL) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    free(temp);
    printf("Property with UID %d deleted successfully.\n", UID);
}

// Function to search for a property by UID
PropertySale* Search(int UID) {
    PropertySale* temp = head;
    while (temp != NULL) {
        if (temp->UID == UID) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

// Function to print one or all properties
void PrintDB(int UID) {
    if (UID == -1) {
        PropertySale* temp = head;
        while (temp != NULL) {
            printf("\nUID: %d\nAddress: %s\nZIP: %s\nSize: %d sqft\nConstruction Year: %d\nPrice: $%.2f\n",
                   temp->UID, temp->address, temp->ZIP, temp->size, temp->constructionYear, temp->price);
            temp = temp->next;
        }
    } else {
        PropertySale* found = Search(UID);
        if (found != NULL) {
            printf("\nUID: %d\nAddress: %s\nZIP: %s\nSize: %d sqft\nConstruction Year: %d\nPrice: $%.2f\n",
                   found->UID, found->address, found->ZIP, found->size, found->constructionYear, found->price);
        } else {
            printf("Property with UID %d not found.\n", UID);
        }
    }
}

// Function to retrieve ZIP code of a flat
void GetZIP(int UID) {
    PropertySale* found = Search(UID);
    if (found != NULL) {
        printf("ZIP Code for UID %d: %s\n", UID, found->ZIP);
    } else {
        printf("Property with UID %d not found.\n", UID);
    }
}

// Function to retrieve sales price of a flat
void GetPrice(int UID) {
    PropertySale* found = Search(UID);
    if (found != NULL) {
        printf("Price for UID %d: $%.2f\n", UID, found->price);
    } else {
        printf("Property with UID %d not found.\n", UID);
    }
}

// Function to count total sales
int SalesCount() {
    int count = 0;
    PropertySale* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to compute the average price of sales
double AveragePrice() {
    if (head == NULL) {
        return 0.0;
    }

    double sum = 0.0;
    int count = 0;
    PropertySale* temp = head;

    while (temp != NULL) {
        sum += temp->price;
        count++;
        temp = temp->next;
    }

    return count == 0 ? 0.0 : sum / count;
}

// Main function
int main() {
    int choice, UID, size, year;
    char address[100], ZIP[10];
    double price;

    while (1) {
        printf("\nReal Estate Sales Database\n");
        printf("1. Insert Sale\n2. Delete Sale\n3. Search Sale\n4. Print Sales\n");
        printf("5. Get ZIP Code\n6. Get Price\n7. Count Sales\n8. Average Price\n9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter UID: ");
                scanf("%d", &UID);
                printf("Enter Address: ");
                scanf(" %[^\n]s", address);
                printf("Enter ZIP Code: ");
                scanf("%s", ZIP);
                printf("Enter Size (sqft): ");
                scanf("%d", &size);
                printf("Enter Construction Year: ");
                scanf("%d", &year);
                printf("Enter Price: ");
                scanf("%lf", &price);
                Sales(UID, address, ZIP, size, year, price);
                break;
            case 2:
                printf("Enter UID to delete: ");
                scanf("%d", &UID);
                Erase(UID);
                break;
            case 3:
                printf("Enter UID to search: ");
                scanf("%d", &UID);
                PropertySale* found = Search(UID);
                if (found) {
                    printf("\nUID: %d\nAddress: %s\nZIP: %s\nSize: %d sqft\nConstruction Year: %d\nPrice: $%.2f\n",
                           found->UID, found->address, found->ZIP, found->size, found->constructionYear, found->price);
                } else {
                    printf("Property with UID %d not found.\n", UID);
                }
                break;
            case 4:
                printf("Enter UID to print (or -1 for all): ");
                scanf("%d", &UID);
                PrintDB(UID);
                break;
            case 5:
                printf("Enter UID to get ZIP Code: ");
                scanf("%d", &UID);
                GetZIP(UID);
                break;
            case 6:
                printf("Enter UID to get Price: ");
                scanf("%d", &UID);
                GetPrice(UID);
                break;
            case 7:
                printf("Total Sales: %d\n", SalesCount());
                break;
            case 8:
                printf("Average Price: $%.2f\n", AveragePrice());
                break;
            case 9:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
