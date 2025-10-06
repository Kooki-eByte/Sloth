#include "../include/sloth.h"



f32 sloth_vec2_dot_product(S_Vec2 *a, S_Vec2 *b) { 
  return (a->x * b->x) + (a->y * b->y);
}

f32 sloth_vec2_cross_product(S_Vec2 *a, S_Vec2 *b) {
  return (a->x * b->y) - (a->y * b->x);
}
