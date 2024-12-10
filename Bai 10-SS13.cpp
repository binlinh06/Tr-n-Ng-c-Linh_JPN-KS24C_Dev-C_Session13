#include<stdio.h>
void Menu();
int case1(int arr[],int size);

int main(){
	int choice;
	int arr[100];
	int size=0;
	do{
	Menu();
	printf("Lua chon cua ban la: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			case1(arr,size);
			break;
		case 2:
			break;
		case 3:
			break;
	}
	}while(choice!=8);
	return 0;
}

void Menu(){
	printf("\n==========MENU==========\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2. In ra gia tri cac phan tu dang quan ly\n");
	printf("3. Thêm mot phan tu vào vi tri chi dinh\n");
	printf("4. Sua mot phan tu o vi tri chi dinh\n");
	printf("5. Xoa mot phan tu o vi tri chi dinh\n");
	printf("6. Sap xep cac phan tu\n");
	printf("7. Tim kiem phan tu nhap vao\n");
	printf("8. Thoat\n");
}

int case1(int arr[],int size){
	printf("Vui long nhap so phan tu: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("So thu %d la:",i+1);
		scanf("%d",arr[i]);
	}
}
