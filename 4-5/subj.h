#pragma once
#include "list.h"
#include <iostream>//чтобы string работал
#include <string>
using namespace std;


enum class Engine
{
	Gasoline,
	Diesel
};

enum class CarBody
{
	Sedan,
	Coup,
	Universal
};

enum class Drive
{
	Front,
	Back,
	Full
};

//перечисление, значения которого соответствуют типам объектов
enum class CarType
{
	itPassengerCar,
	itMicroBus,
	itBus,
	itTruck,
	itSpecial
};

class Car : public Item
{
public:
	virtual void input();
	virtual void print();
	friend class SubjList;
protected:
	CarType type;
	string number;
	string owner;
	string brand;
	string model;
	string color;
};

class PassengerCar : public Car
{
public:
	void input();
	void print();
	friend class SubjList;

private:
	Engine engine;
	CarBody body;
	Drive drive;
};

class MicroBus : public Car
{
public:
	void input();
	void print();
	friend class SubjList;

private:
	Engine engine;
	int placeCount;
};

class Bus : public Car
{
public:
	void input();
	void print();
	friend class SubjList;

private:
	Engine engine;
	int placeCount;
	int capacity;
};

class Truck : public Car
{
public:
	void input();
	void print();
	friend class SubjList;

private:
	Engine engine;
	int capacity;
};

class Special : public Car
{
public:
	void input();
	void print();
	friend class SubjList;

private:
	string description;
};
