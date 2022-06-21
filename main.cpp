#include <windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include<GL/gl.h>

#include<math.h>

void init(void){

    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,1920.0,0.0,1080.0);

}

float a = 50.0;
float b = 250.0;
float p = 50.0;
float q = 250.0;
float x = 20.0;


float rx , ry ,cx, cy;
void Circle(GLfloat rx, GLfloat ry,GLfloat cx, GLfloat cy)
   {
       glBegin(GL_TRIANGLE_FAN);
       glVertex2f(cx,cy);
       for(int i=0; i<=100;i++){
        float angle = 2 * 3.1416 * i/100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x+cx),(y+cy));
       }
       glEnd();

   }

float c1x=800.0;
float c2x=0.0;
float b1x=0.0;
float b3x=1920.0;


void Draw(){

    glClear(GL_COLOR_BUFFER_BIT);

    if (c1x<= 1920) // cloud 1 Runnimg code
    c1x = c1x+.07;
    else
    c1x=0;

    if (c2x<= 1920) // cloud 2 Runnimg code
    c2x = c2x+.05;
    else
    c2x=0;





    if (b1x<= 1920) // boat 1 Runnimg code
    b1x = b1x+.02;
    else
    b1x=0;

    if (b3x>= 0)    // boat 3 Runnimg code
    b3x = b3x-.02;
    else
    b3x=1920;

/*
    if (b <= 270)
        b = b + .002;

    else
        b = 250.0;

    if (a <= 80)
        a = a + .002;

    else
        a = 50.0;

    if (p <= 58)
        p=p+.002;

    else
        p=49;

*/

    glutPostRedisplay();
               //************Land Code***************
     glBegin(GL_POLYGON);
     glColor3f(0.50,0.55,0.13);//0.258,0.435,0.258
     glVertex2i(1,300);
     glVertex2i(500,300);
     glVertex2i(1370,462);
     glVertex2i(1275,610);
     glVertex2i(1600,700);
     glVertex2i(1,700);
     glEnd();


                //************River Code start***************

     glBegin(GL_POLYGON);
     glColor3f(0.43,0.85,0.57);// first color 0.0,1.0,1.0
     glVertex2i(1,280);
     glVertex2i(1,1);
     glVertex2i(515,1);
     glVertex2i(515,280);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.43,0.85,0.57);
     glVertex2i(515,280);
     glVertex2i(515,1);
     glVertex2i(1400,1);
     glVertex2i(1400,450);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.43,0.85,0.57);
     glVertex2i(1400,450);
     glVertex2i(1400,1);
     glVertex2i(1600,1);
     glVertex2i(1600,450);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.43,0.85,0.57);
     glVertex2i(1378,445);//1400 450
     glVertex2i(1600,450);
     glVertex2i(1600,700);
     glVertex2i(1284,597);//1300 600
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.43,0.85,0.57);
     glVertex2i(1370,460);//1400 450
     glVertex2i(1365,440);
     glVertex2i(1400,440);
     glVertex2i(1400,460);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.43,0.85,0.57);
     glVertex2i(1600,700);
     glVertex2i(1600,1);
     glVertex2i(1919,1);
     glVertex2i(1919,700);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.43,0.85,0.57);//0.43,0.85,0.57
     glVertex2i(1378,445);//1400 450
     glVertex2i(1600,450);
     glVertex2i(1600,700);
     glVertex2i(1300,600);
     glEnd();



                //************Sky Code***************
     glBegin(GL_POLYGON);
     glColor3f(0.19,0.6,0.8);
     glVertex2i(1,700);
     glVertex2i(1919,700);
     glVertex2i(1919,1079);
     glVertex2i(1,1079);

     glEnd();


     //**************Sun**********
     glColor3f( 1.0 , 0.70, 0.0);
     Circle(75,75,1280,830);
       //*******************************

                //************Hill Code***************


     glBegin(GL_POLYGON);
     glColor3f(0.32,0.32,0.32);
     glVertex2i(120,700);
     glVertex2i(360,700);
     glVertex2i(240,850);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.32,0.32,0.32);
     glVertex2i(360,700);
     glVertex2i(600,700);
     glVertex2i(480,850);
     glEnd();

/*
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0,1.0);
     glVertex2i(600,700);
     glVertex2i(840,700);
     glVertex2i(710,850);
     glEnd();
*/
     glBegin(GL_POLYGON);
     glColor3f(0.32,0.32,0.32);
     glVertex2i(840,700);
     glVertex2i(1080,700);
     glVertex2i(960,850);
     glEnd();
