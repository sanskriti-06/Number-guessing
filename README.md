# **Number Guessing Game**
## **Overview**
This project is a simple **C-based Number Guessing Game** where the user tries to guess a randomly generated number between **1 and 100**. The program provides hints, tracks attempts, and congratulates the user upon success.

## **Prerequisites**
Ensure you have:
- **A C compiler** (e.g., GCC)
- **Basic knowledge of running C programs**

## **Installation & Execution**
1. **Clone the repository**:
   ```sh
   git clone https://github.com/your-repo/number-guessing-game.git
   cd number-guessing-game
   ```
2. **Compile the code**:
   ```sh
   gcc guessing_game.c -o guessing_game
   ```
3. **Run the game**:
   ```sh
   ./guessing_game
   ```

## **How It Works**
- The program generates a **random number** between **1 and 100**.
- The user is prompted to guess the number.
- The program provides hints (**too high or too low**) until the correct guess.
- The game keeps track of the number of attempts.

## **Example Output**
```
Welcome to the Number Guessing Game!
Guess the number between 1 to 100: 50
Your guess is quite low
Guess the number between 1 to 100: 75
Your guess is quite high
Guess the number between 1 to 100: 62
Congrats! You got it in 3 attempts
```

## **Future Enhancements**
- Implement **difficulty levels** (Easy, Medium, Hard)
- Allow **multiple rounds** with score tracking
- Convert it into a **GUI-based game** for better user experience

## **License**
This project is open-source and free to use. Contributions and improvements are welcome!
