/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:20:10 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/22 11:21:49 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

#define RED 				"\033[0;31m"
#define WHITE 				"\033[0;37m"
#define GREEN 				"\033[0;32m"
#define BLUE 				"\033[0;34m"
#define CYAN 				"\033[0;36m"
#define YELLOW 				"\033[0;33m"
#define MAGENTA 			"\033[0;35m"
#define DARK_GRAY    		"\033[1;30m"
#define ORANGE       		"\033[0;91m"
#define PINK         		"\033[0;95m"
#define LIGHT_RED    		"\033[2;31m"
#define LIGHT_GREEN  		"\033[2;32m"
#define LIGHT_YELLOW 		"\033[2;33m"
#define LIGHT_BLUE   		"\033[3;34m"
#define LIGHT_MAGENTA 		"\033[2;35m"
#define LIGHT_CYAN   		"\033[2;36m"
#define LIGHT_WHITE  		"\033[2;37m"

#define BG_RED       		"\033[41m"
#define BG_GREEN     		"\033[42m"
#define BG_YELLOW    		"\033[43m"
#define BG_BLUE      		"\033[44m"
#define BG_MAGENTA   		"\033[45m"
#define BG_CYAN      		"\033[46m"
#define BG_WHITE     		"\033[47m"
#define BG_LIGHT_RED 		"\033[101m"
#define BG_LIGHT_GREEN 		"\033[102m"
#define BG_LIGHT_YELLOW 	"\033[103m"
#define BG_LIGHT_BLUE 		"\033[104m"
#define BG_LIGHT_MAGENTA 	"\033[105m"
#define BG_LIGHT_CYAN 		"\033[106m"
#define BG_GRAY      		"\033[100m"


#define BOLD 				"\033[1m"
#define ITALIC       		"\033[3m"
#define STRIKETHROUGH 		"\033[9m"
#define UNDERLINE 			"\033[4m"
#define DOUBLE_UNDERLINE 	"\033[21m"

#define RESET 				"\033[0m"


class AMateria;
class ICharacter;
class Character;
class LinkedList;
class Node;





// **********  Node Class  ***********

class Node
{
	public:
		void* data;
		Node* next;
		Node(void* newData);
		~Node();
		
};

Node::~Node(){}
Node::Node(void* newData)
{
	this->data = newData;
	this->next = NULL;
}
// **********  Node Class  ***********


// **********  LinkedList Class  ***********
class LinkedList
{
	private:

	public:
		Node* head;
		~LinkedList();
		LinkedList();

		void listAddBack(void* newData);
};


LinkedList::LinkedList() {this->head = NULL;}

LinkedList::~LinkedList(){}

void LinkedList::listAddBack(void *newData)
{
    Node* newNode = new Node(newData);

    if (!this->head)
        this->head = newNode;
    else
    {
        Node *temp = this->head;
	    while (this->head->next)
			this->head = this->head->next;
        this->head->next = newNode;
		this->head = temp;
    }
}

// **********  LinkedList Class  ***********




// **********  ICharacter Class  ***********
class ICharacter
{
	public:
		virtual ~ICharacter();
		ICharacter();

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};


ICharacter::~ICharacter(void)  
{
	std::cout << ITALIC LIGHT_WHITE STRIKETHROUGH << "[ICharacter Destructor called]\n" << RESET;
}

ICharacter::ICharacter(void)  
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH << "[ICharacter default Constructor called]\n" << RESET;
}

// **********  ICharacter Class  ***********

// **********  Character Class  ***********
class Character : public ICharacter
{
	private:
		AMateria* inventory[4];
		std::string name;
		LinkedList	unequipedMateria;
		
	public:
		~Character(void);
		Character(void);
 		Character(const Character &existObject);
 		Character(std::string name);
		Character &operator=(const Character &existObject);

		std::string const &	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

// **********  AMateria Class  ***********
class AMateria
{
	protected:
		std::string type;
		
