#ifndef FEAL_MESH_POINT_ENTITY_H
#define FEAL_MESH_POINT_ENTITY_H

#include "feal/mesh/entity.h"

namespace feal {
class PointEntity : public Entity {
   public:
    PointEntity() : Entity{Type::kPoint} {}
    virtual ~PointEntity() {}

    virtual unsigned int GetDim() const override final {
        return kGeom_.kDimension;
    }
   private:
    Geometry<kPoint> kGeom_;
};
}  // namespace feal

#endif /* ifndef FEAL_MESH_POINT_ENTITY_H */
