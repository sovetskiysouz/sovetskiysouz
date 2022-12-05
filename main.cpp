#include "TXLib.h"
void titra()
{
      txSetColor     (TX_RED);
      txSetFillColor (TX_RED);


      txSelectFont ("Arial", 40, 0, FW_BOLD);
      txDrawText   (100, 250, 700, 550, "Котики говорят:  Мяу!,\n"
                                        "Собачки говорят: Гав!,\n\n"
                                        "Программисты говорят: Ты КОММИТ НА ГИТХАБ СДЕЛАЛ?!?!!\n"
                                        "Котики говорят:  Мяу!,\n"
                                        "Котики говорят:  Мяу!,\n"
                                        "Котики говорят:  Мяу!,\n"
                                        "Котики говорят:  Мяу!,\n"
                                        "Котики говорят:  Мяу!,\n"


                    );

}
void soldat (int x);
{
txCircle(100,320,20);
txRectangle(90,340,100,440);
  POINT leftLeg[4] = {{90,340}, {20,430}, {40,430}, {80,360}};
          txPolygon (leftLeg, 4);

  POINT leftLeg[4] = {{110,340}, {160,430}, {140,430}, {110,380}};
          txPolygon (leftLeg, 4);

  POINT leftLeg[4] = {{90,440}, {20,530}, {40,530}, {100,460}};
          txPolygon (leftLeg, 4);

  POINT leftLeg[4] = {{110,440}, {160,540}, {140,540}, {100,450}};
          txPolygon (leftLeg, 4);




}
//void sirota (int y);
//{







//}

void stenka (int y)
{
txSetColor (TX_RED);
txSetFillColor (TX_RED);
txRectangle(290,y+200-200,50,y+500-200) ;

}

void CHELOVEK3(int x,int y)
{
    //x=300 y=350


   txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txRectangle(x+290-300,y+350-350,x+310-300,y+470-350);
    POINT leftLeg[4] = {{x+290-300, y+470-350}, {x+310-300, y+470-350}, {x+240-300,y+ 570-350}, {x+220-300, y+570-350}};
          txPolygon (leftLeg, 4);
    POINT rightLeg[4] = {{x+290-300, y+470-350}, {x+310-300,y+ 470-350}, {x+360-300,y+ 570-350}, {x+340-300, y+570-350}};
          txPolygon (rightLeg, 4);
    POINT leftrukibazuki[4] = {{x+290-300,y+370-350}, {x+310-300,y+370-350}, {x+240-300,y+470-350}, {x+220-300, y+470-350}};
          txPolygon (leftrukibazuki, 4);
    POINT rightrukibazuki[4] = {{x+290-300, y+370-350}, {x+310-300,y+370-350}, {x+360-300,y+470-350}, {x+340-300,y+470-350}};
          txPolygon (rightrukibazuki, 4);


}

void drawPulya2(int x, int y)
{
 //x=240 y=510
 txPie (x, y, x+80, y+20, 90, 180);

}

void CHELOVEK3OLEGA()
{


   txSetColor (TX_BLACK);
   txSetFillColor (TX_BLACK);
   txRectangle(270,510,290,570);
   txRectangle(240,510,370,530);
   txRectangle(270,510,330,510);
    txRectangle(280,490,330,510);
   txRectangle(280,490,330,510);
   POINT dddd[4] = {{280,530}, {300,520}, {330,540}, {310,560}};
          txPolygon (dddd, 4);
   txCircle(400,490, 30);
   POINT fgfhfh[4] = {{400,520}, {410,510}, {440,520}, {440,540}};
   txPolygon (fgfhfh, 4);
   txRectangle(430,510,590,540);
    POINT nnnn[4] = {{580,510}, {590,520}, {690,480}, {690,470}};
   txPolygon (nnnn, 4);
   txRectangle(590,530,680,540);
   txRectangle(350,510,370,560);
   POINT nn[6] = {{370,540}, {400,560}, {430,530}, {450,530}, {400,570}, {360,550}};
   txPolygon (nn, 6);

}
void golovanemcha(COLORREF Col,int y)
{
    txSetColor (TX_BLACK);
    txSetFillColor (Col);
    txCircle(290,y+270-270, 25);
}

