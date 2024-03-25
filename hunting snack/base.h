#include <Windows.h>
#include <iostream>
#include <string.h>
#include <thread>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#pragma once

using namespace std;

#define MAX_SIZE_SNAKE 10
#define MAX_SIZE_FOOD 4
#define MAX_SPEED 3

struct Player {
	int score;
};

extern POINT snake[10]; //snake
extern POINT food[4]; // food
extern int CHAR_LOCK;
extern int MOVING;
extern int SPEED;
extern int HEIGH_CONSOLE, WIDTH_CONSOLE;
extern int FOOD_INDEX;
extern int SIZE_SNAKE;
extern int STATE;

void FixConsoleWindow();
void GotoXY(int x, int y);
bool IsValid(int x, int y);
void GenerateFood();
void ResetData();
void DrawBoard(int x, int y, int width, int height, int curPosX = 0, int curPosY = 0);
void StartGame();
void ExitGame(HANDLE t);
void PauseGame(HANDLE t);
void Eat();
void DrawSnakeAndFood(const char* str);
void CheckSnakeSzie();
void NextLevel();
void ProcessDead();
void MoveRight();
void MoveLeft();
void MoveDown();
void MoveUp();
void ThreadFunc();
void savePlayerData(const string& filename, const Player& player);
void loadPlayerData(const string& filename);
