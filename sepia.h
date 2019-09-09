#ifndef SEPIA_H
#define SEPIA_H
#include <iostream>
#include <vector>
#include "decorator.h"
#include "ppm.h"
#include "image.h"

using namespace std;

class sepia: public Decorator {
  Image *image;
  PPM *result;
public:
  sepia(Image*);  
  void render(PPM &ppm) override;
  ~sepia();
};
#endif
