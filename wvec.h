#ifndef WVEC_H
#define WVEC_H

#define print_vec(X) _Generic((X), \
	Vec2 *: print_vec2, \
	Vec3 *: print_vec3, \
	Vec4 *: print_vec4 \
)(X)

typedef struct Vec2 {
	float x;
	float y;
} Vec2;

typedef struct Vec3 {
	float x;
	float y;
	float z;
} Vec3;

typedef struct Vec4 {
	float x;
	float y;
	float z;
	float w;
} Vec4;

void print_vec2(Vec2 *v);
void print_vec3(Vec3 *v);
void print_vec4(Vec4 *v);

#endif
