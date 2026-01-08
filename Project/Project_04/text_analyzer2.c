
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char text[100];
	int charecter=0, uppercase=0, lowercase=0;
	int vowel =0 ,constant =0, sentence=0 , punctuation=0, word=0;


	printf("Enter text : \n");
	fgets(text, sizeof(text), stdin);	/* text == is the buffer (character array) where input will be stored

									sizeof(text) ==equals 100 (size of the array), so it will read up to 99 characters + 1 for \0

									stdin == means input is taken from the keyboard */

	int length = strlen(text);  // it give the length od string 


	for(int icnt =0 ; icnt < length; icnt++)
	{
		char ch = text[icnt];

		 //Total Charecter Count 
		if(ch >= 'A' && ch <= 'Z' || ch >='a' && ch <='z')
		{
			charecter++;
		}

		 //Total Upper Case in given text
		if(ch >='A' && ch <= 'Z')
		{
			uppercase++;
		}

		 //Total Lower Case in given text
		if(ch >='a' && ch <='z')
		{
			lowercase++;
		}

		 //Total Vowels in input text
		if(ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' &&
			ch =='A' || ch =='E' || ch =='I' | ch =='O' || ch =='U')
		{
			vowel++;
		}
		 // Total Constant in input text
		else
		{
			constant++;
		}

		 //Total  Sentence in given input text
		if(ch == '.' || ch == '!' || ch== '?')
		{
			sentence++;
		}

		 //Total Punctuation in input text
		if(ch == '.' || ch == '!' || ch == '?' || ch == ',' || ch == ':' || ch == ';'||
		   ch == '"' || ch == ')' || ch == '(' || ch == '{' || ch == '}' || 
		   ch == ']' || ch == '[' || ch == '/' || 
		   ch == '-' || ch == '_'  || ch == '*' )
		{
			punctuation++;
		}

		 //Total words in given text
		if( ch == ' ' || ch == '\n' || ch == '\t')
		{
			word++;
		}

	}

	printf("\n\n***** Count : *******\n \n");


	printf("Total Charecter : %d\n",charecter);   //total charecter
	printf("Uppercase : %d\n",uppercase);		  //total Uppercase
	printf("Lowercase : %d\n",lowercase);		  //total Lowercase
	printf("Vowel : %d\n",vowel);				  //total Vowel	
	printf("Constant : %d\n",constant);			  //total constant
	printf("Total Word : %d\n",word);			  //total words
	printf("Total Sentance : %d\n",sentence);	  //total sentence
	printf("Total Punctuation: %d\n",punctuation);//total punctuations
	
}
