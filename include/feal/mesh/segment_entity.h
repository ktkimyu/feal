#ifndef FEAL_MESH_SEGMENT_ENTITY_H
#define FEAL_MESH_SEGMENT_ENTITY_H

#include "feal/mesh/entity.h"

namespace feal {
class SegmentEntity : public Entity {
   public:
    SegmentEntity() : Entity(Type::kSegment) {}
    virtual ~SegmentEntity();

    virtual unsigned int GetDim() const override final {
        return kGeom_.kDimension;
    }
    unsigned int GetNumVert() const { return kGeom_.kNumVertices; }

   private:
    Geometry<kSegment> kGeom_;
};
}  // namespace feal

#endif /* ifndef FEAL_MESH_SEGMENT_ENTITY_H */
