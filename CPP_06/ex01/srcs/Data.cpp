/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:52:42 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/10 16:19:57 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::~Data(void){}
Data::Data(void){}
Data::Data(Data& existObject){*this = existObject;}
Data::Data(std::string &name, std::string &nickName, int age, bool marriageStatus) : name(name), nickName(nickName), age(age), marriageStatus(marriageStatus) {}

Data& Data::operator=(Data& existObject) 
{
	if (this != &existObject)
	{
		this->name = existObject.name;
		this->nickName = existObject.nickName;
		this->age = existObject.age;
		this->marriageStatus = existObject.marriageStatus;
	}
	return(*this);
}


std::string		 &Data::getName()  {return (this->name);}
std::string		 &Data::getNickName()  {return (this->nickName);}
int				 Data::getAge()  {return (this->age);}
bool			 Data::getMarriageStatus()  {return (this->marriageStatus);}

void			 Data::setName(std::string &name) {this->name = name;}
void			 Data::setNickName(std::string &nickName) {this->nickName = nickName;}
void			 Data::setAge(int age) {this->age = age;}
void			 Data::setMarriageStatus(bool marriageStatus) {this->marriageStatus = marriageStatus;}



std::ostream& operator<<(std::ostream& out,  Data& data)
{
	out << YELLOW BOLD "---------  DATA  -------------\n" RESET;
	out << WHITE BOLD "Name		=	" << data.getName() << "\n";
	out << "NickName	=	" << data.getNickName() << "\n";
	out << "Age		=	" << data.getAge() << "\n";
	if (data.getMarriageStatus() == false)
		out << "MarriageStatus	=	" << "❌Not Married❌" << "\n";
	else
		out << "MarriageStatus	=	" << "✅Married✅" << "\n";
	out << YELLOW BOLD "---------  DATA  -------------\n" RESET;
    return (out);
}