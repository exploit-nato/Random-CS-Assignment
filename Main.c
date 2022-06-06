#include <stdio.h>
#include <stdlib.h>
/*
Tasks:
Create a structure named Item with the following attributes: id, name and price.
Write a program where the user is prompt to enter a set of item (store them into an array) and calculate the total cost of the item.
*/
typedef struct {
    int id;
    float price;
    char name[20];
}Item;
//
float calc_sum(Item list[], float n){
    float sum = 0;
    for (int i = 0; i<n; i++) sum += list[i].price;
    return sum;
}
//
void getInput(int num_of_items){
    Item list_of_items[num_of_items];
    for (int i = 0; i<num_of_items; i++){
        printf("Enter values of item with index %d\n", i);
        printf("Enter the value of id:");
        scanf("%d", &list_of_items[i].id);
        printf("Enter the value of name:");
        scanf("%s", list_of_items[i].name);
        printf("Enter the value of price: $");
        scanf("%f", &list_of_items[i].price);
    }
    for (int i = 0; i<num_of_items; i++)
        printf("Id = %d; Name = %s; price = $%.2f\n", list_of_items[i].id, list_of_items[i].name, list_of_items[i].price);
    printf("The sum of price = $%.2f", calc_sum(list_of_items, num_of_items));
}
// 
int main(void) {
    int num_of_items;
    printf("Enter the number of items: ");
    scanf("%d[^\n]", &num_of_items);
    getInput(num_of_items);
}
