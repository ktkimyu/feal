#ifndef FEAL_MESH_ENTITY_H
#define FEAL_MESH_ENTITY_H

namespace feal {

/**
 * @brief Base class for the entity of mesh
 */
class Entity {
   public:
    /**
     * @brief Mesh entity type
     */
    enum Type {
        kPoint,
        kSegment,
        kTriangle,
        kQuadrilateral,
        kTetrahedron,
        kHexahedron,
    };

    /**
     * @brief Constructor
     *
     * @param entity_type
     */
    explicit Entity(Type entity_type);
    virtual ~Entity() = default;

    template <Type T>
    struct Geometry {};

    Type const GetType() { return kEntityType_; }

    virtual unsigned int GetDim() const = 0;

   protected:
    const Type kEntityType_;
};

template <>
struct Entity::Geometry<Entity::kPoint> {
    static constexpr unsigned int kDimension{0};
};

template <>
struct Entity::Geometry<Entity::kSegment> {
    static constexpr unsigned int kDimension{1};
    static constexpr unsigned int kNumVertices{2};
};

template <>
struct Entity::Geometry<Entity::kTriangle> {
    static constexpr unsigned int kDimension{2};
    static constexpr unsigned int kNumVertices{3};
    static constexpr unsigned int kNumEdges{3};
};

}  // namespace feal

#endif /* ifndef FEAL_MESH_ENTITY_H */
