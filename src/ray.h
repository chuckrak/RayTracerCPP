#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray {
    public:
        ray() {
            orig = vec3();
            dir = vec3();
        }
        ray(point3& origin, vec3& direction) {
            orig = origin;
            dir = direction;
        }

        point3 orig;
        vec3 dir;        


        point3 origin() const {return orig; }
        vec3 direction() const {return dir; }

        point3 at(double t) const {
            return orig + t*dir;
        }


        


};



#endif
