#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAAnimal.hpp"

class WrongCat : virtual public WrongAAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
		~WrongCat();
		void makeSound() const;
};

#endif
