#include <stdio.h>

	int tong(int num1, int num2){
	return num1+num2;
	}
	int hieu( int num1, int num2){
	return num1-num2;
	}
	int tich( int num1, int num2){	
	return num1*num2;
	}
	float thuong( int num1, int num2){
	return num1/num2;
	}


int main(int argc , char * argv []) {
	int num1,num2,tinh;
	printf (" Nhap 2 so \n ");
	printf(" So thu nhat : ");
	scanf ("%d", &num1);
	printf(" So thu hai : ");
	scanf("%d", &num2);
	
	
	printf(" Phep Tinh : \n");
	printf(" =============\n");
	printf(" 1. Tong \n");
	printf(" 2. Hieu \n");
	printf(" 3. Tich \n");
	printf(" 4. Thuong \n");
	printf(" 5. Thoat \n");
	printf(" Ban muon thuc hien phep tinh : ");
	scanf("%d",&tinh);
	
	
		switch(tinh){
			case 1:
				printf (" Tong 2 so = %d",tong(num1,num2));
				break;
			
			case 2:
				printf (" Hieu 2 so = %d ", hieu(num1,num2));
				break;
		
			case 3:
				printf (" Tich 2 so = %d  ", tich(num1,num2));
				break;	
				
			case 4:
				printf (" Thuong 2 so = %f ", thuong(num1,num2));
				break;
			
			
			case 5:
				printf(" Thoat \n");
				printf(" Tam biet ! ");
				break;
					
			default:
				printf (" Phep tinh khong hop le ");
	}
		


}
