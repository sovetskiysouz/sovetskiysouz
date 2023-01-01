#include "TXLib.h"
void titra999(int y)
{
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txSelectFont ("Arial", 40, 0, FW_BOLD);
    txDrawText   (0, y+0-0, 800, y+600-0, "режисер:Данил Александрович\n"
    "главный помошник:Сергей Николаевич\n"
    "помошник:папа\n"
    "спонсор:мама\n"
    "в главных ролях:\n"
     "солдат:Майкл Джексон\n"
     "ребенок:Сергей Мавродий\n"
     "второстепенные роли:\n"
     "фашист:Барак Обама\n"
     "фашист в начале:Борис Ельцин\n"
     "солдат в начале:Ииосиф Сталин\n"
     "небо:небо\n"
     "трава:трава\n"
);
}

void p(int x, int y1, int y2)
{
    txSetColor(TX_WHITE);
    txSetFillColor (TX_BLACK);
    POINT leftru[4] = {{x+420-420,y1+170-170}, {580,170}, {580,550}, {x+420-420,y2+550-550}};
    txPolygon (leftru, 4);
}

void drawPulya4(int x, int y)
{
//x=420 y=320
    txPie (x, y, x+30, y-30, -90, 180);

}

void titra9992()
{
    txSetColor     (TX_WHITE);
    txSetFillColor (TX_BLACK);

    txSelectFont ("Arial", 40, 0, FW_BOLD);
    txDrawText   (0,0, 800, 600, "Наши герои сбежали из плена, застрелив немца\n"
    "1945 год\n"
    "СССР победил нацитскую Германию\n"
    "Все советские пленники были освобождены\n"
    "Солдат с ребенком жили в спокойствии и счастье\n"
    "Так закончилась этот мультфильм\n"
    "Спасибо за просмотр!\n"
);
}

void titra9991()
{
    txSetColor     (TX_WHITE);
    txSetFillColor (TX_BLACK);

    txSelectFont ("Arial", 40, 0, FW_BOLD);
    txDrawText   (0,0, 800, 600, "Солдата застрелил фашист,\n"
    "а ребенка взяли обратно в плен\n"
    "1945 год\n"
    "СССР победил нацисткую Германию\n"
    "Все советские пленники, в том числе и ребенок, были освобождены\n"
    "Ребенок вырос \n"
    "и не забывал храброго солдата\n"
    "Спасибо за просмотр!\n"
);
}

void drawPulya3(int x, int y)
{
//x=510 y=310
    txPie (x, y, x-30, y+30, 90, 180);

}

void drawPulya1(int x, int y)

{
  //x=100 y=100
    txPie (x, y, x+80, y+20, 90, 180);

}

void fascist(int x)
{         //x=300
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle(x+130-300,290,x+150-300,413);
    txCircle(x+140-300,280, 25);
    POINT leftLeg[4] = {{x+130-300, 400}, {x+90-300,500}, {x+110-300,500}, {x+140-300,410}};
    txPolygon (leftLeg, 4);
    POINT rightLeg[4] = {{x+150-300,400}, {x+220-300,500}, {x+200-300,500}, {x+140-300, 410}};
    txPolygon (rightLeg, 4);
    txRectangle (x+150-300,300,x+240-300,320);
    POINT leftru[4] = {{x+130-300, 310}, {x+90-300,400}, {x+110-300,400}, {x+140-300,340}};
    txPolygon (leftru, 4);
    txRectangle (x+240-300,290,x+250-300,320);
    txRectangle (x+240-300,290,x+270-300,310);
}
void CHELOVEK21(int x,int y)
{
    //x=300 y=350
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
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
void window()
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLUE);
    txRectangle(80,210,210,310);
    txLine(100,200,100,320);
    txLine(140,200,140,320);
    txLine(180,200,180,320);
}
void plen(int x, float r)
{
    txCircle(x+10*r,210*r,50*r);
    txRectangle(x,250,x+20*r,380*r);
    POINT leftruka[6] = {{x,270}, {x-60*r,310*r}, {x-40*r,350*r}, {x-30*r,340*r}, {x-40*r,310*r}, {x+70*r,280*r}};
    txPolygon (leftruka, 6);
    POINT rightruka[6] = {{x+20*r,270*r}, {x+80*r,310*r}, {x+70*r,320*r}, {x+50*r,340*r}, {x+60*r,320*r}, {x+20*r,280*r}};
    txPolygon (rightruka, 6);
    POINT lefthog[4] = {{x,380*r}, {x-40*r,510*r}, {x-20*r,510*r}, {x+10*r,410*r}};
    txPolygon (lefthog, 4);
    POINT righthog[4] = {{x+20*r,380*r}, {x+70*r,510*r}, {x+70*r,510*r}, {x+10*r,410*r}};
    txPolygon (righthog, 4);
    txCircle(x,350*r,20*r);
    txCircle(x+10*r,210*r,50*r);
    txPie (x-60*r,360*r,x-10*r,390*r, 180, 180);
}

