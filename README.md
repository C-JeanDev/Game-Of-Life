# Game of Life - Raylib Edition

## 📜 Description
This is a **Conway's Game of Life** implementation using **Raylib**. The Game of Life is a famous cellular automaton created by **John Conway**, where cells evolve based on simple rules.

## 🎮 Features
- **Pause and resume simulation**
- **Randomize initial state**
- **Manual cell activation/deactivation**
- **Adjustable simulation speed**
- **Simple and efficient rendering using Raylib**

## 🔬 Rules of Conway's Game of Life

The Game of Life is a **zero-player game** where the evolution of a grid of cells follows simple rules. Each cell can be **alive** or **dead**, and its state in the next generation is determined by its neighbors.

### 📜 Rules:
1. **Underpopulation:** A live cell with **fewer than 2** live neighbors dies.  
2. **Survival:** A live cell with **2 or 3** live neighbors **stays alive**.  
3. **Overpopulation:** A live cell with **more than 3** live neighbors dies.  
4. **Reproduction:** A dead cell with **exactly 3** live neighbors becomes alive.

### 🎯 Key Concepts:
- The game runs on a **grid** (finite or infinite).
- Each step generates a **new state** based on the above rules.
- The process continues indefinitely or until a stable pattern is reached.

### 🔄 Common Patterns:
- **Still Life:** Patterns that don’t change (e.g., Block, Beehive).  
- **Oscillators:** Patterns that cycle through states (e.g., Blinker, Toad).  
- **Spaceships:** Patterns that move across the grid (e.g., Glider, Lightweight Spaceship).

## 🛠 Requirements

- **Raylib** (latest version recommended)
- **C/C++ Compiler** (GCC, Clang, MinGW, etc.)
- **Make** (to use the Makefile)

## 🚀 Installation & Execution

1. Clone the repository:
   ```bash
   git clone https://github.com/C-JeanDev/Game-Of-Life.git
2. Makefile:
     ```bash
     make clean && make && ./game.out

## 🕹️ Controls

- **SPACE** → Pause/Resume simulation   
- **C** → Clear grid  
- **R** -> Randomize Grid  
- **Left Click** → Toggle individual cell state 
- **Up/Down Arrows** → Increase/Decrease simulation speed  
- **ESC** → Exit the game  

## 📸 Screenshots And Videos

### Random Start
![random_gameoflife](https://github.com/user-attachments/assets/59db4a2f-6196-49e2-b3ac-603d246b556a)
### A single Gosper's glider gun creating gliders
![random_gameoflife](https://github.com/user-attachments/assets/ac3b0766-10a6-48b7-b9b3-b06e1790e648)
![Screenshot from 2025-03-30 20-01-43](https://github.com/user-attachments/assets/9e9397a2-4b20-46ec-96b5-a52c615ee7f7)
![Screenshot from 2025-03-30 20-02-00](https://github.com/user-attachments/assets/9db89488-51a9-47e5-b34d-2f19f9cebeb4)



## 📄 License

This project is licensed under the **MIT License**. 
