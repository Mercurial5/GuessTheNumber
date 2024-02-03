#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MAX_NUMBER = 100;

int main() {
	srand(time(NULL));
	int x = rand() % MAX_NUMBER;
	int guess;
	
	printf("Try to guess a number\n");
  	while (1) {
		  printf("> ");
		  scanf("%d", &guess);
		  if (guess < x) printf("Your number is lower\n");
		  else if (guess > x) printf("Your number is higher\n");
		  else {
			  printf("You guessed the number!\n");
			  break;
		  }
	}
}
