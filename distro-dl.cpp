#include <iostream>
#include <string>
#include <algorithm>
#include <regex>
using namespace std;

int main() {	
	///user input///
	string input; 
	cout << "What distro do you use?: "; // Type a number and press enter
	cin >> input; // Get user input from the keyboard
	
	string distrosDeb[12] = {"ubuntu", "kubuntu", "lubuntu", 
				  "xubuntu", "debian", "deepin", 
				  "raspbian", "parrot", "sparky", 
				  "mint", "popos", "elementaryos"};
				  
	string distrosArch[7] = {"arch", "manjaro", "chakra", 
				   "archbang", "parabola", 
				   "endeavouros", "archlabs"};
				   
	string distrosFed[3] = {"fedora", "centos", "redhat"};
	

    if (std::find(std::begin(distrosDeb), std::end(distrosDeb), input) != std::end(distrosDeb)) {
		string yn;
		cout << "Your distro uses APT, is that correct?: ";
		cin >> yn;
		
		if (yn == "yes"){
			cout << "Ok, downloading packages...";
			system("sudo apt-get install");
		}
	}
	else if(std::find(std::begin(distrosArch), std::end(distrosArch), input) != std::end(distrosArch)) {
		string yn;
		cout << "Your distro uses Pacman, is that correct?: ";
		cin >> yn;
		
		if (yn == "yes"){
			cout << "Ok, downloading packages...";
			system("sudo apt-get install");
		}

	}
	else if (std::find(std::begin(distrosFed), std::end(distrosFed), input) != std::end(distrosFed)) {
		string yn;
		cout << "Your distro uses RPM, is that correct?: ";
		cin >> yn;
		
		if (yn == "yes"){
			cout << "Ok, downloading packages...";
			system("sudo apt-get install");
		}
	}
}
