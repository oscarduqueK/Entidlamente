#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

enum class CellType {
    EMPTY,
    OBSTACLE,
    WALL,
    PLAYER,
};

struct Map {
    int rows;
    int cols;
    CellType** matrix;
};

void initializeMap(Map& map) {
    srand(time(nullptr));
    map.matrix = new CellType * [map.rows];
    for (int i = 0; i < map.rows; i++) {
        map.matrix[i] = new CellType[map.cols];
        for (int j = 0; j < map.cols; j++) {
            int randomValue = rand() % 4;
            map.matrix[i][j] = static_cast<CellType>(randomValue);
        }
    }

    // Colocar al jugador en una posición aleatoria
    int playerX = rand() % map.rows;
    int playerY = rand() % map.cols;
    map.matrix[playerX][playerY] = CellType::PLAYER;
}

void printMap(const Map& map) {
    for (int i = 0; i < map.rows; i++) {
        for (int j = 0; j < map.cols; j++) {
            switch (map.matrix[i][j]) {
            case CellType::EMPTY:
                cout << " . ";
                break;
            case CellType::OBSTACLE:
                cout << " O ";
                break;
            case CellType::WALL:
                cout << " # ";
                break;
            case CellType::PLAYER:
                cout << " P ";
                break;
            }
        }
        cout << endl;
    }
}

void freeMapMemory(Map& map) {
    for (int i = 0; i < map.rows; i++) {
        delete[] map.matrix[i];
    }
    delete[] map.matrix;
}

int main() {
    Map level1;
    cout << "filas: " << endl;
    cout << "columnas: " << endl;
    cin >> level1.rows;
    cin >> level1.cols;
    //level1.rows = 10;
    //level1.cols = 10;
    initializeMap(level1);
    printMap(level1);
    freeMapMemory(level1);
    return 0;
}
