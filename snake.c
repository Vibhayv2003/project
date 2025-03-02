#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// Game parameters
#define WIDTH 20
#define HEIGHT 20

int gameOver;
int x, y, appleX, appleY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirecton dir;

void setup() {
    gameOver = 
