//
//  main.c
//  Traccia 6 - Prova all'impronta Programmazione I
//
//  Created by Roberto Vecchio on 11/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

#include <stdio.h>
#include <string.h>

typedef struct product{
    char *name;
    int code;
    double price;
}product_struct;

//definisco tre struct, due uguali e una diversa per pochi elementi, per testing.

product_struct product_cocacola[] = {
    {"Cocacola original", 12401871, 0.50},
    {"Cocacola lemon", 12401841, 0.80}
};

product_struct product_cocacola_two[] = {
    {"Cocacola original", 12401871, 0.50},
    {"Cocacola lemon", 12401841, 0.80}
};

product_struct product_pepsi[] = {
    {"pepsi original", 12401871, 0.50},
    {"pepsi lemon", 12401841, 0.80}
};

//template funzioni
int isEqual(product_struct *, product_struct *, int);

int main(int argc, const char * argv[]) {
    int isCoc_one_two_equal = isEqual(product_cocacola, product_cocacola_two, 2);
    int isCoc_one_pepsi_equal = isEqual(product_cocacola, product_pepsi, 2);
    
    printf("cocacola uno e due = %d\n", isCoc_one_two_equal);
    printf("cocacola uno e pepsi = %d\n", isCoc_one_pepsi_equal);
    return 0;
}

int isEqual(product_struct *first_product_list, product_struct *second_product_list, int n){
    int equal = 1;
    int i = 0;
    while (equal && i < n) {
        if ( (first_product_list[i].code != second_product_list[i].code) || (first_product_list[i].price != second_product_list[i].price) || ((strcmp(first_product_list[i].name, second_product_list[i].name)) != 0) ) {
            
            equal = 0;
            printf("%d\n", equal);
        }
        i++;
    }
    
    return equal;
}