void dialoboma(const char* text,int x,int y,COLORREF Col_Text, COLORREF Col_Fill)
{         //400,300
    txSetColor (Col_Text);
    txSetFillColor (Col_Fill);
    txEllipse(x,y,x+300,y+200);
    txSelectFont("Comic Sans MS",30);
    txDrawText (x,y,x+300,y+200,text);
}

void titra4()
{
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);

    txSelectFont ("Arial", 40, 0, FW_BOLD);
    txDrawText   (100, 250, 700, 550, "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!\n"
    "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!\n\n"
    "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!!!\n"
     "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!,\n"
     "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!!,\n"
     "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!!,\n"
     "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!,\n"
     "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!!,\n"
);
}

void titra2()
{
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_RED);
    txSelectFont ("Arial", 40, 0, FW_BOLD);
    txSetFillColor (TX_BLACK);
    txDrawText   (100, 0, 700, 590, "Солдат решил отвести ребенка в тыл Красной армиию.\n"
    "Ему было жалко ребенка,\n"
    "он хотел защитить его\n"
     "от ужасов войны\n"
     "Они преодаливали трудности,\n"
     "но в один момент они наткнулись на фашистов\n"
     "и их взяли в плен\n"

);
}

void titra1()
{
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);

    txSelectFont ("Arial", 40, 0, FW_BOLD);
    txDrawText   (0, 0, 800, 600,
    "Название:ПОДВИГ\n"
    "1944 год\n"
    "Середина 2 мировой войны\n"
    "Каждый старался ради победы\n"
    "Не все выживали\n"
    "Но мультфильм не о ВОЙНЕ\n"
    "Поэтому,\n"
    "Приятного просмотра!\n"
);
}

void ttt1()
{
    txSetColor (RGB(64,38,39));
    txSetFillColor (RGB(64,38,39));
    txRectangle(0,0,800,600);
}

void ttt()
{
    txSetColor (TX_BLACK);
    txSetFillColor (RGB(64,38,39));
    txRectangle(0,460,800,600);

}

void trava()
{
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txRectangle(0,460,800,600);

}

void titra3()
{
    txSetColor     (TX_RED);
    txSetFillColor (TX_RED);


    txSelectFont ("Arial", 40, 0, FW_BOLD);
    txDrawText   (100, 250, 700, 550, "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!,\n"
    "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!!,\n\n"
    "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!\n"
     "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!,\n"
     "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!,\n"
     "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!,\n"
      "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!,\n"
      "ТИТРЫ НЕГОТОВЫ!!!!!!!!!!!!,\n"


 );
}

void soldat (int x, int y, float raz)
{           //x=160 y=320
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txCircle(-60*raz+x,y,20*raz);
    txRectangle(-70*raz+x,y+20*raz,-50*raz+x,y+120*raz);
    POINT leftruka[4] = {{x-50*raz,y+20*raz}, {x,y+110*raz}, {-20*raz+x,y+110*raz}, {-50*raz+x,y+50*raz}};
    txPolygon (leftruka, 4);
    POINT rightruka[4] = {{-70*raz+x,y+20*raz}, {x+-140*raz,y+110*raz}, {x+-120*raz,y+110*raz}, {-70*raz+x,y+50*raz}};
    txPolygon (rightruka, 4);
    POINT  leftnoga [4] = {{-50*raz+x,y+120*raz},{x,y+220*raz}, {-20*raz+x,y+220*raz}, {-60*raz+x,y+130*raz}};
    txPolygon (leftnoga, 4);
    POINT rightnoga[4] = {{-70*raz+x,y+120*raz}, {-140*raz+x,y+220*raz}, {-120*raz+x,y+220*raz}, {-50*raz+x,y+120*raz}};
    txPolygon (rightnoga, 4);
}