void CHELOVEK(int x,int y)
{
    //x=300 y=350


   txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle(x+290-300,y+350-350,x+310-300,y+470-350);
    POINT leftLeg[4] = {{x+290-300, y+470-350}, {x+310-300, y+470-350}, {x+240-300,y+ 570-350}, {x+220-300, y+570-350}};
          txPolygon (leftLeg, 4);
    POINT rightLeg[4] = {{x+290-300, y+470-350}, {x+310-300,y+ 470-350}, {x+360-300,y+ 570-350}, {x+340-300, y+570-350}};
          txPolygon (rightLeg, 4);
    POINT leftrukibazuki[4] = {{x+290-300,y+370-350}, {x+310-300,y+370-350}, {x+240-300,y+470-350}, {x+220-300, y+470-350}};
          txPolygon (leftrukibazuki, 4);
    POINT rightrukibazuki[4] = {{x+290-300, y+370-350}, {x+310-300,y+370-350}, {x+360-300,y+470-350}, {x+340-300,y+470-350}};
          txPolygon (rightrukibazuki, 4);



}
void CHELOVEK2(int x,int y)
{
    //x=300 y=350
    txSetColor (RGB(10,72,0));
    txSetFillColor (RGB(10,72,0));
    txCircle(x+300-300,y+350-350, 25);
    txRectangle(x+290-300,y+350-350,x+310-300,y+470-350);

    POINT leftLeg[4] = {{x+290-300, y+470-350}, {x+310-300, y+470-350}, {x+240-300,y+ 570-350}, {x+220-300, y+570-350}};
          txPolygon (leftLeg, 4);
    POINT rightLeg[4] = {{x+290-300, y+470-350}, {x+310-300,y+ 470-350}, {x+360-300,y+ 570-350}, {x+340-300, y+570-350}};
          txPolygon (rightLeg, 4);
    POINT leftrukibazuki[4] = {{x+200-300,y+370-350}, {x+200-300,y+390-350}, {x+300-300,y+390-350}, {x+300-300, y+370-350}};
          txPolygon (leftrukibazuki, 4);
    POINT rightrukibazuki[4] = {{x+290-300, y+370-350}, {x+310-300,y+370-350}, {x+360-300,y+470-350}, {x+340-300,y+470-350}};
          txPolygon (rightrukibazuki, 4);

    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle(x+160-300,280,x+200-300,300);
    txRectangle(x+190-300,300,x+200-300,310);


}
void dom(int x,int y, double r)
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_RED);
    txRectangle (x, y-300*r, x+220, y);
    POINT tri[3] = {{x, y-300*r}, {x+110, y-410*r}, {x+220,y-300*r}};
    txPolygon (tri, 3);

    txSetColor (TX_BLACK);
    txSetFillColor(RGB(139,85,58));
    txRectangle(x+200,y-140*r,x+140,y);

    txSetColor (TX_BLACK);
    txSetFillColor(TX_BLUE);
    txRectangle(x+30,y-200*r,x+80,y-120*r);
}
void FON(COLORREF Col)
{
    txSetColor(RGB(6,6,6));
    txSetFillColor(Col);
    txRectangle(0,0,800,600);
}

void raketazuzuzuzu(int x)
{
    txSetColor(RGB(6,6,6));
    txSetFillColor(RGB(6,6,6));
    txEllipse(x+430-430,210,x+730-430,420);
    txRectangle(x+730-430,220,x+800-430,420);
}

void raketazuzuzuzu1(int x)
{
    txSetColor(RGB(6,6,6));
    txSetFillColor(RGB(6,6,6));
    txEllipse(x+430-430,210,x+730-430,420);
    txRectangle(x+360-430,220,x+430-430,420);
}
void drawLegs(int x, int y1, int y2)
{
    txSetColor(RGB(6,6,6));
    txSetFillColor(RGB(6,6,6));
    txRectangle(x+200-200,y1+480-550, x+250-200, y1+550-550);
    txRectangle(x+290-200,y2+480-550, x+340-200, y2+550-550);
}

void drawPulya(int x, int y)
{
 //x=100 y=100
 txPie (x, y, x+80, y+20, 90, 180);

}


