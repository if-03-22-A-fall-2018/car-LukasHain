/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

typedef struct CarImplementation* Car;
enum Type{AIXAM, FIAT_MULTIPLA, JEEP};
enum Color{RED, GREEN, BLUE, ORANGE, SILVER, BLACK};

Car get_car(Type type);
enum Type get_type(Car car1);
enum Color get_color(Car car1);
double get_fill_level(Car car1);
double get_acceleration_rate(Car car1);
double get_speed(Car car1);
void init();
void set_acceleration_rate(Car car1, double acc);
void accelerate(Car car1);

#endif
