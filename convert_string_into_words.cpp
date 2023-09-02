#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    char sentence[1000]; // Assuming the sentence will not exceed 1000 characters
   
    fgets(sentence, sizeof(sentence), stdin); // Read the input sentence

    // Tokenize the sentence into words
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        printf("%s\n", token); // Print each word
        token = strtok(NULL, " ");
    }

    return 0;
}
