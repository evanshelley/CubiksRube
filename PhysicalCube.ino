// Green: 0
// Yellow: 1
// Blue: 2
// White: 3
// Red: 4
// Orange: 5
enum colour{Green,Yellow,Blue,White,Red,Orange}

/*
   [4]   
   [3]
[5][2][6]
   [1]
*/
struct cube {
    struct cubeface greenFace;
    struct cubeface yellowFace;
    struct cubeface blueFace;
    struct cubeface whiteFace;
    struct cubeface redFace;
    struct cubeface orangeFace;
};

// [ 1 2 3 ]
// [ 4 5 6 ]
// [ 7 8 9 ]
struct cubeface {
    enum colour colours[NUM_TILES_PER_FACE];
    enum colour cubeface;
}
// Scan cube
// Do action
  // args[0]: cube face -> based on colour of centre piece i.e. green servo as enum
  // args[1]: degrees of rotation -> {-90, 90, 180, -180 }
