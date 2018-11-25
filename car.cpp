#include "car.h"
#include <stdio.h>

struct CarImplementation {
Type type;
Color color;
double current_speed;
double fill_level;
double acceleration_rate;
bool is_rented;
};

#define NUMBER_OF_CARS 6

static struct CarImplementation a1
{
  AIXAM, RED,0,16.0, 0.0, false
};
static struct CarImplementation f1
{
  FIAT_MULTIPLA,GREEN, 0,65.0, 0.0, false
};
static struct CarImplementation f2
{
  FIAT_MULTIPLA,BLUE,0, 65.00,0.0, false
};
static struct CarImplementation f3
{
  FIAT_MULTIPLA,ORANGE,0, 65.00,0.0, false
};
static struct CarImplementation j1
{
  JEEP, SILVER,0,80.00, 0.0, false
};
static struct CarImplementation j2
{
  JEEP,BLACK, 0, 80.00,0.0, false
};
Car car_park[] = {&a1,&f1,&f2,&f3,&j1,&j2};


Car get_car(Type type)
{
  for (int i = 0; i < NUMBER_OF_CARS; i++) {
    if (car_park[i]->type == type && !car_park[i]->is_rented) {
      car_park[i]->is_rented = true;
      return car_park[i];
    }
  }
return 0;
}
enum Type get_type(Car car1)
{
  return car1->type;
}

enum Color get_color(Car car1)
{
  return car1->color;
}

double get_fill_level(Car car1)
{
  return car1->fill_level;
}

double get_acceleration_rate(Car car1)
{
  return car1->acceleration_rate;
}

double get_speed(Car car1)
{
  return car1->current_speed;
}

void init()
{
  a1 = { AIXAM, RED, 0.0, 16.0, 0.0, false };
  f1 = { FIAT_MULTIPLA, GREEN, 0.0, 65.0, 0.0, false };
  f2 = { FIAT_MULTIPLA, BLUE, 0.0, 65.00,0.0, false };
  f3 = { FIAT_MULTIPLA, ORANGE,0.0, 65.00,0.0, false };
  j1 = { JEEP, SILVER, 0.0, 80.00, 0.0, false };
  j2 = { JEEP, BLACK, 0.0, 80.00, 0.0, false };
}

void set_acceleration_rate(Car car1, double acc)
{
  if (car1->type == AIXAM && acc > 1)
  {
    car1->acceleration_rate = 1;
  }
  else if(car1->type == FIAT_MULTIPLA && acc >2.26)
  {
    car1->acceleration_rate = 2.26;
  }
  else if (car1->type == JEEP && acc >3.14)
  {
    car1->acceleration_rate = 3.14;
  }
  car1->acceleration_rate = acc;
}

void accelerate(Car car1)
{
  car1->acceleration_rate += car1->acceleration_rate;
}
