#include "../../Greed/include/greed.h"
#ifndef SLOTH
#define SLOTH

typedef struct {
  f32 x;
  f32 y;
} vec2;

typedef struct {
  f32 x;
  f32 y;
  f32 z;
} vec3;

typedef struct {
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} vec4;

f32 vec2_dot_product(vec2, vec2);
f32 vec2_cross_product(vec2, vec2);
#endif