	public:
		virtual ~AMateria(void);
		AMateria(void);
 		AMateria(const AMateria &existObject);
		AMateria &operator=(const AMateria &existObject);
 		AMateria(std::string const &type);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


AMateria::~AMateria(void) {std::cout << ITALIC LIGHT_WHITE STRIKETHROUGH << "[AMateria Destructor called]\n" << RESET;}

AMateria::AMateria(void)
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[AMateria Default constructor called]\n" <<  RESET;
	this->type = BLUE "type:[AMateria]" RESET;
}

AMateria::AMateria(const AMateria &existObject)
{
	std::cout << ITALIC LIGHT_BLUE  << "[AMateria Copy constructor called]\n" << RESET;
	*this = existObject;
}

AMateria& AMateria::operator=(const AMateria &existObject)
{
	std::cout << ITALIC LIGHT_MAGENTA "[AMateria Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->type = existObject.type;//plus
	return (*this);
}

AMateria::AMateria(std::string const &type)
{
	std::cout << YELLOW BOLD << "[AMateria Copy type constructor called]\n" << RESET;
	this->type = "type:[" + type + "]";
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << PINK "[AMatria::use]\n" RESET;
	if (this->type == YELLOW "type:[cure]" RESET)
		std::cout << this->type + "--> * heals " << target.getName() << "’s wounds *\n";
	else if (this->type == YELLOW "type:[Ice]" RESET)
		std::cout << this->type + "--> * shoots an ice bolt at " << target.getName() << "*\n";
}
// **********  AMateria Class  ***********






// **********  Cure Class  ***********
class Cure : public AMateria
{
	public:
		~Cure(void);
		Cure(void);
		Cure(const Cure &existObject);
		Cure &operator=(const Cure &existObject);

		virtual AMateria* clone() const;
};


Cure::~Cure(void)  
{
	std::cout << ITALIC LIGHT_WHITE STRIKETHROUGH << "[Cure Destructor called]\n" << RESET;
}

Cure::Cure(void) : AMateria()
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Cure Default constructor called]\n" <<  RESET;
	this->type = YELLOW "type:[cure]" RESET;

}

Cure::Cure(const Cure &existObject) : AMateria()
{
	std::cout << ITALIC LIGHT_BLUE  << "[Cure Copy constructor called]\n" << RESET;
	*this = existObject;
}

Cure& Cure::operator=(const Cure &existObject)
{
	std::cout << ITALIC LIGHT_MAGENTA "[Cure Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->type = existObject.type;//plus
	// AMateria::operator=(existObject);//plus
	return (*this);
}

AMateria* Cure::clone() const
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Cure Clone member function called]\n" <<  RESET;
	AMateria *temp = new Cure(*this);
	return (temp);
}


// **********  Cure Class  ***********



// **********  Ice Class  ***********
class Ice : public AMateria
{
	public:
		~Ice(void);
		Ice(void);
		Ice(const Ice &existObject);
		Ice &operator=(const Ice &existObject);

		virtual AMateria* clone() const;
};


Ice::~Ice(void)  
{
	std::cout << ITALIC LIGHT_WHITE STRIKETHROUGH << "[Ice Destructor called]\n" << RESET;
}

Ice::Ice(void) : AMateria()
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Ice Default constructor called]\n" <<  RESET;
	this->type = YELLOW "type:[Ice]" RESET;

}

Ice::Ice(const Ice &existObject) : AMateria()
{
	std::cout << ITALIC LIGHT_BLUE  << "[Ice Copy constructor called]\n" << RESET;
	*this = existObject;
}

Ice& Ice::operator=(const Ice &existObject)
{
	std::cout << ITALIC LIGHT_MAGENTA "[Ice Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->type = existObject.type; // plus
	return (*this);
}


AMateria* Ice::clone() const
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Ice Clone member function called]\n" <<  RESET;
	AMateria *temp = new Ice(*this);
	return (temp);
}

// **********  Ice Class  ***********













Character::~Character(void)
{
	std::cout << ITALIC LIGHT_WHITE STRIKETHROUGH << "[Character Destructor called]\n" << RESET;

	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	Node* current = unequipedMateria.head;
	Node* nextNode = NULL;
	while (current)
	{
		AMateria	*val = static_cast<AMateria *>(current->data);
		delete val;
		nextNode = current->next;
		delete current;
		current = nextNode;
	}
}

Character::Character(void)
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Character Default constructor called]\n" <<  RESET;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->name = BLUE "name:[default Character]" RESET;
}

Character::Character(const Character &existObject)
{
	std::cout << ITALIC LIGHT_BLUE  << "[Character Copy constructor called]\n" << RESET;
	*this = existObject;
}

