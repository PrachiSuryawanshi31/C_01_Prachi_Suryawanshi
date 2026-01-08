
#include<stdio.h>

int main()
{

	printf("==============================\n\n");
	printf("Wellcome to Basic Quiz App \n");
	printf("==============================\n\n");

	char key;
	char option_choice;
	int score =0;

	printf("Press any key like start or so.. to start quiz app \n");
	scanf("%s",&key);
	

	//Question 1
	printf("Question 1: \n\n");

	printf(" Which loop will run at least once even if the condition is false? \n\n");
	printf("A) while  \n ");
	printf("B) for \n ");
	printf("C) foreach \n");
	printf("D) do while  \n");

	printf("Select option :");
	scanf("%s",&option_choice);

	if(option_choice == 'D' || option_choice == 'd')
	{
		printf("Correct answer ! \n");
		score= score+1;
	}
	else
	{
		printf("Wrong answer  \n correct answer is D.\n");
		score=score+0;

	}
		printf(" \n\n\n");

	//Question 2
	printf("Question 2: \n\n");

	printf("Which of the following functions is used to allocate memory dynamically in C?\n\n");

	printf("A) memallac()\n ");
	printf("B) malloc()\n ");
	printf("C) alloc() \n");
	printf("D) new() \n");

	printf("Select option : ");
	scanf("%s",&option_choice);

	if(option_choice == 'B' || option_choice == 'b')
	{
		printf("Correct answer ! \n");
		score=score+1;

	}
	else
	{
		printf("Wrong answer  \n correct answer is B.\n");
	}

	//Question 3
	printf("Question 3: \n\n");

	printf("Which of the following is  a high-level programming language? \n\n");
	printf("A) Machine code \n ");
	printf("B) Python \n ");
	printf("C) Assembly \n");
	printf("D) Binary \n");

	printf("Select option : ");
	scanf("%s",&option_choice);

	if(option_choice == 'B' || option_choice == 'b')
	{
		printf("Correct answer ! \n");
		score= score+1;
	}
	else
	{
		printf("Wrong answer  \n correct answer is B.\n");
		score=score+0;

	}
		printf(" \n\n\n");

	//Question 4
	printf("Question 4: \n\n");

	printf("Which of the following is a low-level programming language? \n\n");
	printf("A) Python \n ");
	printf("B) Java \n ");
	printf("C) Assembly \n");
	printf("D) C++ \n");

	printf("Select option : ");
	scanf("%s",&option_choice);

	if(option_choice == 'C' || option_choice == 'c')
	{
		printf("Correct answer ! \n");
		score=score+1;

	}
	else
	{
		printf("Wrong answer  \n correct answer is C.\n");
	

	}


	printf(" \n\n\n");

	//Question 5
	printf("Question 5: \n\n");

	printf(" What is the return type of the main() function in C? \n\n");
	printf("A) void \n ");
	printf("B) int \n ");
	printf("C) float \n");
	printf("D) Char \n");

	printf("Select option : ");
	scanf("%s",&option_choice);

	if(option_choice == 'B' || option_choice == 'b')
	{
		printf("Correct answer ! \n");
		score=score+1;

	}
	else
	{
		printf("Wrong answer  \n correct answer is B.\n");
	

	}

	printf("Score is %d / 5 is : \n",score);


	if(score == 1)
	{
		printf(" try to improve... \n");
	}
	else if(score == 2)
	{
		printf(" good...!\n");
	}
	else if(score == 3)
	{
		printf("very good...!\n");
	}
	else if(score == 4)
	{
		printf("Excellent...!");
	}
	else
	{
		printf("Better luck next time ! \n");
	}
	return(0);
}