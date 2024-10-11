/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:51:35 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/10 19:10:14 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>
#include <stdint.h>

class Data 
{
	private:
		std::string name;
		std::string nickName;
		int 		age;
		bool 		marriageStatus;

	public:
		~Data(void);
		Data(void);
		Data(Data& existObject);
		Data& operator=( Data& existObject);
		Data(std::string &name, std::string &nickName, int age, bool marriageStatus);


		std::string		&getName() ;
		std::string		&getNickName() ;
		int				getAge() ;
		bool			getMarriageStatus() ;
				
		void			setName(std::string &name) ;
		void			setNickName(std::string &nickName) ;
		void			setAge(int age) ;
		void			setMarriageStatus(bool marriageStatus) ;


};

std::ostream& operator<<(std::ostream& out,  Data& data);

#endif
