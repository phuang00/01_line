#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = 255;
  c.blue = 0;

  clear_screen(s);
  //octants 1 and 5
  //printf("a\n");
  draw_line(0, 0, XRES-1, YRES-1, s, c);
  //printf("b\n");
  draw_line(0, 0, XRES-1, YRES / 2, s, c);
  //printf("c\n");
  draw_line(XRES-1, YRES-1, 0, YRES / 2, s, c);

  //octants 8 and 4
  c.blue = 255;
  //printf("d\n");
  draw_line(0, YRES-1, XRES-1, 0, s, c);
  //printf("e\n");
  draw_line(0, YRES-1, XRES-1, YRES/2, s, c);
  //printf("f\n");
  draw_line(XRES-1, 0, 0, YRES/2, s, c);

  //octants 2 and 6
  c.red = 255;
  c.green = 0;
  c.blue = 0;
  //printf("g\n");
  draw_line(0, 0, XRES/2, YRES-1, s, c);
  //printf("h\n");
  draw_line(XRES-1, YRES-1, XRES/2, 0, s, c);

  //octants 7 and 3
  c.blue = 255;
  //printf("i\n");
  draw_line(0, YRES-1, XRES/2, 0, s, c);
  //printf("j\n");
  draw_line(XRES-1, 0, XRES/2, YRES-1, s, c);

  //horizontal and vertical
  c.blue = 0;
  c.green = 255;
  //printf("k\n");
  draw_line(0, YRES/2, XRES-1, YRES/2, s, c);
  //printf("l\n");
  draw_line(XRES/2, 0, XRES/2, YRES-1, s, c);

  display(s);
  save_extension(s, "lines.png");
  save_ppm(s, "binary.ppm");
  save_ppm_ascii(s, "ascii.ppm");
}
