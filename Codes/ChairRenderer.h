#pragma once

#include "../BlockRenderer.h"

class ChairRenderer : public BlockRenderer {
public:
	virtual void render(const TilePos&, FurnitureTile*, TileTessellator*);
};
