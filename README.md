# Lucky-Number-Guess-Game

- The game will be played by Player 1 and Player 2.
- At the beginning of the game, your program will generate a random number between 1-1000.
- Player 1 and the Player 2 guess input untill there is a correct guess. If there is a negative guess number, print the messaage “There is an invalid guess! Try again."
- In our loop, we called a function called void checkGuess which should do three objectives:
1. Calculation & printing of the Player 1’s and Player 2’s guess proximities to the lucky
number. Display the message “Proximity of Player 1’s guess to the lucky number is:
X” where X is the proximity value.

2. Checks if either one of these players or both guessed the number correctly.

3. If there is a correct guess, change the flag value to 1 and return it.
Display the message “Player n has guessed the number correctly.” where n
represents either 1 or 2 for Player 1 and Player 2 respectively.

4. Update the scores of Player 1 and Player 2. Whoever makes the closest guess to the
lucky number is printed as a message “Player n’s guess is the closest to the lucky
number.” And their scores are returned as increased by one.
If both the players make the same guess they both get +1 points. Print a
message to show their guesses are the same.
Guessing the lucky number itself is also grants +1 points

- At the end,the message showing both the final scores of Player 1 and Player 2.
After displaying the scores, program ends.
