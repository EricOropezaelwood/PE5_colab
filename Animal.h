#ifndef _ANIMAL_H_
#define _ANIMAL_H_

class Animal {
public:
	Animal(std::string sound):
	sound_(sound)
	{}

	std::string MakeSound() const {return sound_; }

	void Fight(Animal &opponent);

	virtual int GetPower() { return 0; };

private:
	std::string sound_;
};

class Turtle : public Animal {
public:
	Turtle():
	Animal("turtle turtle turtle")
	{}


	int GetPower() { return 7; };


};

class Deer : public Animal {
public:
	Deer():
	Animal("Deer Deer Deer")
	{}

	int GetPower() { return 10; };

};

// Define your animals here

class Eagle : public Animal {
public:
	Eagle():
	Animal("eagle caw!")
	{}


	int GetPower() { return 8; };

};


#endif  // _ANIMAL_H_
