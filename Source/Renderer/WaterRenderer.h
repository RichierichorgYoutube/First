#ifndef WATERRENDERER_H_INCLUDED
#define WATERRENDERER_H_INCLUDED

#include <vector>
#include <SFML/Graphics.hpp>

#include "../Shaders/WaterShader.h"
#include "../Config.h"


class ChunkMesh;
class Camera;

class WaterRenderer
{
    public:
        void add(const ChunkMesh& mesh);
        void render(const Camera& camera, Config* conf);

    private:
        std::vector<const ChunkMesh*> m_chunks;

        WaterShader m_shader;
};

#endif // WATERRENDERER_H_INCLUDED
