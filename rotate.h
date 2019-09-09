#ifndef ROTATE_H
#define ROTATE_H
#include <iostream>
#include <vector>
#include "decorator.h"
#include "ppm.h"
#include "image.h"

using namespace std;

class rotate: public Decorator {
  Image *image;
  PPM *result;
public:
  rotate(Image*);  
  void render(PPM &ppm) override;
  ~rotate();
};
#endif
