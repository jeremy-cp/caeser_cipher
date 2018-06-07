 #include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// ---------------------- DO NOT MODIFY THIS SECTION --------------------------------
#define MAX_PGRAPH_LENGTH 100
#define MAX_WORD_LENGHT 20

int main(void) {
	// definitions
	char plaintext[MAX_PGRAPH_LENGTH] = "";
	char ciphertext[MAX_PGRAPH_LENGTH];
	char input[MAX_WORD_LENGHT];

	// read the key
	int key;
	scanf("Key: %d, ", &key);

	// read text
	scanf("Input: ");
	while (true)
	{
		scanf("%s", input);
		if (strlen(plaintext) + strlen(input) + 1 > MAX_PGRAPH_LENGTH)
			break;

		strcat(plaintext, input);
		strcat(plaintext, " ");
	}
	plaintext[strlen(plaintext) - 1] = '\0';
// ---------------------- -----------------------------------------------------------
   int keyCpy = key;

   while(keyCpy > 26){
      keyCpy -= 26;
   }


   char plaintextCpy[MAX_PGRAPH_LENGTH];

   for(int i = 0; i < MAX_PGRAPH_LENGTH; i++){
      plaintextCpy[i] = plaintext[i];

   if(isalpha(plaintext[i])){

      if(islower(plaintextCpy[i])){
         plaintextCpy[i] = toupper(plaintextCpy[i]);

         if(plaintextCpy[i] >= 'A' && plaintextCpy[i] <= 'Z'){
            ciphertext[i] = plaintextCpy[i] + keyCpy;

            if(ciphertext[i] > 'Z'){
               ciphertext[i] = ciphertext[i] - 'Z' + 'A' - 1;
            }
         }
         ciphertext[i] = tolower(ciphertext[i]);
      }
      else if(isupper(plaintextCpy[i])){
         if(plaintextCpy[i] >= 'A' && plaintextCpy[i] <= 'Z'){
            ciphertext[i] = plaintextCpy[i] + keyCpy;

            if(ciphertext[i] > 'Z'){
               ciphertext[i] = ciphertext[i] - 'Z' + 'A' - 1;
            }
         }
      }

   }
   else{
    ciphertext[i] = plaintext[i];
   }

   //ciphertext[i] = plaintext[i] + key;
   }

// ---------------------- DO NOT MODIFY THIS SECTION --------------------------------
	printf("   Key: %d\n", key);
	printf(" Input: %s\n", plaintext);
	printf("Output: %s\n", ciphertext);
// ---------------------- -----------------------------------------------------------
}
