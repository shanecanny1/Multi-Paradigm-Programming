#include <stdio.h>
#include <string.h>

struct Customer {
    char* name;
    double budget;
};

struct Product {
    char*name;
    double price;

};
int main(void)
{

    struct Customer Shane = {"Shane", 100.0};
    printf("Customer name is %s\n", Shane.name);
    printf("Customer budget is %.2f\n", Shane.budget);

    struct Product soda={"can of Coke", 1.30};
    printf("The product is a %s\n", soda.name);
    printf("The %s costs %.2f",soda.name,soda.price);
    return 0;
}
