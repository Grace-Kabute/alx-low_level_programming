#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LEN 50
/**
* count_word - helper function to count the number of words in a string
*main -  splits a string into words.
* @s: string to evaluate
* Return: number of words
*/


char **strtow(char *str) 
{
	int i = 0;
	int j = 0;
	char **words;

    if (str == NULL || *str == '\0') {
        return NULL;
    }
    
    words = (char**) malloc(sizeof(char*) * (strlen(str)/2 + 1));
    if (words == NULL) {
        return NULL;
    }
    
    while (*str != '\0') {
        while (isspace(*str)) {
            str++;
        }
        if (*str == '\0') {
            break;
        }
      
        words[i] = (char*) malloc(sizeof(char) * (MAX_WORD_LEN+1));
      
        if (words[i] == NULL) 
        {
            while (--i >= 0) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }
        
        while (*str != '\0' && !isspace(*str)) {
            if (j < MAX_WORD_LEN) {
                words[i][j++] = *str;
            }
            str++;
        }
        words[i][j] = '\0';
        i++;
    }
    
    words[i] = NULL;
    return words;
}
