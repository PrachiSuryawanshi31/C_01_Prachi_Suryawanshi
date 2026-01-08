#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[1000];
    int  characters = 0, words = 0, sentences = 0;
    int vowels = 0, consonants = 0, uppercase = 0, lowercase = 0, punctuation = 0;

    printf("Enter your text (end input with ENTER):\n");
    fgets(text, sizeof(text), stdin);

    int length = strlen(text);

    for (int icnt = 0; icnt < length; icnt++) {
        char ch = text[icnt];

        // Character count (excluding spaces and punctuation)
        if(ch >= 'a' && ch <= 'z' || ch >='A' && ch <='Z')
        {
            characters++;
        }

        // Word count
        if ((ch == ' ' || ch == '\n' || ch == '\t') && icnt != 0 && isalpha(text[icnt - 1])) {
            words++;
        }

        // Sentence count
        if (ch == '.' || ch == '!' || ch == '?') {
            sentences++;
        }

        // Vowel and consonant count
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        // Uppercase and lowercase
        if (isupper(ch))
            uppercase++;
        if (islower(ch))
            lowercase++;

        // Punctuation
        if (ispunct(ch))
            punctuation++;
    }

    // Adjust for last word if not followed by space
    if (isalpha(text[length - 2])) {
        words++;
    }

    printf("\n--- Text Analysis Report ---\n");
    printf("Total Characters (excluding space/punctuations): %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Sentences: %d\n", sentences);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Uppercase Letters: %d\n", uppercase);
    printf("Lowercase Letters: %d\n", lowercase);
    printf("Punctuation Marks: %d\n", punctuation);

    return 0;
}
