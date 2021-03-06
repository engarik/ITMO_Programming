#ifndef REGULARTRIANGLE_H
#define REGULARTRIANGLE_H

typedef struct {
    float x1, y1;
    float x2, y2;
    float x3, y3;
} RegularTriangle;

float regularTrianglePerimeter(RegularTriangle triangle);
float regularTriangleArea(RegularTriangle triangle);
#endif
