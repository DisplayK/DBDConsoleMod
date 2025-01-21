#include "TileMatrix.h"

UTileMatrix::UTileMatrix()
{
	this->_matrix = TArray<FArrayOfATile>();
	this->_tiles = TArray<ATile*>();
	this->_extraTiles = TArray<ATile*>();
	this->_basementActor = NULL;
	this->_quadInfoArray = TArray<FQuadrantInfo>();
	this->_quadIndexMatrix = TArray<FArrayOfInt32>();
}
