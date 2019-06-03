#define NUM_TILES_PER_FACE 9
#define NUM_FACES 6

/* 
  Green: 0
  Yellow: 1
  Blue: 2
  White: 3
  Red: 4
  Orange: 5
*/
enum colour{Green,Yellow,Blue,White,Red,Orange}

/*
   [4]   
   [3]
[5][2][6]
   [1]

Array order: [1,2,3,4,5,6]

Each index in above array is actually 9 values as per cube face shown below

[ 1 2 3 ]
[ 4 5 6 ]
[ 7 8 9 ]
*/
struct cube {
    enum colour tiles[NUM_TILES_PER_FACE * NUM_FACES];
};
