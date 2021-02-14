#pragma once
#ifndef __TILE__
#define __TILE__
#include "DisplayObject.h"
#include "NeighbourTiles.h"
#include "Label.h"


class Tile : public DisplayObject
{
public:
	//Constuctor
	Tile();

	//Destructor
	~Tile();

	//Life-cycle functions
	void draw() override;
	void update() override;
	void clean() override;

	//Getters
	Tile* getNeighbourTile(NeighbourTile position);
	float getTileCost();
	glm::vec2 getGridPosition();
	
	//Setters
	void setNeighbourTile(NeighbourTile position, Tile* tile);
	void setTileCost(float cost);
	void setGridPosition(float col, float row);

	void addLabels();
	void setLabelsEnabled(bool state);

private:

	float m_cost;
	Label* m_costLabel;
	Label* m_statusLabel;
	Tile* m_neighbours[NUM_OF_NEIGHBOUR_TILES];

	glm::vec2 m_gridPosition;
};

#endif /* defined (__TILE__) */