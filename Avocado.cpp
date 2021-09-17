#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
long double base = 10, exponent = 23;
long double Avogadro = 6.022*pow(base,exponent);

long double mol = 0;
float u = 0;
long double g = 0;
long double particles = 0;

void banner() {
	system("color a");
	std::cout << R"(
     ___   ____    ____  ______     ______     ___       _______   ______   
    /   \  \   \  /   / /  __  \   /      |   /   \     |       \ /  __  \  
   /  ^  \  \   \/   / |  |  |  | |  ,----'  /  ^  \    |  .--.  |  |  |  | 
  /  /_\  \  \      /  |  |  |  | |  |      /  /_\  \   |  |  |  |  |  |  | 
 /  _____  \  \    /   |  `--'  | |  `----./  _____  \  |  '--'  |  `--'  | 
/__/     \__\  \__/     \______/   \______/__/     \__\ |_______/ \______/                                                                                  
)" << '\n';
	cout << "Coded by Terraminator: https://github.com/Terraminator" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}

long double mol_to_g(long double mol, float u) {
	long double gs = u * mol;
	return(gs);
}

long double g_to_mol(long double g, float u) {
	long double ug = Avogadro * u;
	long double particles = g / ug;
	long double mol = particles * Avogadro;
	return(mol);
}

long double mol_to_particle(long double mol) {
	long double particle = Avogadro / mol;
	return(particle);
}

long double particle_to_mol(long double particle) {
	long double mol = particle * Avogadro;
	return(mol);
}

int main() {
	banner();
	unsigned int func = 0;
	cout << "Type: " << endl <<
		"1 to convert mol to gram" << endl <<
		"2 to convert gram to mol" << endl <<
		"3 to convert mol to particle" << endl <<
		"4 to convert particle to mol" << endl <<
		"Function: ";
	cin >> func;
	switch (func) {
	default:
		cout << endl;
		cout << "Cancelling ..." << endl;
		exit(0);
		break;

	case(1):
		mol = 0;
		cout << "Enter Mol: ";
		cin >> mol;
		cout << endl;
		u = 0;
		cout << "Enter weigth of Atom in u: ";
		cin >> u;
		cout << endl;
		g = mol_to_g(mol, u);
		cout << "Gram: " << g << endl;
		break;

	case(2):
		g = 0;
		cout << "Enter Gram: ";
		cin >> g;
		cout << endl;
		u = 0;
		cout << "Enter weigth of Atom in u: ";
		cin >> u;
		cout << endl;
		mol = g_to_mol(g, u);
		cout << "Mol: " << mol << endl;
		break;

	case(3):
		mol = 0;
		cout << "Enter Mol: ";
		cin >> mol;
		cout << endl;
		particles = mol_to_particle(mol);
		cout << "Particles: " << particles << endl;
		break;

	case(4):
		particles = 0;
		cout << "Enter Particles: ";
		cin >> particles;
		cout << endl;
		mol = particle_to_mol(particles);
		cout << "Mol: " << mol << endl;
		break;
	}
	cout << endl << endl << endl;
	cout << "PRESS ENTER TO FINISH" << endl;
	cin.get();
	return(0);
}