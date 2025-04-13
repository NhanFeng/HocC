#include <stdio.h>
   
int main (){
	int n, i , X, count = 0 ; 
	//nhap so phan tu cua day  
	 
	printf("Nhap so phan tu cua day:");
	scanf("%d", &n);
	int a[n]; //khai bao mang co n phan tu
	
	//nhap cac phan tu cua day
	printf("Nhap ca phan tu: "); 
	for(i = 0; i<n; i++ ){
		printf("a[%d]=", i);
		scanf("%d", &a[i]); 
	}
	//Nhap so X can tim
	printf("Nhap so x can tim:");
	scanf("%d", &X);
	
	//dem so lan xuat hien cua x
	for(i=0; i<n; i++){
		if(a[i]== X){
			count++; 
		} 
	} 
	//in ket qua
	if(count>0){
		printf("so %d xuat hien %d lan trong day", X, count) ;
	} 
	else{
		printf("so %d khong xuat hien trong day", X); 
	} return 0; 
} 
