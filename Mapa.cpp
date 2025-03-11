//#include "Mapa.h"
//
//void Mapa::initLevel(int numRows, int numColumns)
//{
//	// Create Map
//	m_numRows = numRows;
//	m_numColumns = numColumns;
//	m_level = new CellType* [numRows];
//
//	for (int i = 0; i < numRows; ++i)
//	{
//		m_level[i] = new CellType[numColumns];
//	}
//
//	// Assign random values to my map
//	for (int i = 0; i < numRows; ++i)
//	{
//		for (int j = 0; j < numColumns; ++j)
//		{
//			const int MAX_CELL_TYPES = static_cast<int>(CellType::COUNT);
//			m_level[i][j] = static_cast<CellType>(rand() % MAX_CELL_TYPES);
//		}
//	}
//}
//
//void Mapa::printLevel()
//{
//	for (int i = 0; i < m_numRows; ++i)
//	{
//		for (int j = 0; j < m_numColumns; ++j)
//		{
//			std::cout << static_cast<int>(m_level[i][j]) << " ";
//		}
//		std::cout << std::endl;
//	}
//	std::cout << std::endl;
//}
//
//void Mapa::destroyLevel()
//{
//	for (int i = 0; i < m_numRows; ++i)
//	{
//		delete[] m_level[i]; // @ row i
//	}
//	delete[] m_level;
//}