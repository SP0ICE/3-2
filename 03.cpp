#include <iostream>
#include <cstdint>

class TRoad {
  public:
    double length;
    int width;
    TRoad();
};

TRoad::TRoad() { 
  length = 10;
  width = 15;
}

class TCar {
  public:
    double x, v;
    uint8_t p;
    TCar();
};

TCar::TCar() {
  x = 5;
  v = 10;
  p = 15;
}

int main() {
  using namespace std;
  TCar car;
  TRoad road;
  std::cout << "car.x = " << car.x << std::endl;
  std::cout << "car.v = " << car.v << std::endl;
  std::cout << "car.p = " << static_cast<int>(car.p) << std::endl;
  std::cout << "road.width = " << ++road.width << std::endl;
  std::cout << "road.length = " << road.length << std::endl;
  return 0;
}
