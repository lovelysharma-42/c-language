//BY LOVELY SHARMA
// 26 OCTOBER,2021
//PROJECT - guessing number game

/*a program that generates a random number and asks the player to guess it. If the player’s guess is higher than the actual number, the program displays “Enter lower number please.” Similarly, if the user’s guess is too low, the program prints “Enter higher number please.” When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int number,guess_number,no_of_guesses=1;
  srand(time(0));
  //srand() function sets the starting point for producing a series of pseudo-random integers.
  number = rand()%100 + 1; 
  //The rand() function is used in C to generate random numbers in the range [0, RAND_MAX).
  do{
  printf("Guess number between 1 to 100 : \n");
  scanf("%d",&guess_number);
  if(guess_number>number)
  {
  printf("Enter lower number please.\n");
  }
  else if(guess_number<number)
  {
  printf("Enter higher number please.\n");
  }
  else
  {
  printf("You guessed it in %d attempts :\n",no_of_guesses);
  }
  no_of_guesses++;
  }while(guess_number != number);
  
  return 0;
}
