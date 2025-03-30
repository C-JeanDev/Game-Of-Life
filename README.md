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

## 📸 Screenshots

![Screenshot from 2025-03-30 00-58-14](https://github.com/user-attachments/assets/0a2e8303-4f17-43b3-adbc-4f47d31ac971)
![Screenshot from 2025-03-30 01-00-16](https://github.com/user-attachments/assets/d7db886f-9588-41bd-beb3-dde88ed1d25f)
![Screenshot from 2025-03-30 01-00-45](https://github.com/user-attachments/assets/4a0168d7-c736-4ccc-9c43-5aadafe64698)


## 📄 License

This project is licensed under the **MIT License**. 
