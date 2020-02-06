#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  if (x0 > x1){
    draw_line(x1, y1, x0, y0, s, c);
  }
  int A = y1 - y0;
  int B = -(x1 - x0);
  int d;
  if (B == 0){
    while (y0 <= y1){
      plot(s, c, x0, y0);
      y0++;
    }
  }
  else{
    double slope = (double)(A)/(-B);
    if (slope > 1){
      d = A + 2* B;
      while (y0 <= y1) {
        plot(s, c, x0, y0);
        if (d < 0){
          x0++;
          d += 2 * A;
        }
        y0++;
        d += 2 * B;
      }
    }
    else if (slope > 0){
      d = 2 * A + B;
      while (x0 < x1){
        plot(s, c, x0, y0);
        if (d > 0){
          y0++;
          d += 2 * B;
        }
        x0++;
        d += 2 * A;
      }
    }
    else if (slope > -1){

    }
    else {

    }
  }
}
