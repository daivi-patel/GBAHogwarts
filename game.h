#ifndef GAME_H
#define GAME_H

#include "gba.h"

                    /* TODO: */

            // Create any necessary structs //

typedef struct broom {
	int row;
	int col;
} Broom;

typedef struct bludger {
	int row;
	int col;
} Bludger;

typedef struct snitch {
	int row;
	int col;
} Snitch;

int collided(int row1, int row2, int col1, int col2);

/*
* For example, for a Snake game, one could be:
*
* typedef struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* } Snake;
*
*
* 
*
*
* Example of a struct to hold state machine data:
* 
* typedef struct state {
*   int currentState;
*   int nextState;
* } State
*
*/

#endif
