#include "wvec.h"

#include <stdio.h>

void print_vec2(Vec2 *v) {
	printf("Vec2 { x: %f, y: %f }\n", v->x, v->y);
}

void print_vec3(Vec3 *v) {
	printf("Vec3 { x: %f, y: %f, z: %f }\n", v->x, v->y, v->z);
}

void print_vec4(Vec4 *v) {
	printf("Vec4 { x: %f, y: %f, z: %f, w: %f }\n", v->x, v->y, v->z, v->w);
}