Character& Character::operator=(const Character &existObject)
{
	if (this != &existObject)
	{
		std::cout << ITALIC LIGHT_MAGENTA "[Character Copy assignment operator called]\n" << RESET;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
			{
				delete this->inventory[i];
				this->inventory[i] = existObject.inventory[i]->clone();
			}
		}
		this->name = existObject.name;
	}
	return (*this);
}

void		Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << RED "The AMateria you want to equip is NULL\n" RESET;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m->clone();
			std::cout << inventory[i]->getType() + ITALIC LIGHT_GREEN  " has been " DOUBLE_UNDERLINE "EQUIPED" RESET ITALIC LIGHT_GREEN  " to the index "  << i << RESET "\n";
			return ;
		}
	}
	std::cout << RED << "There is no empty slots in the inventry \n" << RESET << "\n";
}


void		Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << RED << "This index is out of range of the inventry \n" << RESET << "\n";
	else
	{
		if (this->inventory[idx] == NULL)
			std::cout << RED STRIKETHROUGH << "there is no inventory to unequipe \n" << RESET;
		else
		{
			std::cout << inventory[idx]->getType();
			std::cout << ITALIC LIGHT_GREEN " in the index " << idx << " has been " DOUBLE_UNDERLINE "UNEQUIPED\n" RESET;
			std::cout << inventory[idx] << "\n";
			unequipedMateria.listAddBack(this->inventory[idx]);
			//*********printlist******
			Node* temp = unequipedMateria.head;
			while (temp)
			{
				std::cout << "printing list\n";
				std::cout << temp->data << "\n";
				temp = temp->next;
			}
			//*********printlist******
			this->inventory[idx] = NULL;
		}
	}
}


void		Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << RED << "This index is out of range of the inventry \n" << RESET << "\n";
	else
	{
		if (this->inventory[idx] == NULL)
			std::cout << RED << "This index is out of range of the inventry \n" << RESET << "\n";
		else
			this->inventory[idx]->use(target);
	}
}


Character::Character(std::string name)
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Character name constructor called]\n" <<  RESET;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->name =  BLUE "name:[" + name + "]" RESET;
}


std::string const &	Character::getName() const
{
	return (this->name);
}


// **********  Character Class  ***********




int main()
{
	AMateria *cure = new Cure();
	std::cout << cure->getType() << "\n\n\n";

	AMateria *ice = new Ice();
	std::cout << ice->getType() << "\n\n\n";

	
	AMateria *cureClone = cure->clone();
	std::cout << cureClone->getType() << "\n";
	delete cureClone;
	std::cout << "\n\n";

	
	AMateria *iceClone = ice->clone();
	std::cout << iceClone->getType() << "\n";
	delete iceClone;
	std::cout << "\n\n";
	
	{
		Cure A;
		std::cout << A.getType();
		std::cout << "\n\n";
		
		Cure C(A);
		std::cout << C.getType() + "\n";
	}
		std::cout << "\n\n";
	{
		Ice B;
		std::cout << B.getType();
		std::cout << "\n\n";
		
		Ice D(B);
		std::cout << D.getType() + "\n";
	}
		std::cout << "\n\n";


	ICharacter *hisham = new Character("Hisham");
	std::cout << hisham->getName() << "\n";
	hisham->equip(cure);
	hisham->unequip(0);
	hisham->unequip(1);
	hisham->equip(ice);
	
	hisham->use(0, *hisham);
	hisham->use(1, *hisham);
	
	std::cout << "\n\n";


	// Character *temp;
	// Character *deia = new Character("deia");
	// std::cout << deia->getName() << "\n";
	// deia->equip(cure);
	// deia->use(0, *deia);
	// deia->use(1, *deia);
	// std::cout << "\n\n";

	// temp = static_cast<Character *>(hisham);
	// *deia = *temp;
	// delete hisham;
	delete cure;
	delete ice;
	// deia->use(0, *deia);
	// deia->use(1, *deia);
	// delete deia;
	
	delete hisham;

	// deia->use(0, *deia);
	// deia->use(1, *deia);


	

	

	// ICharacter *dice = new Character();

	// dice->use(0, *hisham);

	return (0);	
}