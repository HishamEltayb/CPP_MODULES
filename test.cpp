/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:46:34 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/05 10:20:07 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main(int ac, char **av)
{
	int a = 42;

	double b = a;
	
	std::cout << a << "\n";
	std::cout << b << "\n";
}









VBoxManage modifyvm "macOS Catalina" --cpuidset 00000001 000306a9 00020800 80000201 178bfbff
VBoxManage setextradata "macOS Catalina" "VBoxInternal/Devices/efi/0/Config/DmiSystemProduct" "iMac11,3"
VBoxManage setextradata "macOS Catalina" "VBoxInternal/Devices/efi/0/Config/DmiSystemVersion" "1.0"
VBoxManage setextradata "macOS Catalina" "VBoxInternal/Devices/efi/0/Config/DmiBoardProduct" "Iloveapple"
VBoxManage setextradata "macOS Catalina" "VBoxInternal/Devices/smc/0/Config/DeviceKey" "ourhardworkbythesewordsguardedpleasedontsteal(c)AppleComputerInc"
VBoxManage setextradata "macOS Catalina" "VBoxInternal/Devices/smc/0/Config/GetKeyFromRealSMC" 1



sudo dscl . -create /Users/aliali;sudo dscl . -create /Users/aliali UserShell /bin/bash;sudo dscl . -create /Users/aliali RealName "Aliali User";sudo dscl . -create /Users/aliali UniqueID "512"  # Ensure this is unique;sudo dscl . -create /Users/aliali PrimaryGroupID 20;sudo dscl . -create /Users/aliali NFSHomeDirectory /Users/aliali;sudo dscl . -passwd /Users/aliali aliali;sudo createhomedir -c -u aliali



https://chatgpt.com/share/6702b433-caf4-8006-a208-4d28f4edd81b