/*
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0,1.0);
     glVertex2i(1080,700);
     glVertex2i(1320,700);
     glVertex2i(1200,850);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0,1.0);
     glVertex2i(1320,700);
     glVertex2i(1560,700);
     glVertex2i(1440,850);
     glEnd();

*/
     glBegin(GL_POLYGON);
     glColor3f(0.32,0.32,0.32);
     glVertex2i(1560,700);
     glVertex2i(1800,700);
     glVertex2i(1680,850);
     glEnd();



                //*********Front Hills
     glBegin(GL_POLYGON);
     glColor3f(0.40,0.40,0.40);
     glVertex2i(1,700);
     glVertex2i(240,700);
     glVertex2i(120,850);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.40,0.40,0.40);
     glVertex2i(240,700);
     glVertex2i(480,700);
     glVertex2i(360,850);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.40,0.40,0.40);
     glVertex2i(480,700);
     glVertex2i(720,700);
     glVertex2i(600,850);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.40,0.40,0.40);
     glVertex2i(720,700);
     glVertex2i(960,700);
     glVertex2i(840,850);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.40,0.40,0.40);
     glVertex2i(960,700);
     glVertex2i(1200,700);
     glVertex2i(1080,850);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.40,0.40,0.40);
     glVertex2i(1200,700);
     glVertex2i(1440,700);
     glVertex2i(1320,850);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.40,0.40,0.40);
     glVertex2i(1440,700);
     glVertex2i(1680,700);
     glVertex2i(1560,850);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.40,0.40,0.40);
     glVertex2i(1680,700);
     glVertex2i(1920,700);
     glVertex2i(1800,850);
     glEnd();


     //****************Home2***********
     int home2x=200;
     int home2y=50;
     glBegin(GL_POLYGON);
     glColor3f(0.39,0.15,0.20);
     glVertex2i(home2x+1,home2y+450);
     glVertex2i(home2x+120,home2y+450);
     glVertex2i(home2x+60,home2y+530);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.39,0.15,0.20);
     glVertex2i(home2x+60,home2y+530);
     glVertex2i(home2x+120,home2y+450);
     glVertex2i(home2x+240,home2y+470);
     glVertex2i(home2x+160,home2y+530);
     glEnd();
