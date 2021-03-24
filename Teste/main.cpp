#include <iostream>
#include <fstream>
#include "sculptor.h"


using namespace std;

int main()
{
    //PROGRAMA DE TESTE DAS FUNCIONALIDADES

    sculptor FiguraGeometrica(60, 40, 55);

    FiguraGeometrica.setColor(1,0,0,1);
    FiguraGeometrica.putVoxel(5,5,10);



    FiguraGeometrica.setColor(1,1,0,1);
    FiguraGeometrica.putBox(10,15,12,33,1,8);
    FiguraGeometrica.cutBox(11,14,12,33,1,8);



    FiguraGeometrica.setColor(1,1,1,1);
    FiguraGeometrica.putSphere(10,10,5,3);

    FiguraGeometrica.putEllipsoid(10,15,5,3,4,5);

    FiguraGeometrica.writeOFF((char*)"TesteDasFiguras.off");
    return 0;
}
