#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#pragma pack(1)	//Toi uu hoa --> khong them byte rac giua cac ki tu
typedef struct{
	int product_id;
	char product_name[50];
	float price;
	int quantity;
}Product;

void writeProducts(const char *filename, int numProducts);
void appendProducts(const char *filename, int numProducts);
void readProducts(const char *filename);
void modifyProduct(const char *filename);

int main() {
	const char *filename = "products.bin";
	int choice, numProducts;

	do {
		printf("\n -- Product Management System -- \n");
		printf("1. Write Products\n");
		printf("2. Append Products\n");
		printf("3. Read Products\n");
		printf("4. Modify Product\n");
		printf("5. Exit\n");
		
		printf("Enter your choice: ");
		
		int check = scanf("%d", &choice);
		if(check != 1)
		{
			printf("Invalid option!\n");
			while(getchar() != '\n');
			choice = -1;
			continue;
		}
		
		switch (choice) {
		case 1:
			printf("Enter the number of products to write: ");
			while(scanf("%d", &numProducts) != 1)
			{
				printf("Invalid!\nEnter number of products: ");
				while(getchar() != '\n');
			}
			writeProducts(filename, numProducts);
			break;
		case 2:
			printf("Enter the number of products to append: ");
			while(scanf("%d", &numProducts) != 1)
			{
				printf("Invalid!\nEnter number of products: ");
				while(getchar() != '\n');
			}
			appendProducts(filename, numProducts);
			break;
		case 3:
			readProducts(filename);
			break;
		case 4:
			modifyProduct(filename);
			break;
		case 5:
			printf("Exiting ... \n");
			break;
        default:
			printf("Invalid choice. Please try again. \n");
		}
	}while(choice != 5);
	return 0;
}

//Ham ghi san pham moi
void writeProducts(const char *filename, int numProducts)
{
	 FILE *fp = fopen(filename, "wb");
	
	if(filename == NULL) {
    	printf("ERROR!\n");
    	return;
	}
	
	
	Product p;
	for(int i = 0; i < numProducts; i++)
	{
		memset(&p, 0, sizeof(Product)); //Xoa struct ve 0 --> xoa ki tu rac
		
		printf("\nProduct %d:\n", i+1);
		printf("ID: ");
		scanf("%d", &p.product_id);
		while(getchar() != '\n');
		
		printf("Name: ");
		fgets(p.product_name, sizeof(p.product_name), stdin);
		p.product_name[strcspn(p.product_name, "\n")] = '\0';
		
		printf("Price: ");
		scanf("%f", &p.price);
		while(getchar() != '\n');
		
		printf("Quantity: ");
		scanf("%d", &p.quantity);
		while(getchar() != '\n');
		
		fwrite(&p, sizeof(Product), 1, fp);	//Ghi du vao file
	}
	fclose(fp);
	printf("Products have been written to the file successfully.\n");
}

//Ham them san pham
void appendProducts(const char *filename, int numProducts)
{
	 FILE *fp = fopen(filename, "ab");
	
	if(filename == NULL) {
    	printf("ERROR!\n");
    	return;
	}
	
	Product p;
	for(int i = 0; i < numProducts; i++)
	{
		memset(&p, 0, sizeof(Product));
		
		printf("\nProduct %d:\n", i+1);
		printf("ID: ");
		scanf("%d", &p.product_id);
		while(getchar() != '\n');
		
		printf("Name: ");
		fgets(p.product_name, sizeof(p.product_name), stdin);
		p.product_name[strcspn(p.product_name, "\n")] = '\0';
		
		printf("Price: ");
		scanf("%f", &p.price);
		while(getchar() != '\n');
		
		printf("Quantity: ");
		scanf("%d", &p.quantity);
		while(getchar() != '\n');
		
		fwrite(&p, sizeof(Product), 1, fp);
	}	
	
	fclose(fp);
	printf("Products have been appended to the file successfully.\n");
}

//Ham doc san pham
void readProducts(const char *filename)
{
	FILE *fp = fopen(filename, "rb");
	
	if(filename == NULL) {
    	printf("ERROR!\n");
    	return;
	}
	Product p;

    printf("\n-------------------------------------------------------------\n");
    printf("%-20s %-20s %-10s %-10s\n","Product ID", "Product Name", "Price", "Quantity");
    printf("-------------------------------------------------------------\n");

    while(fread(&p, sizeof(Product), 1, fp)) {
        printf("%-20d %-20s %-10.2f %-10d\n", p.product_id, p.product_name, p.price, p.quantity);
    }
    printf("-------------------------------------------------------------\n");

    fclose(fp);
}

//Ham sua doi san pham
void modifyProduct(const char *filename)
{
	FILE *fp = fopen(filename, "rb+");
	if(fp == NULL) {
        printf("File not found!\n");
        return;
    }

    int id, found = 0;
    Product p;

    printf("Enter product ID to modify: ");
    scanf("%d", &id);
    while(getchar() != '\n');

    while(fread(&p, sizeof(Product), 1, fp)) {
        if(p.product_id == id) {
            found = 1;

            printf("Product found. Enter new details: \n");

            printf("New name: ");
            fgets(p.product_name, sizeof(p.product_name), stdin);
			p.product_name[strcspn(p.product_name, "\n")] = '\0';

            printf("New price: ");
            scanf("%f", &p.price);
            while(getchar() != '\n');

            printf("New quantity: ");
            scanf("%d", &p.quantity);
            while(getchar() != '\n');

            //Quay lai vi tri record
            fseek(fp, -sizeof(Product), SEEK_CUR);

            fwrite(&p, sizeof(Product), 1, fp);

            printf("Product updated successfully.\n");
            break;
        }
    }

    if(!found) {
        printf("Product not found!\n");
    }

    fclose(fp);
}