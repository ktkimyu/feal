#ifndef FEAL_MESH_POINT_H
#define FEAL_MESH_POINT_H

#include <array>
#include <cassert>

namespace feal {
/**
 * @brief Point in a Cartesian coordinate system
 *
 * @tparam dim The dimension of the Cartesian coordinate system
 */
template <std::size_t dim>
class Point {
   public:
    Point() {}
    Point(const Point<dim> &p) { x_ = p.x_; }
    Point(double x);
    Point(double x, double y);
    Point(double x, double y, double z);
    virtual ~Point() {}

   private:
    std::array<double, dim> x_{};
};

template <std::size_t dim>
Point<dim>::Point(const double x) {
    assert(dim == 1 && "This constructor can only initialize Point<1> object.");
    x_ = {x};
}

template <std::size_t dim>
Point<dim>::Point(const double x, const double y) {
    assert(dim == 2 && "This constructor can only initialize Point<2> object.");
    x_ = {x, y};
}

template <std::size_t dim>
Point<dim>::Point(const double x, const double y, const double z) {
    assert(dim == 3 && "This constructor only can initialize Point<3> object.");
    x_ = {x, y, z};
}

}  // namespace feal
#endif /* ifndef FEAL_MESH_POINT_H */
