#include <iostream>
using namespace std;



class shape{

};

class TwoDimensionalShape : public shape{

};

class ThreeDimensionalShape : public shape{

};

class Circle : public TwoDimensionalShape{

};

class Square : public TwoDimensionalShape{

};

class Triangle : public TwoDimensionalShape{

};

class Sphere : public ThreeDimensionalShape{

};

class Cube  : public ThreeDimensionalShape{

};

class Tetrahedron  : public ThreeDimensionalShape{

};