//mid front

     glBegin(GL_POLYGON);
     glColor3f(0.85,0.85,0.43);
     glVertex2i(home2x+16,home2y+450);
     glVertex2i(home2x+16,home2y+390);
     glVertex2i(home2x+120,home2y+370);
     glVertex2i(home2x+120,home2y+450);
     glVertex2i(home2x+72,home2y+515);
     //glVertex2i(160,530);
     glEnd();

    glBegin(GL_POLYGON);
     glColor3f(0.85,0.85,0.43);
     glVertex2i(home2x+120,home2y+450);
     glVertex2i(home2x+120,home2y+370);
     glVertex2i(home2x+235,home2y+400);
     glVertex2i(home2x+230,home2y+468);
     glEnd();




        //base
     glBegin(GL_POLYGON);
     glColor3f(0.4,0.4,0.4);
     glVertex2i(home2x+16,home2y+390);
     glVertex2i(home2x+1,home2y+375);
     glVertex2i(home2x+125,home2y+350);
     glVertex2i(home2x+120,home2y+370);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.4,0.4,0.4);
     glVertex2i(home2x+125,home2y+350);
     glVertex2i(home2x+245,home2y+387);
     glVertex2i(home2x+235,home2y+400);
     glVertex2i(home2x+120,home2y+370);
     glEnd();

     //window

     glBegin(GL_POLYGON);
     glColor3f(0.20,0.20,0.20);
     glVertex2i(home2x+48,home2y+450);
     glVertex2i(home2x+48,home2y+420);
     glVertex2i(home2x+86,home2y+417);
     glVertex2i(home2x+86,home2y+447);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.20,0.20,0.20);
     glVertex2i(home2x+140,home2y+430);
     glVertex2i(home2x+140,home2y+405);
     glVertex2i(home2x+170,home2y+412);
     glVertex2i(home2x+170,home2y+437);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.20,0.20,0.20);
     glVertex2i(home2x+190,home2y+440);
     glVertex2i(home2x+190,home2y+417);
     glVertex2i(home2x+215,home2y+422);
     glVertex2i(home2x+215,home2y+445);
     glEnd();


     //*******************Tree 1 Leaf 1********


     glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(60,60,125,610);
     //****************************************



     //*******************Tree 1 Body********


     glBegin(GL_POLYGON);
     glColor3f(0.36,0.25,0.20);
     glVertex2i(100,510);
     glVertex2i(150,510);
     glVertex2i(150,635);
     glVertex2i(100,635);
     glEnd();
     //****************************************




        //********************Home1**********************************************

     glBegin(GL_POLYGON);
     glColor3f(0.39,0.15,0.20);//0.36,0.25,0.20
     glVertex2i(1,450);
     glVertex2i(120,450);
     glVertex2i(60,530);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.39,0.15,0.20);
     glVertex2i(60,530);
     glVertex2i(120,450);
     glVertex2i(240,470);
     glVertex2i(160,530);
     glEnd();
    //mid front

     glBegin(GL_POLYGON);
     glColor3f(0.85,0.85,0.43);
     glVertex2i(16,450);
     glVertex2i(16,390);
     glVertex2i(120,370);
     glVertex2i(120,450);
     glVertex2i(72,515);
     //glVertex2i(160,530);
     glEnd();

    glBegin(GL_POLYGON);
     glColor3f(0.85,0.85,0.43);
     glVertex2i(120,450);
     glVertex2i(120,370);
     glVertex2i(235,400);
     glVertex2i(230,468);
     glEnd();




        //base
     glBegin(GL_POLYGON);
     glColor3f(0.4,0.4,0.4);
     glVertex2i(16,390);
     glVertex2i(1,375);
     glVertex2i(125,350);
     //glVertex2i(245,380);
     //glVertex2i(235,400);
     glVertex2i(120,370);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.4,0.4,0.4);
     glVertex2i(125,350);
     glVertex2i(245,387);
     glVertex2i(235,400);
     glVertex2i(120,370);
     glEnd();

     //window

     glBegin(GL_POLYGON);
     glColor3f(0.20,0.20,0.20);
     glVertex2i(48,450);
     glVertex2i(48,420);
     glVertex2i(86,417);
     glVertex2i(86,447);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.20,0.20,0.20);
     glVertex2i(140,430);
     glVertex2i(140,405);
     glVertex2i(170,412);
     glVertex2i(170,437);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.20,0.20,0.20);
     glVertex2i(190,440);
     glVertex2i(190,417);
     glVertex2i(215,422);
     glVertex2i(215,445);
     glEnd();

//********************Rice Dust***************************************

        int R1x=560;
        int R1y=110;

     glBegin(GL_POLYGON);
     glColor3f(0.70,0.65,0.43);
     glVertex2i(R1x+1,R1y+400);
     glVertex2i(R1x+190,R1y+405);
     glVertex2i(R1x+185,R1y+475);
     glVertex2i(R1x+155,R1y+550);
     glVertex2i(R1x+100,R1y+600);
     glVertex2i(R1x+45,R1y+550);
     glVertex2i(R1x+10,R1y+475);
     glEnd();





//*******************cloud 1***************************************
       //int c1x=50;
       int c1y;
       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c1x+50,1020);
       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c1x,1000);
       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c1x+120,1020);
       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c1x+160,1000);
       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c1x+50,980);
       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c1x+120,980);


//*******************cloud 2***************************************

       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c2x+50,970);
       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c2x,950);
       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c2x+120,970);
       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c2x+160,950);
       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c2x+50,930);
       glColor3f( 1.0f , 1.0f, 1.0f);
       Circle(45,45,c2x+120,930);

//**********************Boat 1*********************************************************
     //int b1x=0;

     glBegin(GL_POLYGON);// Lower part
     glColor3f(0.30,0.30,0.30);
     glVertex2i(b1x+1,200);
     glVertex2i(b1x+30,150);
     glVertex2i(b1x+170,150);
     glVertex2i(b1x+200,200);
     glVertex2i(b1x+160,175);
     glVertex2i(b1x+40,175);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.43,0.85,0.57);
     glVertex2i(b1x+1,200);
     glVertex2i(b1x+40,175);
     glVertex2i(b1x+160,175);
     glVertex2i(b1x+200,200);
     glEnd();


     glBegin(GL_POLYGON);// Upper part
     glColor3f(0.0,0.0,0.0);
     glVertex2i(b1x+50,175);
     glVertex2i(b1x+70,175);
     glVertex2i(b1x+60,200);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.78,0.58,0.75);
     glVertex2i(b1x+70,175);
     glVertex2i(b1x+150,175);
     glVertex2i(b1x+140,200);
     glVertex2i(b1x+60,200);
     glEnd();



