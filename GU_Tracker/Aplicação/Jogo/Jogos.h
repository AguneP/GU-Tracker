#ifndef JOGOS_H
#define JOGOS_H

class Jogos {

private:
	int nome;
	int id;
	int API;

public:
	void getInfo();

	void getNome();

	void getID();

	void calcCaminhosExtenso();

	void calcCaminhoRapido();
};

#endif
