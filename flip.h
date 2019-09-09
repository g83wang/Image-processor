#ifndef FLIP_H
#define FLIP_H
#include <iostream>
#include <vector>
#include "decorator.h"
#include "ppm.h"
#include "image.h"

using namespace std;

class flip: public Decorator {
  Image *image;
  PPM *result;
public:
  flip(Image*);  
  void render(PPM &ppm) override;
  ~flip();
};
#endif
