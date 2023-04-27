#pragma once
#include "map_part.h"
#include "../../SparkyEngine/src/engine.h"
#include <vector>

using namespace sparky;
using namespace graphics;

namespace app_graphics
{
    class Map
    {
    private:
        std::vector<Map_part*> m_Cache;
        Shader* m_Shader;
        maths::vec2 m_Position;
        maths::vec2 m_Size;
        maths::vec2 m_Quality;
        maths::vec2 m_CenterTileCoords;
        maths::mat4 m_ProjectionMatrix;
        int m_TilesCounter = 0;
    public:
        Map(float x, float y, float width, float height, maths::vec2 quality, Shader* shader, maths::mat4 projectionMatrix);
        Map(float x, float y, float width, float height, maths::vec2 centerTileCoords, maths::vec2 quality,  Shader* shader, maths::mat4 projectionMatrix);
        void render();
        void add(vec2 position, vec2 size, float x, float y, float zoom);
        std::vector<Map_part*> m_MapParts;
        void move_right();
        void move_left();
        void move_up();
        void move_down();
    };
}