int main()
{
    txCreateWindow (800, 600);
    int xRaketa=800;
    int drrem;
    int xDom = 160;
    int yDom = 550;
    double rDom = 1;
    int yLegs1 = 550;
    int yLegs2 = 550;
    int xLegs = 200;
    int xCHELOVEK =290;
    int yCHELOVEK =270;
    int xCHELOVEK2 =600;
    int yCHELOVEK2 =270;
    int xPULYTOP=100;
    int yOLOKA=270;
    int STENA228=200;
    int xCHELOVEK3=290;
    int yCHELOVEK3=270;
    int xPULYTOP2=240;
    int yPULYTOP2=510;
    int ffffff=0;





txClear();
titra();
txSleep(1000);




    while(xRaketa>-500)
    {
        txBegin();
        FON(TX_BLUE);
        raketazuzuzuzu(xRaketa);

        xRaketa=xRaketa-100;
        txSleep(1);
        txEnd();
    }


/*    while(yDom>480)
    { txBegin();
        FON(TX_BLUE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        yDom-=5;
        txSleep(10);
  txEnd();  }

    while(yLegs1>515)
    { txBegin();TX_BLUE
        FON(TX_BLUE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        yLegs1-=5;
        txSleep(10);
    txEnd();}

    while(yLegs1<550)
    { txBegin();
        FON(TX_BLUE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        yLegs1+=5;
        txSleep(10);
    txEnd();}

    while(yLegs2>515)
    { txBegin();
        FON(TX_BLUE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        yLegs2-=5;
        txSleep(10);
    txEnd();}

    while(yLegs2<550)
    { txBegin();
        FON(TX_BLUE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        yLegs2+=5;
        txSleep(10);
    txEnd();}

    while(rDom>0.5)
    { txBegin();
        FON(TX_BLUE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, rDom);
        rDom-=0.05;
        txSleep(10);
txEnd();    }

    while(yDom>-500)
    { txBegin();
        FON(TX_BLUE);
        drawLegs(200, yLegs1, yLegs2);
        dom(xDom,yDom, 1);
        yDom-=15;
        txSleep(10);
    txEnd();}


    while(xLegs<899)
    { FON(TX_BLUE);
     drawLegs(xLegs, yLTX_BLUEegs1, yLegs2);
     xLegs=xLegs+10;
     txSleep(10);
    }

    xRaketa=-100;

    while(xRaketa<179)
{
    FON(TX_BLUE);
    CHELOVEK(xCHELOVEK,yCHELOVEK);
    raketazuzuzuzu1(xRaketa);
    xRaketa=xRaketa+10;
    txSleep(50);
}

   while(yCHELOVEK>170)
{
    FON(TX_BLUE);
    CHELOVEK(xCHELOVEK,yCHELOVEK);
    raketazuzuzuzu1(xRaketa);
    yCHELOVEK=yCHELOVEK-10;
    txSleep(50);
}

while(yCHELOVEK<170)
{
    FON(TX_BLUE);
    CHELOVEK(xCHELOVEK,yCHELOVEK);
    raketazuzuzuzu1(xRaketa);
    xCHELOVEK=xCHELOVEK+10;
    xRaketa=xRaketa+10;
    txSleep(50);
}
*/

xPULYTOP = xCHELOVEK2-180;
while (xPULYTOP > 270)
{   txBegin();
    FON(TX_BLUE);
    stenka(STENA228);
    CHELOVEK(xCHELOVEK,yCHELOVEK);
    CHELOVEK2(xCHELOVEK2,yCHELOVEK2);
    golovanemcha(TX_BLACK,yOLOKA);
    drawPulya(xPULYTOP, yCHELOVEK2+10);

    xPULYTOP=xPULYTOP-20;
    txSleep(1);
    txEnd();
}

while (ffffff < 20)
{
 txBegin();
    FON(TX_BLUE);
    stenka(STENA228);
   CHELOVEK(xCHELOVEK,yCHELOVEK);
   CHELOVEK2(xCHELOVEK2,yCHELOVEK2);
    golovanemcha(TX_RED,yOLOKA);
    drawPulya(xPULYTOP, yCHELOVEK2+10);
    ffffff=ffffff+10;

    txSleep(1);
    txEnd();



    while (xPULYTOP2>-99)
{  txBegin();

    FON(TX_BLUE);
    CHELOVEK3OLEGA();
    drawPulya2( xPULYTOP2,yPULYTOP2);
    //CHELOVEK(xCHELOVEK,yCHELOVEK);
    //golovanemcha(TX_BLACK,yOLOKA);



   txEnd();
}



while (xPULYTOP2<-90)
{
  FON(TX_BLUE);
  CHELOVEK3OLEGA();
  drawPulya2(xPULYTOP2,yPULYTOP2);
}




txTextCursor (false);
return 0;

}

}






