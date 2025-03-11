#pragma once
#include <iostream>
enum class CellType
{
	EMPTY,
	OBSTACULO,
	WALL,
	PLAYER,
	ENEMY,
	COUNT
};


struct Mapa
{

	// Constructor & Destructor included
	Mapa()
	{
		// Metodo vacio POR DEFECTO
	};

	~Mapa()
	{
		// Metodo vacio POR DEFECTO

	};

	// Array 2D ( We chose to be dynamic)
	int m_numRows;
	int m_numColumns;
	CellType** m_level;

	void initLevel(int numRows, int numColumns);
	void printLevel();
	void destroyLevel();
};