void stenka (int y)
{
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txRectangle(290,y+200-200,50,y+500-200) ;

}

void CHELOVEK3(int x,int y)
{
    //x=300 y=350


    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
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


    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
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
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
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
    int xCHELOVEK2 =510;
    int yCHELOVEK2 =280;
    int xPULYTOP=100;
    int yOLOKA=270;
    int STENA228=200;
    int xCHELOVEK3=290;
    int yCHELOVEK3=270;
    int xPULYTOP2=510;
    int yPULYTOP2=280;
    int ffffff=0;
    int xCHELC=0;
    int xPlen=370;
    int xfascist=300;
    int secund =0;
    int xPULYTOP3=240;
    int yPULYTOP3=510;
    int xPULYTOP4=240;
    int yPULYTOP4=510;
    int titi3=0;
    int titi4=0;
    int xPULYTOP5=420;
    int yPULYTOP5=310;
    int xP=420;
    int y1P=170;
    int y2P=550;
    int titrue=0;
    int l=0;



        txClear();
        FON(TX_WHITE);
        titra1();
        txSleep(15000);

        while(xRaketa>-500)
        {
        txBegin();
        FON(TX_BLUE);
        raketazuzuzuzu(xRaketa);
        trava();

        xRaketa=xRaketa-100;
        txSleep(1);
        txEnd();
}

       xPULYTOP = xCHELOVEK2-180;

       while (xPULYTOP > 270)
       {
       txBegin();
       FON(TX_BLUE);
       trava();
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
       trava();
       stenka(STENA228);
       CHELOVEK(xCHELOVEK,yCHELOVEK);
       CHELOVEK2(xCHELOVEK2,yCHELOVEK2);
       golovanemcha(TX_RED,yOLOKA);
       drawPulya(xPULYTOP, yCHELOVEK2+10);
       ffffff=ffffff+10;

       txSleep(1);
       txEnd();
       }

       while (xPULYTOP2<-90)
       {
       FON(TX_BLUE);
       trava();
       CHELOVEK3OLEGA();
       drawPulya2(xPULYTOP2,yPULYTOP2);
       }

       while (xCHELC<950)
       {
       txBegin();
       FON(TX_BLUE);
       trava();
       soldat(xCHELC, 320, 1);

       xCHELC=xCHELC+10;
       txSleep(1);
       txEnd();
       }

       xCHELC=0;
       int xCHELC1=950;

       while (xCHELC<400)
       {
       txBegin();
       FON(TX_BLUE);
       trava();
       soldat(xCHELC,320, 1);
       soldat(xCHELC1-50, 410, 0.8);

       xCHELC=xCHELC+10;
       xCHELC1-=10;
       txSleep(1);
       txEnd();
       }

       dialoboma("Стой!Кто идет?!",400,200,TX_GREEN, TX_BLACK);
       txSleep(1000);
       dialoboma("Свои!",400,200,TX_BLACK, TX_GREEN);
       txSleep(1000);
       dialoboma("Где родители?",400,200,TX_GREEN, TX_BLACK);
       txSleep(1000);
       dialoboma("Погибли,защищая родину...",400,200,TX_BLACK,TX_GREEN);
       txSleep(1000);
       dialoboma("ладно,пошли за мной",400,200,TX_GREEN, TX_BLACK);
       txSleep(1000);

       while (xCHELC<950)
       {
       txBegin();
       FON(TX_BLUE);
       trava();
       soldat(xCHELC,320, 1);
       soldat(xCHELC1-50, 410, 0.8);

       xCHELC=xCHELC+10;
       xCHELC1=xCHELC1+10;
       txSleep(1);
       txEnd();
       }


       txClear();
       titra2();
       txSleep(15000);

       while (xCHELC<950)
       {
       txBegin();
       FON(TX_BLUE);
       trava();
       soldat(xCHELC,320, 1);
       soldat(xCHELC1-50, 410, 0.8);

       xCHELC=xCHELC+10;
       xCHELC1=xCHELC1+10;
       txSleep(1);
       txEnd();
       }

       xCHELC=400;
       xCHELC1=600;

       while( xCHELC<800)
       {
       txBegin();
       ttt1();
       ttt();
       window();
       soldat(xCHELC,320, 1);
       soldat(xCHELC1-50, 410, 0.8);

       xCHELC=xCHELC+10;
       txSleep(1);
       txEnd();
       }

       dialoboma("Дверь открыта!",400,100,TX_GREEN, TX_BLACK);
       txSleep(1000);
       dialoboma("пойдем быстрее!",400,100,TX_BLACK, TX_GREEN);
       txSleep(1000);

       while( xCHELC1<500)
       {
       txBegin();
       ttt1();
       ttt();
       window();
       soldat(xCHELC,320, 1);
       soldat(xCHELC1-50, 410, 0.8);

       xCHELC1=xCHELC1+10;
       txSleep(1);
       txEnd();
       }

       while( xCHELC1<990)
       {
       txBegin();
       ttt1();
       ttt();
       window();
       soldat(xCHELC,320, 1);
       soldat(xCHELC1-50, 410, 0.8);

       xCHELC1=xCHELC1+10;
       xCHELC=xCHELC1+10;
       txSleep(1);
       txEnd();
       }

       xCHELC=0;
       xCHELC1=-300;

       while( xCHELC1<990)
       {
       txBegin();
       FON(TX_BLUE);
       trava();
       soldat(xCHELC,320, 1);
       soldat(xCHELC1-50, 410, 0.8);

       xCHELC1=xCHELC1+10;
       xCHELC=xCHELC1+10;
       txSleep(1);
       txEnd();
       }

       dialoboma("За ними!",0,100,TX_RED, TX_BLACK);
       txSleep(1000);



       xfascist=300;
       int xCHELOVEK21 =800;
       int yCHELOVEK21 =270;

       while( xCHELOVEK21>650)
      {
       txBegin();
       FON(TX_BLUE);
       trava();
       CHELOVEK21(xCHELOVEK21 ,yCHELOVEK21);
       fascist(xfascist);

       xCHELOVEK21=xCHELOVEK21-10;
       xfascist=xfascist+10;
       txSleep(1);
       txEnd();
       }

       int i=0;
       xPULYTOP2 = 510;

        while(i==0)
        {

        txBegin();
        FON(TX_BLUE);
        trava();
        CHELOVEK21(xCHELOVEK21 ,yCHELOVEK21);
        fascist(xfascist);
        drawPulya4 (xPULYTOP5, yPULYTOP5);
        drawPulya3 (xPULYTOP2, yPULYTOP2);
        txDrawText (0,0,800,300, "ЖМИ");
        txSelectFont ("Arial", 110, 0, FW_BOLD);
        txEnd();

        secund=secund+1;
        txSleep(1);

        if(txMouseButtons() == 1)
        {

                xPULYTOP2=xPULYTOP2-10;
                txSleep(1);
                if(xPULYTOP2<301)
                {
                   i=1;
                }


        }

        if(secund > 10)
        {


                xPULYTOP5=xPULYTOP5+4;
                txSleep(1);
                if(xPULYTOP5>640)
                {
                   i=2;
                }

        }


}
       if(i==1)
       {
        FON(TX_BLUE);
        titra9992();
        txSleep(10000);
        txClear();
        FON(TX_WHITE);
        titra999(titrue);
       }

       if(i==2)
       {
        FON(TX_RED);
        titra9991();
        txSleep(15000);
        txClear();

        FON(TX_WHITE);
        titra999(titrue);
        }

       txTextCursor (false);
       return 0;

}