//**********************Boat 2*********************************************************
     int b2x=1320;
     int b2y=350;

     glBegin(GL_POLYGON);// Lower part
     glColor3f(0.30,0.30,0.30);
     glVertex2i(b2x+1,b2y+200);
     glVertex2i(b2x+30,b2y+150);
     glVertex2i(b2x+170,b2y+150);
     glVertex2i(b2x+200,b2y+200);
     glVertex2i(b2x+160,b2y+175);
     glVertex2i(b2x+40,b2y+175);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.43,0.85,0.57);
     glVertex2i(b2x+1,b2y+200);
     glVertex2i(b2x+40,b2y+175);
     glVertex2i(b2x+160,b2y+175);
     glVertex2i(b2x+200,b2y+200);
     glEnd();


     glBegin(GL_POLYGON);// Upper part
     glColor3f(0.0,0.0,0.0);
     glVertex2i(b2x+50,b2y+175);
     glVertex2i(b2x+70,b2y+175);
     glVertex2i(b2x+60,b2y+200);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.78,0.58,0.75);
     glVertex2i(b2x+70,b2y+175);
     glVertex2i(b2x+150,b2y+175);
     glVertex2i(b2x+140,b2y+200);
     glVertex2i(b2x+60,b2y+200);
     glEnd();

//**********************Boat 3*********************************************************
     //int b3x=1000;
     int b3y=80;
     glBegin(GL_POLYGON);// Lower part
     glColor3f(0.30,0.30,0.30);
     glVertex2i(b3x+1,b3y+200);
     glVertex2i(b3x+30,b3y+150);
     glVertex2i(b3x+170,b3y+150);
     glVertex2i(b3x+200,b3y+200);
     glVertex2i(b3x+160,b3y+175);
     glVertex2i(b3x+40,b3y+175);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.43,0.85,0.57);
     glVertex2i(b3x+1,b3y+200);
     glVertex2i(b3x+40,b3y+175);
     glVertex2i(b3x+160,b3y+175);
     glVertex2i(b3x+200,b3y+200);
     glEnd();


     glBegin(GL_POLYGON);// Upper part
     glColor3f(0.0,0.0,0.0);
     glVertex2i(b3x+50,b3y+175);
     glVertex2i(b3x+70,b3y+175);
     glVertex2i(b3x+60,b3y+200);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.78,0.58,0.75);
     glVertex2i(b3x+70,b3y+175);
     glVertex2i(b3x+150,b3y+175);
     glVertex2i(b3x+140,b3y+200);
     glVertex2i(b3x+60,b3y+200);
     glEnd();


     //*******************Tree 1 Leaf 2 full********


     glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(50,50,135,640);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(50,50,70,605);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(50,50,30,630);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(60,60,50,690);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(55,55,100,690);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(60,60,150,700);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(45,45,200,690);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(45,45,225,640);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(35,35,200,590);


     //****************************************

     //*******************Tree 1 Body********


     glBegin(GL_POLYGON);
     glColor3f(0.36,0.25,0.20);
     glVertex2i(500,460);
     glVertex2i(550,460);
     glVertex2i(550,625);
     glVertex2i(500,625);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.36,0.25,0.20);
     glVertex2i(500,625);
     glVertex2i(520,625);
     glVertex2i(480,660);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3f(0.36,0.25,0.20);
     glVertex2i(525,625);
     glVertex2i(550,625);
     glVertex2i(577,675);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.36,0.25,0.20);
     glVertex2i(535,635);
     glVertex2i(555,635);
     glVertex2i(525,675);
     glEnd();

    //**********leaf tree 2***********

     glPushMatrix();

	glTranslatef(385,55,0);
	glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(50,50,135,640);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(50,50,70,605);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(50,50,30,630);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(60,60,50,690);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(55,55,100,690);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(60,60,150,700);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(45,45,200,690);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(45,45,225,640);

       glColor3f( 0.18f , 0.30f, 0.18f);
       Circle(35,35,200,590);

	glPopMatrix();

	//***************Tree Lower***********
	glBegin(GL_POLYGON);
     glColor3f(0.36,0.25,0.20);
     glVertex2i(500,460);
     glVertex2i(490,440);
     glVertex2i(530,460);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.36,0.25,0.20);
     glVertex2i(535,460);
     glVertex2i(560,450);
     glVertex2i(550,460);
     glEnd();


     //****************************************



     //***************************kites fly******************
        glPushMatrix();
