#ifndef OFFSETS_H
#define OFFSETS_H

#include <variable.h>

struct POINT{ // To be replaced by gp_Pnt.
    double x,y,z;
};

class offsets
{
public:
    offsets();

    //! Example of standard offset use -abs value for negative offset.
    void do_offset(double offset);

    //! Helper functions, grabbed from old code example :
    std::vector<double> arc_bulge(data p /* primitive */);
    double arc_determinant(POINT a /* arc startpoint */, POINT b /* a arc circumfence point*/, POINT c /* arc endpoint*/);
    POINT offset_point_on_line(double xs, double ys, double xe, double ye, double offset_from_xs_ys);
    POINT bulge_to_arc_controlpoint(POINT p1, POINT p2, double bulge); //find the arc center
    POINT rotate_3d(double x_to_rotate,double y_to_rotate, double z_to_rotate, double rotate_degrees_x, double rotate_degrees_y, double rotate_degrees_z);
};


#endif // OFFSETS_H