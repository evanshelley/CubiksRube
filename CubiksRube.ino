// Green: 0
// Yellow: 1
// Blue: 2
// White: 3
// Red: 4
// Orange: 5
enum colour{Green,Yellow,Blue,White,Red,Orange}

/*
 *    [4]   
 *    [3]
 * [5][2][6]
 *    [1]
 *
 *  [ 0 1 2 ]
 *  [ 3 4 5 ]
 *  [ 6 7 8 ]
 */
#define NUM_FACES_PER_CUBE 6
struct cube {
    struct cubeface faces[NUM_FACES_PER_CUBE];
};

#define NUM_TILES_PER_ROW 3
#define NUM_TILES_PER_COL 3
struct cubeface {
    enum colour tiles[NUM_TILES_PER_ROW][NUM_TILES_PER_COL];
};
// per face
    // rotate 90, -90, 180

#include "CubiksRube.h"
#include "PhysicalCube.h"

void setup() {
  // setup
    // Scan into virtual rep
      // Get return vals of scan from physical cube
      // Take values and put into our virtual representation
}

void loop() {
  // Get action (algo)
  // Do action
}

struct cubeface rotateFace90(struct cubeface face) {
    enum colour a = face.tiles;
    for (int i = 0; i < 3 / 2; i++) { 
        for (int j = i; j < 3 - i - 1; j++) { 
            enum colour temp = a[i][j]; 
            a[i][j] = a[3 - 1 - j][i]; 
            a[3 - 1 - j][i] = a[3 - 1 - i][3 - 1 - j]; 
            a[3 - 1 - i][3 - 1 - j] = a[j][3 - 1 - i]; 
            a[j][3 - 1 - i] = temp; 
        } 
    } 
    face.tiles = a;    
}

struct cubeface rotateFace180(struct cubeface face) {

}

// a.k.a -90 degrees
struct cubeface rotateFace270(struct cubeface face) {

}

/*
     Each face gets rotated whatever amount; depending on that, neighbouring faces have their tiles swapped; figure out manually
*/
void rotateGreen(int numDegrees) {
    if (numDegrees == 90) {
        
    } else if (numDegrees == 180) {

    } else if (numDegrees == -90) {

    }
}

void rotateYellow(int numDegrees) {
    if (numDegrees == 90) {

    } else if (numDegrees == 180) {

    } else if (numDegrees == -90) {

    }
}

void rotateBlue(int numDegrees) {
    if (numDegrees == 90) {

    } else if (numDegrees == 180) {

    } else if (numDegrees == -90) {

    }
}

void rotateWhite(int numDegrees) {
    if (numDegrees == 90) {

    } else if (numDegrees == 180) {

    } else if (numDegrees == -90) {

    }
}

void rotateRed(int numDegrees) {
    if (numDegrees == 90) {

    } else if (numDegrees == 180) {

    } else if (numDegrees == -90) {

    }
}

void rotateOrange(int numDegrees) {
    if (numDegrees == 90) {

    } else if (numDegrees == 180) {

    } else if (numDegrees == -90) {

    }
}
