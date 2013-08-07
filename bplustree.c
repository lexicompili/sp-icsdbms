#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int Menu(){
	int count;
	printf("\nMenu");
	printf("\n[1]Insert");
	printf("\n[2]Delete");
	printf("\n[3]Delete Tree");
	printf("\n[4]Print Tree");
	printf("\n[5]Exit");
	scanf("%d",&count);
	return count;
}

int choice(){
	int choice;
	printf("Enter Value: ");
	scanf("%d",&choice);
	return choice;	
}


main(){
	node *root;
	int count,val;
	root = NULL;
		
	do{
	count=Menu();	
	switch(count){
	case 1: printf("\nInsert into Tree");		
			val=choice();
			root=insert_tree(root,val,val);	
			print_tree(root);
			break;
	case 5: printf("Exit");
			break;
	default:printf("Not in the choices");	
			break;
	}
	}while(count!=5);	

}
