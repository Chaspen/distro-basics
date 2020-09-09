#include <iostream>
#include <string>
using namespace std;

int main() {	
	///user input///
	string input; 
	cout << "What distro do you use?: "; // Type a number and press enter
	cin >> input; // Get user input from the keyboard
	
	 string distrosDeb[] = {"ubuntu", "kubuntu", "lubuntu", 
				  "xubuntu", "debian", "deepin", 
				  "raspbian", "parrot", "sparky", 
				  "mint", "popos", "elementaryos"};
	
	if (input == "ubuntu") {
		string yn;
		cout << "Your distro uses APT, is that correct?";
		cin >> yn;
		
		if (yn == "yes"){
			cout << "Ok, downloading packages...";
			system("sudo apt-get install");
		}
		else {
			
		}
	}


}
