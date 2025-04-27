# 🪐 Rock, Paper, Scissors Game

A simple terminal-based implementation of the classic Rock, Paper, Scissors game, where a player competes against the computer. The game tracks the score over 5 rounds and displays the overall result.

---

## 🛠️ **Technologies Used** 💻

This game uses several technologies to enhance the player experience. Here are the main components used:

- **C Programming Language** 🖥️  
The game is developed in C, making it lightweight and fast.

- **Standard C Libraries** 📚  
  - `stdio.h`: For input and output operations (displaying game data, accepting user input).
  - `stdlib.h`: For generating random numbers (computer’s choice).
  - `time.h`: For initializing the random number generator with a seed.

- **Windows API** 🖥️  
  `windows.h`: For clearing the screen between rounds for a clean user experience.

---

## 🔧 Features ⚡
- **5 Rounds**: Play through 5 rounds and see who wins the most.. 
- **Score Tracking**: The game keeps track of the score after each round.
- **Computer AI**: The computer makes its choice randomly. 
- **Replay Option**: You can choose to play again after the game ends.

---

## ⚙️ How to Play 🎮
1. **Start the Game**: Choose to play after running the game.
2. **Select Your Option**: Choose between Rock (R), Paper (P), or Scissors (S).
3. **Compete Against the Computer**: The computer randomly picks its choice.
4. **Check the Results**: The winner is displayed after each round.
5. **Play Again**: You can choose to replay the game or quit after 5 rounds.

---

## 📸 **Screenshots** 📷

Here are some screenshots showing different stages of the Rock, Paper, Scissors game:

 - 1. **Game Start**  
   Displays the prompt where you choose Rock, Paper, or Scissors.

    ![image](https://github.com/user-attachments/assets/2de8527c-c091-4e9b-877c-d23d975f929a)
 

 - 2. **Game Results**  
   Displays the score after each round and the final Scoreboard after 5 rounds.

    ![image](https://github.com/user-attachments/assets/16c2bddf-1f07-4fc8-8e3a-5df80d984298)


---

## 🚀 How to Run
### Requirements:
- **C Compiler** (e.g., GCC)
  
### Steps:
- 1. **Download the Files**: Ensure you have the source code.
    
- 2. **Compile the Code**:
   ```bash
   gcc RockPaperScissors.c -o rps_game

- 3. **Run the Game**:
   ````bash
   ./rps_game

- 4. **Follow the Prompts**: Choose Rock, Paper, or Scissors, and play the game.

---

## 🧩 **Future Enhancements** 🔮

The current version of Rock, Paper, Scissors includes the basic gameplay. Here are some future enhancements we plan to implement:

 1. **Additional Game Modes** 🎮
   - Add modes like Best of 3 or Tournament style to play multiple sets of rounds.
   
   **Implementation:** Introduce new modes that allow players to play a series of rounds.

 2. **Sound Effects** 🎶
   - Integrate sound effects for each move, win, loss, or draw.

   **Implementation:**  Add sounds that play when you make a move or when a round concludes.

 3. **Graphical User Interface (GUI)** 💻
   - Transition from terminal output to a GUI for a more visually appealing experience.

   **Implementation:** Use libraries like SFML or SDL to build a graphical interface where you can click options instead of typing them.

 4. **Multiplayer Mode** 👫
   - Allow two players to play against each other on the same device.

   **Implementation:** Implement a multiplayer feature where two users can play using different inputs.

 5. **Leaderboards** 🏆
   - Track player statistics, such as number of wins, losses, and draws.

   **Implementation:** Store player stats in a file and display the leaderboard at the end of the game.

---

## 💬 Feedback

Your feedback is valuable to us! If you have any suggestions or encounter issues, feel free to open an issue in the GitHub repository or contact us directly.

Thank you for playing! May the best player win! 🎉
