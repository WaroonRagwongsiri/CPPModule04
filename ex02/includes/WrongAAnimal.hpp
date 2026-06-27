#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class WrongAAnimal
{
	protected:
		std::string type;
	public:
		WrongAAnimal();
		WrongAAnimal(const std::string& type);
		WrongAAnimal(const WrongAAnimal& other);
		WrongAAnimal& operator=(const WrongAAnimal& other);
		virtual ~WrongAAnimal();
		void makeSound() const;
		std::string getType() const;
};

#endif
