#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  int A = y1 - y0;
  int B = -(x1 - x0);
  if (B == 0){
    while (y0 <= y1){
      plot(s, c, x0, y0);
      y0++;
    }
  }
  else{
    double slope = (double)(A)/(-B);
    if (slope > 1){

    }
    else if (slope > 0){

    }
    else if (slope > -1){

    }
    else {
      
    }
  }
}
