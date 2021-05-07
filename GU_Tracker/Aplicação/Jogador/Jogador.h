#ifndef JOGADOR_H
#define JOGADOR_H

class Jogador {

private:
	int nome;
	int id;
	int progressao;
	int metas;
	int caminhosOtimos;
	int armazenados;

public:
	void getNames();

	void getID();

	void getProgressao();

	void setProgressao();

	void getMetas();

	void setMetas();

	void getCaminhosOtimos();

	void setCaminhosOtimos();

	void getArmazenados();

	void setArmazenados();
};

#endif
