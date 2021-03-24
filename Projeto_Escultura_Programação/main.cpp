#include <iostream>
#include <fstream>
#include "sculptor.h"


using namespace std;

int main()
{
    sculptor pato(90,90,90);

    pato.setColor(0.929, 0.823, 0.027,1);
    //cabeça
    pato.putBox(60,80,60,80,60,70);
    //corpo
    pato.putBox(65,75,55,60,60,70);
    pato.putBox(60,75,50,55,60,70);

    //Rabo
    pato.setColor(1, 1, 0,1);
    pato.putBox(57,60,51,54,62,68);

    //Água
    pato.setColor(0.113, 0.752, 0.788,1);
    pato.putBox(50,90,47,50,50,80);
    pato.cutBox(50,51,49,50,50,80);
    pato.cutBox(50,52,48,49,50,80);
    pato.cutBox(50,53,47,48,50,80);
    pato.cutBox(89,90,49,50,50,80);
    pato.cutBox(88,90,48,49,50,80);
    pato.cutBox(87,90,47,48,50,80);


    //Olho lado I
    pato.setColor(0,0,0,1);
    pato.putBox(65,70,70,75,70,71);
    pato.setColor(1,1,1,1);
    pato.putBox(65,75,65,70,70,71);
    pato.putBox(70,75,70,75,70,71);

    //Olho lado II
    pato.setColor(0,0,0,1);
    pato.putBox(65,70,70,75,59,60);
    pato.setColor(1,1,1,1);
    pato.putBox(65,75,65,70,59,60);
    pato.putBox(70,75,70,75,59,60);

    //Detalhe Olho
    pato.setColor(1,1,1,1);
    pato.putVoxel(67,71,70);
    pato.putVoxel(67,71,59);

    //bico
    pato.setColor(0.980, 0.356, 0,1);
    pato.putBox(80,84,65,69,62,68);

    pato.limpaVoxels();
    pato.writeOFF((char*)"Pato.off");


    return 0;
}
