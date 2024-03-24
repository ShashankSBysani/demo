#include<stdio.h>
#include<string.h>
void car_rent()
{
    char car_Brand[10][20]={"HYUNDAI","SUZUKI","HONDA","TOYOTA","FORD","TATA","MERCEDES","AUDI","ISUZU"};//brands available is used to stored in array
    char user_brand[20]; // to store the input of user array is used
	unsigned int days=0;
	int RENT;
	printf("NO OF DAYS YOU WANT TO RENT:");
	scanf("%u",&days);
	printf("BRANDS AVAILABLE");
	printf("\nHYUNDAI','SUZUKI','HONDA',''TOYOTA',''FORD','TATA'',''MERCEDES','AUDI'','ISUZU'");
	printf("\nENTER THE CAR BRAND NAME: ");
	scanf("%s",user_brand);
	int found = 0;
    for(int i = 0; i < 10; i++)
	 {
        if(strcmp(car_Brand[i], user_brand) == 0)
		{
            printf("%s IS AVAILABLE FOR RENT.\n", user_brand);
            printf("PER DAY RENT IS 250");
            found = 1;
            break;
        }
    }
        if (!found) {
        printf("%s IS NOT AVAILABLE FOR RENT.\n", user_brand);
        printf("PLEASE SELECT OTHER CAR BRANDS");
    }
    RENT=days*250;
    printf("\nTOTAL RENT: %d",RENT);
}
void car_return()
{
	printf("car returned.\n");
}
int main()
{
	int x;
	printf("WELCOME TO CAR RENTAL SERVICE\n TO RENT\nPRESS 1\n TO RETURN\nPRESS 2\n ");
	scanf("%d",&x);//'x'Receive The Input From Customer//
	switch(x)
	{
		case 1: 
		car_rent();
			break;
		case 2: 
		car_return();
			break;
		default:
		printf("WRONG CHOICE!! Try again.\n");	
	}

}
