//Temprature Converter.....

#include<stdio.h>
#include<conio.h>


int main()
{
	float temp;
	char input_temp;
	char output_temp;
	float result;

	printf("\n -_-_- ************ -_-_- \n\n");
	
	printf("Enter Input Temperature Unit:--- \n c as Celsius \n f as Fahrenheit \n k as Kelvin\n ");
	printf("\n\n");
	
	printf("Enter Output Temperature Unit :--- \n c as Celsius \n f as Fahrenheit \n k as Kelvin\n ");
	printf("\n\n");

	printf("\n -_-_- ************ -_-_- \n \n");


	printf("Enter Temperature : \n");
	scanf("%f",&temp);

	printf("Enter Input Temperature Unit : \n");
	scanf(" %c",&input_temp);

	printf("Enter Output Temperature Unit : \n");
	scanf(" %c",&output_temp);


	if(input_temp == output_temp)
	{
		result =temp;
	}

	else if((input_temp == 'c' || input_temp == 'C') && (output_temp == 'f' || output_temp == 'F'))
	{
		 result = temp* 9/5 + 32;
	}

	else if((input_temp == 'f' || input_temp == 'F') && (output_temp == 'c' || output_temp == 'C'))
	{
		result= (temp -32) * 5/9;
	}

	else if((input_temp == 'c' || input_temp == 'C') && (output_temp == 'k' || output_temp =='K'))
	{
		result = temp + 273.15; 
	}

	else if((input_temp == 'k' || input_temp == 'K') && (output_temp == 'c' || output_temp == 'C'))
	{
		result = temp - 273.15;
	}
	
	else if((input_temp == 'f'|| input_temp == 'F') && (output_temp == 'k' || output_temp == 'K'))
	{
		result = (temp - 32) * 5/9 +273.15;
	}
	
	else if((input_temp == 'k' || input_temp == 'K') && (output_temp == 'f' || output_temp =='F'))
	{
		result = (temp - 273.15) * 9/5 +32;
	}

	else
	{
		printf("This is Not Temperature  units");
	}

	printf("Temperature is=%2.f %c  \n",temp,input_temp);

	printf("result is =%2.f %c \n",result , output_temp);

	return(0);
}