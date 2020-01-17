//Header Guard
#ifndef Puzzle_15_h
#define Puzzle_15_h

void display(int a[4][4]);
void initialize(int a[4][4]);
void shuffle(int *array, int n);
void move(int a[4][4]);
void swap(int *, int *);
int * getTileXY(int a[4][4], int);
int check(int a[4][4]);
#endif //Puzzle_15_h
