# Ping Pong Game

A simple **Ping Pong game built in C++ using the Raylib library**, featuring a **player vs CPU game mode**. The player controls one paddle while the CPU automatically moves its paddle to follow the ball.

![Ping Pong Game](<img width="790" height="620" alt="Screenshot 2026-09-12 211350" src="https://github.com/user-attachments/assets/2b5de054-f6e0-4bdb-9789-ab17ca653987" />)

## Features

* Player vs CPU gameplay
* CPU-controlled opponent
* Ball movement and bouncing
* Paddle-ball collision detection
* Automatic CPU paddle movement
* Score tracking
* Two-sided game arena
* Center line
* Simple and clean 2D graphics
* Built using C++ and Raylib

## Tech Stack

* **Language:** C++
* **Graphics Library:** Raylib
* **Game Type:** 2D Arcade Game

## Gameplay

The game is played between the **player and a CPU-controlled opponent**.

The player controls the paddle on one side of the screen, while the CPU automatically controls the paddle on the opposite side.

The objective is to hit the ball back toward the opponent and prevent it from passing your paddle.

Whenever the ball passes a paddle, the opposing side receives a point and the ball is reset.

## Controls

### Player

| Key | Action           |
| --- | ---------------- |
| `W` | Move paddle up   |
| `S` | Move paddle down |

The CPU paddle is controlled automatically by the game.

## CPU

The game includes a basic CPU opponent that tracks the position of the ball and moves its paddle accordingly.

The CPU continuously checks the ball's vertical position and adjusts its paddle movement to attempt to intercept the ball.

This provides a single-player experience without requiring a second human player.

## Requirements

* C++ compiler

  * MinGW/G++
  * MSVC
  * or another compatible compiler
* Raylib library
* Windows, Linux, or another Raylib-supported platform

## Installation

### 1. Clone the repository

```bash
git clone https://github.com/Kiwinrar/Ping-Pong-Game.git
cd Ping-Pong-Game
```

### 2. Install Raylib

Download and configure Raylib for your system.

[Raylib Official Website](https://www.raylib.com/?utm_source=chatgpt.com)

### 3. Compile

The compilation command depends on your Raylib installation.

For example, with MinGW on Windows:

```bash
g++ main.cpp -o PingPong.exe -lraylib -lopengl32 -lgdi32 -lwinmm
```

### 4. Run

```bash
PingPong.exe
```

## Project Structure

```text
Ping-Pong-Game/
│
├── main.cpp
├── README.md
└── ...
```

## Game Mechanics

The game implements several fundamental game-development concepts:

* **Game Loop** — continuously updates and renders the game.
* **Player Input** — keyboard input controls the player's paddle.
* **CPU AI** — the CPU follows the ball's position.
* **Ball Physics** — the ball moves continuously and bounces off the arena boundaries.
* **Collision Detection** — collisions between the ball and paddles change the ball's direction.
* **Scoring System** — points are awarded when the ball passes a paddle.
* **Rendering** — Raylib is used to draw the game objects and interface.

## Future Improvements

Possible improvements include:

* Multiple CPU difficulty levels
* Smarter CPU prediction
* Sound effects
* Background music
* Start and pause menus
* Win/loss conditions
* Increasing ball speed
* Particle effects
* Improved graphics and animations
* High-score system
* Player customization

## Learning Objectives

This project was created to practice:

* C++ programming
* Raylib game development
* Game loops
* 2D rendering
* Keyboard input
* Collision detection
* Basic physics
* Score management
* Implementing simple game AI


