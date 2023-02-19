
#include <iostream>
#include "Math.h"

using namespace std;



class Animal {
private:

public:

	Animal() {}

	virtual void Voice()
	{
		cout << "rrr\n";
	}



};


class Dog : public Animal
{
private:

public:
	Dog() {}

	void Voice() override
	{
		cout << "Woof!\n";
	}
};

class Cat : public Animal
{
private:

public:
	Cat() {}

	void Voice() override
	{
		cout << "Mya!\n";
	}
};
class Pig : public Animal
{
private:

public:
	Pig() {}

	void Voice() override
	{
		cout << "Hr Hr!\n";
	}
};

int main()
{

	Animal* arr[3];

	arr[0] = new Dog();
	arr[1] = new Cat();
	arr[2] = new Pig();

	for (Animal* a : arr)
		a->Voice();
}


