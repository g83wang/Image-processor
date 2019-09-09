#ifndef DECORATOR_H
#define DECORATOR_H
#include "image.h"
#include <fstream>
#include "ppm.h"

class Decorator:public Image {
   Image *image;
   PPM* ppm;
   public:
   virtual void render(PPM &ppm)=0;
   ~Decorator();
};

#endif
