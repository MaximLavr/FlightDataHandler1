#include "map.h"

namespace app_graphics
{
    Map::Map(float x, float y, float width, float height, maths::vec2 quality, Shader *shader, maths::mat4 projectionMatrix)
    {
        m_Position = vec2(x, y);
        m_Size = vec2(width, height);
        m_Quality = quality;
        m_Shader = shader;
        m_ProjectionMatrix = projectionMatrix;
        m_MapParts.push_back(new Map_part(m_Position, m_Shader, m_ProjectionMatrix));
    }

    Map::Map(float x, float y, float width, float height, maths::vec2 centerTileCoords, maths::vec2 quality,
             Shader *shader, maths::mat4 projectionMatrix)
    {
        m_Position = vec2(x, y);
        m_Size = vec2(width, height);
        m_CenterTileCoords = centerTileCoords;
        m_Quality = quality;
        m_Shader = shader;
        m_ProjectionMatrix = projectionMatrix;
        m_MapParts.push_back(new Map_part(m_Position, m_Shader, m_ProjectionMatrix));

        //for (int i = 0; i < )
    }

    void Map::render()
    {
        if (!m_MapParts.empty())
        {
            for (auto* map_part : m_MapParts)
            {
                map_part->render();
            }
        }
    }

    void Map::add(vec2 position, vec2 size, float x, float y, float zoom)
    {
        m_TilesCounter++;
        m_MapParts.back()->AddTile(position, size, x, y, zoom);
        if (m_TilesCounter > 15)
        {
            m_TilesCounter = 0;
            m_MapParts.push_back(new Map_part(m_Position, m_Shader, m_ProjectionMatrix));
        }
    }

    void Map::move_right()
    {
        for (auto& part : m_MapParts)
        {
            for (auto& sprite : part->renderables)
            {
                sprite->m_Position.x+=0.22f;
                //if (sprite->m_Position.x > -6)
                  //  part->remove_tile();
            }
        }
    }

    void Map::move_left()
    {
        for (auto& part : m_MapParts)
        {
            for (auto& sprite : part->renderables)
            {
                sprite->m_Position.x-=0.22f;
            }
        }
    }

    void Map::move_up()
    {
        for (auto& part : m_MapParts)
        {
            for (auto& sprite : part->renderables)
            {
                sprite->m_Position.y+=0.22f;
            }
        }
    }

    void Map::move_down()
    {
        for (auto& part : m_MapParts)
        {
            for (auto& sprite : part->renderables)
            {
                sprite->m_Position.y-=0.22f;
            }
        }
    }
}
