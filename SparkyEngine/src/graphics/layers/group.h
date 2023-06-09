#pragma once
#include "../renderable2d.h"

namespace sparky { namespace graphics {

    class Group : public Renderable2D
    {
    private:
        std::vector<Renderable2D*> m_Renderables;
    public:
        maths::mat4 m_TransformationMatrix;
        Group(const maths::mat4& transform);
        ~Group();
        void add(Renderable2D* renderable);
        void remove();
        void submit(Renderer2D* renderer) const override;

        maths::mat4& getTransformRef() { return m_TransformationMatrix; }
    };

} }