/*
        if (x<= 300)
        x = x+.009;
        else
        x=0;
*/
        if (b <= 270)
        b = b + .005;

        else
        b = 250.0;

        if (a <= 80)
        a = a + .005;

        else
        a = 50.0;

        if (p <= 58)
        p=p+.005;

        else
        p=49;

        glutPostRedisplay();


	glTranslatef(750,450,0);

        //Code of kite
        glBegin(GL_POLYGON);
        glColor3f(0.1,0.0,1.0);
        glVertex2i(a+145,b-10);
        glVertex2i(a+140,b-50);
        glVertex2i(a+175,b-70);
        glVertex2i(a+180,b-30);
        glEnd();

        glBegin(GL_LINES); //Code of kite edge
        glColor3f(1.0,1.0,0.1);
        glVertex2i(a+145,b-10);
        glVertex2i(a+175,b-70);
        glEnd();

        glBegin(GL_LINES); //Code of kite edge
        glColor3f(1.0,1.0,0.1);
        glVertex2i(a+140,b-50);
        glVertex2i(a+180,b-30);
        glEnd();

        glBegin(GL_LINES); // code of kite tail
        glColor3f(1.0,1.0,0.1);
        glVertex2i(a+140,b-50);

        glVertex2i(a+120,b-90);
        glEnd();

        //Coe of lines or rope
        glBegin(GL_LINES);
        glColor3f(1.0,1.0,1.0);

        glVertex2i(a+160,b-40);
        glVertex2i(a+140,b-100);
        glVertex2i(a+140,b-100);
        glVertex2i(a+110,b-140);
        glVertex2i(a+110,b-140);
        glVertex2i(a+90,b-170);
        glVertex2i(a+90,b-170);
        glVertex2i(a+20,b-190);

        glEnd();

        //code of human body
        glBegin(GL_POLYGON);

        glColor3f(0.1,1.0,1.0);

        glVertex2i(p,q-150);
        glVertex2i(p,q-200);
        glVertex2i(p+50,q-200);

        glVertex2i(p+50,q-150);

        glEnd();

        //Code for lower head part
        glBegin(GL_POLYGON);

        glColor3f(1.0,1.0,1.0);

        glVertex2i(p+20,q-133);
        glVertex2i(p+20,q-150);
        glVertex2i(p+30,q-150);
        glVertex2i(p+30,q-133);

        glEnd();

        //code for upper head part
        glBegin(GL_POLYGON);

        glColor3f(1.0,1.0,1.0);

        glVertex2i(p+15,q-128);
        glVertex2i(p+15,q-138);

        glVertex2i(p+20,q-141);
        glVertex2i(p+30,q-141);
        glVertex2i(p+35,q-138);
        glVertex2i(p+35,q-128);
        glVertex2i(p+30,q-125);
        glVertex2i(p+20,q-125);

        glEnd();

        // Code for leg

        glBegin(GL_POLYGON);

        glColor3f(1.0,1.0,1.0);

        glVertex2i(p+5,q-200);
        glVertex2i(p+5,q-220);
        glVertex2i(p+15,q-220);
        glVertex2i(p+15,q-200);

        glEnd();

        glBegin(GL_POLYGON); //Code for shoe
        glColor3f(0.1,1.0,1.0);

        glVertex2i(p+2,q-220);
        glVertex2i(p+2,q-230);
        glVertex2i(p+18,q-230);
        glVertex2i(p+18,q-220);

        glEnd();

        glBegin(GL_POLYGON);

        glColor3f(1.0,1.0,1.0);

        glVertex2i(p+35,q-200);
        glVertex2i(p+35,q-220);
        glVertex2i(p+45,q-220);
        glVertex2i(p+45,q-200);

        glEnd();

        glBegin(GL_POLYGON); //Code for shoe

        glColor3f(0.1,1.0,1.0);

        glVertex2i(p+32,q-220);
        glVertex2i(p+32,q-230);
        glVertex2i(p+48,q-230);
        glVertex2i(p+48,q-220);

        glEnd();
    glPopMatrix();


glutSwapBuffers();

}


int main(int argc, char**argv){

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("Lab Project");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
