// this file holds cube algorithms that can be called during cubeSolve, each assuming front face is blue and yellow face is top

// PLL: 21 algorithms

// TPerm:
// R U R' U' R' F R2 U' R' U' R U R' F'
void TPerm() {
  redFace(clockwise);             // R
  yellowFace(clockwise);          // U
  redFace(counterclockwise);      // R'
  yellowFace(counterclockwise);   // U'
  redFace(counterclockwise);      // R'
  blueFace(clockwise);            // F
  redFace(doubleTurn);            // R2
  yellowFace(counterclockwise);   // U'
  redFace(counterclockwise);      // R'
  yellowFace(counterclockwise);   // U'
  redFace(clockwise);             // R
  yellowFace(clockwise);          // U
  redFace(counterclockwise);      // R'
  blueFace(counterclockwise);     // F'
}



// OLL: 57 algorithms
