#include<iostream>
#include<string>
#include "/data/data/com.termux/files/home/storage/GIT-projet/CompteBancaire/CompteBancaire.hpp"
int main()
{
	CompteBancaire C1("Ridouane",5000.00);
	C1.AfficherCompteBancaire();
	C1.CrediterCompteBancaire(5000);
	C1.AfficherCompteBancaire();
	return 0;
}
