// C program to build the complete snake game
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // for Sleep function

int i, j, height = 20, width = 20;
int gameover, score;
int x, y, fruitx, fruity, flag;

void setup() {
    gameover = 0;
    x = height / 2;
    y = width / 2;

    do {
        fruitx = rand() % 20;
    } while (fruitx == 0);

    do {
        fruity = rand() % 20;
    } while (fruity == 0);

    score = 0;
}

void draw() {
    system("cls");
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1) {
                printf("#");
            }
            else {
                if (i == x && j == y)
                    printf("0");
                else if (i == fruitx && j == fruity)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    // Print the score after the game ends
    printf("score = %d", score);
    printf("\n");
    printf("press X to quit the game");
}

void input() {
    if (kbhit()) {
        switch (getch()) {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'd':
            flag = 3;
            break;
        case 'w':
            flag = 4;
            break;
        case 'x':
            gameover = 1;
            break;
        }
    }
}

void logic() {
    Sleep(10);  // Sleep for 10 milliseconds

    switch (flag) {
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y++;
        break;
    case 4:
        x--;
        break;
    default:
        break;
    }

    if (x < 0 || x > height || y < 0 || y > width) {
        gameover = 1;
    }

    if (x == fruitx && y == fruity) {
        do {
            fruitx = rand() % 20;
        } while (fruitx == 0);

        do {
            fruity = rand() % 20;
        } while (fruity == 0);

        score += 10;
    }
}

int main() {
    setup();
    while (!gameover) {
        draw();
        input();
        logic();
    }
    return 0;
}
