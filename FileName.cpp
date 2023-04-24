#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	string Name;
	int Age;
	float adressX,adressY,adressZ;

	Animal(){ getone(); }
	Animal(string name, int age, float x, float y, float z)
		:Name(name), Age(age), adressX(x), adressY(y), adressZ(z)
	{
		getAnimal();
	}

	void setAnimalID(string name, int age, float x, float y, float z) 
	{
		Name = name; Age = age; adressX = x; adressY = y; adressZ = z;
		getAnimal();
	}

	void getone() { cout << "a Animal is born!" << endl; }

	void getAnimal()
	{
		cout << endl;
		cout << "Name:" << Name << endl;
		cout << "Age:" << Age << endl;
		cout << "location:(" << adressX << "," << adressY << "," << adressZ << ")" << endl;
	}
};

class Cat :public Animal
{
public:
	Cat(){}
	Cat(string name, int age, float x, float y, float z)
		: Animal(name, age, x, y, z)
	{}

};

class Dog :public Animal
{
public:
	Dog(){}
	Dog(string name, int age, float x, float y, float z)
		: Animal(name, age, x, y, z)
	{}
};

int main()
{
	Animal animal;
	animal.setAnimalID("Caday", 19, 65.52, 96.f, 85.69);

	Cat cat("xie", 20, 78.f, 856.26, 86.f);

	Dog dog("zuo", 20, 956.6, 556.f, 895.3);

}

