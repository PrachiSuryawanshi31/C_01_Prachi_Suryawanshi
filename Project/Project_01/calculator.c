/*  Calculator Project in C Language...
	
	Operations have the Short names is as bellow
	You want any calculations so you will enter these short names
  
  ***1st Enter which calculator you want to use**

  then you want Normal calculater then you enter 1
       you want Scientific calculator then you enter 2
       you want programmers calculator then you enter  3

	***Normal Calculator

	1.Addition = +
	2.Subtraction = -  
	3.Multiplication = *   
	4. Division = /     
	5. remainder =  %
	6.Square = s      
	7.cube   = c       
	8.fourth_power = f      
	9.fifth_power =P      
	10.percentage = p
	 
	***Scientific Calculator 
	
	1.nth Power = n   
	2.Factorial = F    
	3.Reverse number = r       

	***Programmers Calculator

	1.Decimal To Binary = d      
	2.Bitwise AND = &           
	3.Bitwise OR = |       
	4.Bitwise XOR = ^   
	5.Bitwise Right Shift = >>     
	6.Bitwise Left Shift = <<    
	7. Bitwise Not = ~   
	*/


#include<stdio.h>
#include<math.h>


//Normal Calculator


int add()
{
	int ino1;
	int ino2;

	printf("Enter first number \n");
	scanf("%d",&ino1);

	printf("Enter Second number \n");
	scanf("%d",&ino2);


	int result=ino1+ino2;

	printf("Addition is : %d \n",result);
}


int subsraction()
{
	int ino1;
	int ino2;

	printf("Enter first number \n");
	scanf("%d",&ino1);

	printf("Enter Second number \n");
	scanf("%d",&ino2);


	int result=ino1-ino2;

	printf("Substraction is : %d \n",result);
}

int multiplication()
{
	int ino1;
	int ino2;

	printf("Enter First number :\n");
	scanf("%d",&ino1);

	printf("Enter Second number :\n");
	scanf("%d",&ino2);

	int result =ino1 * ino2;

	printf("Multiplication is : %d \n", result);
}

int division()
{
	int ino1;
	int ino2;

	printf("Enter First number : \n");
	scanf("%d",&ino1);

	printf("Enter Second number :\n");
	scanf("%d",&ino2);

	int result=ino1 / ino2 ;

	printf("Division =%d \n",result);

}

int mode()
{
	int ino1;
	int ino2;

	printf("Enter First number : \n");
	scanf("%d",&ino1);

	printf("Enter Second number :\n");
	scanf("%d",&ino2);

	int result=ino1 % ino2 ;

	printf("Module =%d \n",result);
}


int square()
{
	int ino1;
	

	printf("Enter First number : \n");
	scanf("%d",&ino1);


	int result= ino1 * ino1 ;

	printf("Square =%d \n",result);
}


int cube()
{
	int ino1;

	printf("Enter First number : \n");
	scanf("%d",&ino1);


	int result=ino1 * ino1 * ino1 ;

	printf("Cube =%d \n",result);
}


int fourth_power()
{
	int ino1;

	printf("Enter First number : \n");
	scanf("%d",&ino1);


	int result= ino1 * ino1 * ino1 * ino1 ;

	printf("fourth power =%d \n",result);
}


int fifth_power()
{
	int ino1;

	printf("Enter First number : \n");
	scanf("%d",&ino1);


	int result= ino1 * ino1 * ino1 * ino1 * ino1;

	printf("fifth power =%d \n",result);
}


int persentage()
{
	float obtained_mark,total_marks;

	printf("Enter Your Mark\n");
	scanf("%d",&obtained_mark);

	printf("Enter the Total Marks\n");
	scanf("%d",&total_marks);

	int result = (obtained_mark / total_marks)* 100;

	printf("Percentage :%d\n",result);
}

//Scientific Calculator



int nth_power()
{
	int exponent;
	double base;
	double return_value=1;

	printf("Enter base value : \n");
	scanf("%d",&base);

	printf("Enter exponent : \n");
	scanf("%d",&exponent);

	return_value=pow(base, exponent);

	printf("nth power is =%d\n",return_value);
}


int factorial()
{
	int number;
	int fact=1;

	printf("Enter any number :\n");
	scanf("%d",&number);

	for(int le=1; le<=number; le++)
	{
		fact=fact*le;
	}

	printf("Factorial =%d \n",fact);
}


int reverse_number()
{
	int number;
	int reserved_number=0;

	printf("Enter any number :\n");
	scanf("%d",&number);

	for(int le=0; le<= number; le++)
	{
		reserved_number= reserved_number * 10 + number % 10;
		number=number/10;

	}
	
	printf("reserve number =%d\n",reserved_number);
}


