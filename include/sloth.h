#include "../../Greed/include/greed.h"
#ifndef SLOTH
#define SLOTH

typedef struct Vec2 {
  f32 x;
  f32 y;
} Vec2;

typedef struct Vec3 {
  f32 x;
  f32 y;
  f32 z;
} Vec3;

typedef struct Vec4 {
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} Vec4;

f32 vec2_dot_product(Vec2 *v1, Vec2 *v2);
f32 vec2_cross_product(Vec2 *v1, Vec2 *v2);
#endif
