#include "../include/sloth.h"

f32 vec2_dot_product(vec2 a, vec2 b) { return (a.x * b.x) + (a.y * b.y); }

f32 vec2_cross_product(vec2 a, vec2 b) { return (a.x * b.y) - (a.y * b.x); }