//Programmers Calculators

int bitwise_and()
{
	int first_number;
	int second_number;

	printf("Enter First Number : \n");
	scanf("%d",&first_number);

	printf("Enter Second Number : \n");
	scanf("%d",&second_number);

	printf("Bitwise AND: %d\n", first_number & second_number);

}


int bitwise_or()
{
	int first_number;
	int second_number;

	printf("Enter First Number : \n");
	scanf("%d",&first_number);

	printf("Enter Second Number : \n");
	scanf("%d",&second_number);

	printf("Bitwise OR: %d\n", first_number | second_number);


}

int bitwise_xor()
{
	int first_number;
	int second_number;

	printf("Enter First Number : \n");
	scanf("%d",&first_number);

	printf("Enter Second Number : \n");
	scanf("%d",&second_number);

	printf("Bitwise XOR: %d\n", first_number ^ second_number);


}


int bitwise_rightshift()
{
	int first_number;
	int second_number;

	printf("Enter First Number : \n");
	scanf("%d",&first_number);

	printf("Enter Second Number : \n");
	scanf("%d",&second_number);

	printf("Bitwise Right Shift: %d\n", first_number >> second_number);


}


int bitwise_leftshift()
{
	int first_number;
	int second_number;

	printf("Enter First Number : \n");
	scanf("%d",&first_number);

	printf("Enter Second Number : \n");
	scanf("%d",&second_number);

	
	printf("Bitwise Left Shift: %d\n", first_number << second_number);

}


int bitwise_not()
{
	int first_number;
	int second_number;

	printf("Enter First Number : \n");
	scanf("%d",&first_number);

	
	printf("Bitwise Not: %d\n", ~first_number );

}

int decimal_to_binary()
{

	int number;

	printf("Enter number: \n");
	scanf("%d",&number);

	printf("IN decimal_to_binary :\n");

	 while(number != 0)
    {
        int quotient = number / 2;
        int remainder = number % 2;

        printf("%d", remainder);

        number = quotient;
    }
    	
}


 
int main()
{
/*
	printf("Operations have the Short names is as bellow
	You want any calculations so you will enter these short names:\n");

	printf("***1st Enter which calculator you want to use** \n
		then you want Normal calculater then you enter 1 \n
       you want Scientific calculator then you enter 2  \n
       you want programmers calculator then you enter 3 \n");

	printf("***Normal Calculator:\n
	i.Addition = + \n ii.Subtraction = - \n iii.Multiplication = * \n 4. Division = /  \n 5. remainder =  % \n
	6.Square = s  \n7.cube   = c  \n 8.fourth_power = f \n 9.fifth_power =P  \n 10.percentage = p \n ");

	printf("***Scientific Calculator: \n"	
	"1.nth Power = n \n " "2.Factorial = F \n" " 3.Reverse number = r \n");

	printf(" ***Programmers Calculator :\n"
	"1.Decimal To Binary = d \n "2."Bitwise AND = & \n " "3.Bitwise OR = | \n " "4.Bitwise XOR = ^ \n " "5.Bitwise Right Shift = >> \n"    
	"6.Bitwise Left Shift = << \n" "7. Bitwise Not = ~ \n");
*/

	
	char oper;
	int calculator_type;

	printf("Enter Which calculator you want to use :\n");
	scanf("%d", &calculator_type);

	printf("Enter which operation do you want to perfrom: \n");
	scanf(" %c", &oper);


if(calculator_type ==1)
{

	switch(oper)
	{

	case '+':
		 add();
		break;


	case '-':
		subsraction();
		break;

	case '*':
		multiplication();
		break;

	case '/':
		division();
		break;

	case '%':
		mode();
		break;

	case 's':
		square();
		break;

	case 'c':
		cube();
		break;

	case 'f':
		fourth_power();
		break;

	case 'P':
		fifth_power();
		break;

	case 'p':
		persentage();
		break;
	}
}

else if(calculator_type==2)
{
	switch(oper)
	{

	case 'n':
		nth_power();
		break;

	case 'F':
		factorial();
		break;

	case 'r':
		reverse_number();
		break;

	}
}

else if(calculator_type ==3)
{
	switch(oper)
	{
	case '&':
		bitwise_and();
		break;

	case '|':
		bitwise_or();
		break;

	case '^':
		bitwise_xor();
		break;

	case '>':
		bitwise_rightshift();
		break;

	case '<':
		bitwise_leftshift();
		break;

	case '~':
		bitwise_not();
		break;

	case 'd':
		decimal_to_binary();
		break;
	}

}

}