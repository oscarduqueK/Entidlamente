#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

// Util.h
struct Position2D {
    int x;
    int y;
};

// Scientist
class Scientist {
    Position2D m_pos;
    bool m_isDead;

public:
    Scientist() : m_isDead(false) 
    {
        m_pos = { 
            rand() % 100, rand() % 100
        };
    }

    Position2D GetPos() const
    {
        return m_pos; 
    }
   
    void SetPos(Position2D pos) 
    { 
        m_pos = pos;
    }
    bool IsDead() const 
    { 
        return m_isDead; 
    }
};

// Dinosaur
class Dinosaur {
    string m_name;
    int m_health;
    string m_adn;
    Position2D m_pos;
    bool m_isDangerous;

public:
    Dinosaur() {
        m_health = 100;
        m_pos = { rand() % 100, rand() % 100 };
        m_isDangerous = rand() % 2;
    }

    Position2D GetPos() const { return m_pos; }
    void SetPos(Position2D pos) { m_pos = pos; }
    bool GetIsDangerous() const { return m_isDangerous; }
};

// Vehicle
enum SeatType { SMALL, MEDIUM, LARGE };

class Vehicle {
    int m_color;
    string m_model;
    bool m_isElectric;
    SeatType m_seatType;

public:
    Vehicle() : m_color(0), m_model("ModelX"), m_isElectric(true), m_seatType(MEDIUM) {}

    int GetColor() const { return m_color; }
    void SetColor(int color) { m_color = color; }

    int GetNumSeats() const {
        switch (m_seatType) {
        case SMALL: return 2;
        case MEDIUM: return 4;
        case LARGE: return 6;
        }
        return 0;
    }

    int IsFull() const { return 0; } // Placeholder
    void RegisterScientistsToVehicle() {
        // Placeholder
    }
};

// Park
class Park {
    int m_dimX = 100, m_dimY = 100;
    int m_numScientists = 5;
    int m_numDynosaurs = 3;
    int m_numVehicles = 2;

    vector<Scientist> scientists;
    vector<Dinosaur> dinosaurs;
    vector<Vehicle> vehicles;

    void initializeScientists() {
        for (int i = 0; i < m_numScientists; i++) {
            scientists.push_back(Scientist());
        }
    }

    void initializeDynosaurs() {
        for (int i = 0; i < m_numDynosaurs; i++) {
            dinosaurs.push_back(Dinosaur());
        }
    }

    void initializeCars() {
        for (int i = 0; i < m_numVehicles; i++) {
            vehicles.push_back(Vehicle());
        }
    }

    void assignVehiclesToScientists() {
        // Placeholder
    }

    void UpdateScientists() {
        // Placeholder
    }

    void UpdateDynosaurs() {
        // Placeholder
    }

public:
    Park() {
        initializeScientists();
        initializeDynosaurs();
        initializeCars();
    }

    void Update() {
        UpdateScientists();
        UpdateDynosaurs();
    }

    void Print() {
        cout << "--- Scientists ---\n";
        for (const auto& s : scientists) {
            Position2D pos = s.GetPos();
            cout << "Scientist at (" << pos.x << ", " << pos.y << ") - Dead: " << s.IsDead() << "\n";
        }

        cout << "--- Dinosaurs ---\n";
        for (const auto& d : dinosaurs) {
            Position2D pos = d.GetPos();
            cout << "Dinosaur at (" << pos.x << ", " << pos.y << ") - Dangerous: " << d.GetIsDangerous() << "\n";
        }
    }

    float CalculateDistance(Position2D a, Position2D b) {
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    }

    vector<Scientist> GetScientistsInDanger() {
        vector<Scientist> danger;
        for (auto& s : scientists) {
            for (auto& d : dinosaurs) {
                if (d.GetIsDangerous() && CalculateDistance(s.GetPos(), d.GetPos()) < 10.0) {
                    danger.push_back(s);
                }
            }
        }
        return danger;
    }
};

// GameLoop
class GameLoop {
    Park park;

public:
    void Init() {
        cout << "Inicializando parque...\n";
    }

    void Update() {
        while (true) {
            park.Update();
            park.Print();
            cout << "--- Scientists in danger: " << park.GetScientistsInDanger().size() << " ---\n";
            break;
        }
    }
};

// main
int main() {
    srand(time(0)); // Para aleatoriedad de posiciones
    GameLoop game;
    game.Init();
    game.Update();
    return 0;
}
