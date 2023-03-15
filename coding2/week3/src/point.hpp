#ifndef point_hpp
#define point_hpp

#include <stdio.h>
#include "boid.h"


class point : public Boid {
public:
    point();
    void draw();
};

#endif
