#include<iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insere ( string stnome, string stcor, int stpot, int stvelMax){
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelMax;
        vel = 0;
    }
    void mostra(){
    cout << nome << "\n";
    cout << cor << "\n";
    cout << pot << "\n";
    cout << vel << "\n";
    cout << velMax << "\n";
    cout << "\n=========================================\n";

    }

    void mudaVel(int mv){
        vel = mv;
        if(vel > velMax){
            vel = 0;
        }
        if(vel < 0){
            velMax = 0;
        }
    }

};
int main(){
    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4, car5;

    carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4; carros[4] = car5;

    carros[0].insere("carro 1", "preto", 450,350);
    carros[1].insere("carro 2","vermelho", 200,200);
    carros[2].insere("carro 3", "prata", 150,200);
    carros[3].insere("carro 4","azul", 200, 350);
    carros[4].insere("carro5", "branco", 200, 80);

    for(int i = 0; i < 5; i++){
        carros[i].mostra();
    }
    return 0;
}
