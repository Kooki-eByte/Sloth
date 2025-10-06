#ifndef SLOTH
#define SLOTH

#include "defines.h"

// --- Sloth Math Structs --- //

typedef struct S_Vec2_F32 {
  f32 x;
  f32 y;
} S_Vec2_F32;

typedef struct S_Vec3_F32 {
  f32 x;
  f32 y;
  f32 z;
} S_Vec3_F32;

typedef struct S_Vec4_F32 {
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} S_Vec4_F32;

// --- END Sloth Math Structs --- //


// --- Sloth Math Function Definitions --- //

f32 sloth_vec2_dot_product(S_Vec2_F32 *v1, S_Vec2_F32 *v2);
f32 sloth_vec2_cross_product(S_Vec2_F32 *v1, S_Vec2_F32 *v2);

// --- End Sloth Math Function Definitions --- //
#endif
