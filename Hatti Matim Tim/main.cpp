#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include <unistd.h>
#include <mmsystem.h>
#include <iostream>
using namespace std;

float cl=8;
int hx=-5;
float  web_y=30;

void timer1(int){

    if(cl<125 )
            cl = cl + 0.04;

        else

            cl =-80;


    glutPostRedisplay();
    glutTimerFunc(1000/60,timer1,0);

}

void timer2(int){

       if(web_y>-90)
            web_y=web_y-.10;

        else
            web_y=30;


    glutPostRedisplay();
    glutTimerFunc(1000/60,timer2,0);

}

float w=0;
int flag=1;

void timerw(int){


switch(flag){
    case 1: if(w<6 ){
            w = w + 0.05;
    }
        else
            flag = -1;
            break;
    case -1:
            if(w>0 ){
            w =w-.05;
            }
      else
        flag = 1;
        break;
      }
glutPostRedisplay();
    glutTimerFunc(1000/60,timerw,0);


}

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy){
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++){
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf (angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}

void sky(){


     /** Sky **/
glColor3f (.5, 0.9, 1.0);
glBegin(GL_POLYGON);
glVertex2i(0,100);
glVertex2i(0,90);
glVertex2i(65,90);
glVertex2i(65,100);
glEnd();


      /** Sun **/
glColor3f(1.0,1.0,0.5);
circle(2.5,3.5,60,95);

        /** Cloud **/



glColor3f(1.0,1.0,1.);
circle(2,2.5,cl+72,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl+70,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl+74,95);

glColor3f(1.0,1.0,1.);
circle(2,2.5,cl+42,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl+40,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl+44,95);

glColor3f(1.0,1.0,1.);
circle(2,2.5,cl+32,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl+30,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl+34,95);

glColor3f(1.0,1.0,1.);
circle(2,2.5,cl+32,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl+30,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl+34,95);

glColor3f(1.0,1.0,1.);
circle(2,2.5,cl+12,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl+10,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl+14,95);

glColor3f(1.0,1.0,1.);
circle(2,2.5,cl+2,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl+4,95);

glColor3f(1.0,1.0,1.);
circle(2,2.5,cl-10,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl-12,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl-8,95);

glColor3f(1.0,1.0,1.);
circle(2,2.5,cl-20,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl-22,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl-18,95);

glColor3f(1.0,1.0,1.);
circle(2,2.5,cl-40,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl-42,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl-38,95);

glColor3f(1.0,1.0,1.);
circle(2,2.5,cl-55,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl-57,95);
glColor3f(1.0,1.0,1.);
circle(1.8,1.8,cl-53,95);



}

void hils(){
  /** Hills **/

glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(0,90);
glVertex2f(0,89.5);
glVertex2f(65,89.5);
glVertex2f(65,90);
glEnd();

glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(0,90);
glVertex2f(6,90);
glVertex2f(3,95);
glEnd();

glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(10,90);
glVertex2f(16,90);
glVertex2f(13,95);
glEnd();

glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(30,90);
glVertex2f(36,90);
glVertex2f(33,95);
glEnd();

glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(32,90);
glVertex2f(38,90);
glVertex2f(35,95);
glEnd();

glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(36,90);
glVertex2f(42,90);
glVertex2f(35,92);
glEnd();

glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(42,90);
glVertex2f(48,90);
glVertex2f(45,93);
glEnd();


glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(50,90);
glVertex2f(56,90);
glVertex2f(53,95);
glEnd();

glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(52,90);
glVertex2f(58,90);
glVertex2f(55,95);
glEnd();

glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(56,90);
glVertex2f(62,90);
glVertex2f(55,92);
glEnd();

glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(62,90);
glVertex2f(68,90);
glVertex2f(65,93);
glEnd();

glColor3f (0.3,0.4,0.3);
glBegin(GL_POLYGON);
glVertex2f(92,90);
glVertex2f(98,90);
glVertex2f(95,95);
glEnd();

}

void ground(){




        /** Ground 1 **/
glColor3f (0.24,0.3,0.0);
glBegin(GL_POLYGON);
glVertex2f(0,88);
glVertex2f(0,15);
glVertex2f(45,25);
glVertex2f(60,40);
glVertex2f(65,87);
glVertex2f(60,70);
glEnd();

glColor3f (0.2,0.7,1.0);
glBegin(GL_POLYGON);
glVertex2f(65,89.5);
glVertex2f(40,89.5);
glVertex2f(35,87);
glVertex2f(65,87);
glEnd();

 /**water **/
glColor3f(.2,.7,1);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(100,100);
glVertex2f(65,100);
glVertex2f(65,92);
glVertex2f(100,92);
glEnd();

glColor3f(.2,.7,1);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(100,32);
glVertex2f(47.5,32);
glVertex2f(36,0);
glVertex2f(100,0);
glEnd();

   /**right of waterfall**/

glColor3f(1,1,1);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(100,100);
glVertex2f(95,100);
glVertex2f(91,77.5);  //white
glVertex2f(92,71);
glVertex2f(85,34);
glVertex2f(92,0);
glVertex2f(100,0);
glEnd();

glColor3f(0.52,0.52,0.52);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(100,100);
glVertex2f(96,100);
glVertex2f(94,80);
glVertex2f(100,75);
glEnd();



glColor3f(.42,.42,.42);//rgb(0.82,0.82,0.82) 0.52,0.52,0.52
glBegin(GL_POLYGON);
glVertex2f(95.5,100);
glVertex2f(92.5,100);
glVertex2f(91.5,78.5);
glVertex2f(93.5,80);
glEnd();



glColor3f(0.32,0.32,0.32);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(94,79.5);
glVertex2f(91,77.5);
glVertex2f(92,71);
glVertex2f(95.5,72);
glEnd();

glColor3f(0.82,0.82,0.82);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(95.5,72);
glVertex2f(92,71);
glVertex2f(91,69);
glVertex2f(92.5,68);
glEnd();

glColor3f(0.52,0.52,0.52);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(92.5,68);
glVertex2f(91,69);
glVertex2f(85.5,54);
glVertex2f(89.5,54.5);
glEnd();

glColor3f(0.42,0.42,0.42);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(89.5,54.5);
glVertex2f(85.5,54.5);
glVertex2f(86.5,44);
glVertex2f(89,43);
glEnd();

glColor3f(0.52,0.52,0.52);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(100,53);
glVertex2f(90,54.5);
glVertex2f(89,43);
glVertex2f(100,46);
glEnd();

glColor3f(0.42,0.42,0.42);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(100,63);
glVertex2f(93,67.8);
glVertex2f(90,55);
glVertex2f(100,53.5);
glEnd();

glColor3f(0.52,0.52,0.52);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(100,74.5);
glVertex2f(94.5,79);
glVertex2f(95.9,72);
glVertex2f(100,69);
glEnd();

glColor3f(0.32,0.32,0.32);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(100,68.6);
glVertex2f(95.9,71.6);
glVertex2f(92.9,67.4);
glVertex2f(100,61);
glEnd();

glColor3f(0.82,0.82,0.82);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(100,46);
glVertex2f(89,43);
glVertex2f(86.5,44);
glVertex2f(85,42);
glVertex2f(89,40);
glVertex2f(100,42);
glEnd();

glColor3f(0.42,0.42,0.42);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(85,42);
glVertex2f(89,40);
glVertex2f(85,36);
glVertex2f(85.8,36);
glEnd();

glColor3f(0.32,0.32,0.32);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(100,42);
glVertex2f(90,40);
glVertex2f(85,37);
glVertex2f(85,34);
glVertex2f(92,33);
glVertex2f(100,35);
glEnd();

glColor3f(0.42,0.42,0.42);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(92,32.6);
glVertex2f(85,33.6);
glVertex2f(91.75,-35);
glEnd();

glColor3f(0.42,0.42,0.42);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(100,34.5);
glVertex2f(92.5,32.4);
glVertex2f(92.5,0);
glVertex2f(100,0);
glEnd();

/** left **/

glColor3f(1,1,1);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(75,100);  // white
glVertex2f(65,100);
glVertex2f(59,70);
glVertex2f(58.5,68);
glVertex2f(54,60);
glVertex2f(53,50);
glVertex2f(60,40);
glVertex2f(45,25);
glVertex2f(65,65);
glEnd();

glColor3f(0.52,0.52,0.52);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(69.6,100);
glVertex2f(65.4,100);
glVertex2f(60.4,80);
glVertex2f(64.6,80.5);
glEnd();

glColor3f(0.62,0.62,0.62);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(64.6,80.5);
glVertex2f(60.4,80);
glVertex2f(60,70);
glVertex2f(62,70);
glEnd();

glColor3f(0.32,0.32,0.32);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(62,70);
glVertex2f(60,70);
glVertex2f(55,64);
glVertex2f(62,69);
glEnd();

glColor3f(0.42,0.42,0.42);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(60,68);
glVertex2f(55.6,64.9);
glVertex2f(54,62);
glVertex2f(60,65);
glEnd();

glColor3f(0.72,0.72,0.72);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(60,65);
glVertex2f(54,62);
glVertex2f(54,60);
glVertex2f(60,60);
glEnd();

glColor3f(0.52,0.52,0.52);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(60,60);
glVertex2f(54,60);
glVertex2f(53,50);
glVertex2f(60,50);
glEnd();

glColor3f(0.32,0.32,0.32);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(60,50);
glVertex2f(53,49);
glVertex2f(45,25);
glVertex2f(46,30);
glEnd();

glColor3f(0.72,0.72,0.72);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(60,40.5);
glVertex2f(55,40.5);
glVertex2f(46,26);
glVertex2f(55,35);
glVertex2f(58,36);
glEnd();

glColor3f(.82,0.82,0.82);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(61.5,45.5);
glVertex2f(63.5,50);
glVertex2f(60.8,50);
glVertex2f(57.5,45.5);
glVertex2f(55,41);
glVertex2f(60.5,40.5);
glEnd();

glColor3f(.32,0.32,0.32);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(65,58);
glVertex2f(60,60);
glVertex2f(60.5,50);
glVertex2f(62.7,50);
glEnd();

glColor3f(.42,0.42,0.42);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(60,60);
glVertex2f(65,57.9);
glVertex2f(69,67.9);
glVertex2f(61,67.9);
glEnd();

glColor3f(.52,0.52,0.52);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(70,80);
glVertex2f(66,85);
glVertex2f(65,80);
glVertex2f(65,65);
glVertex2f(70,70);
glEnd();

glColor3f(.32,.32,.32);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(70,70);
glVertex2f(62.5,69);
glVertex2f(60.4,67.5);
glVertex2f(60.5,65.5);
glVertex2f(68,65);
glEnd();


glColor3f(.82,.82,0.82);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(64.6,81);
glVertex2f(62,68.9);
glVertex2f(65,69.5);
glEnd();

glColor3f(.32,.32,.32);//rgb(0.82,0.82,0.82)
glBegin(GL_POLYGON);
glVertex2f(75,100);
glVertex2f(70,100);
glVertex2f(66.1,85.5);
glVertex2f(70.2,80);
glEnd();
}

void tree(){

          /** tree leaf **/
 glColor3f(0.3,0.6,0.2);
circle(16,24,12,73);

glColor3f(0.3,0.6,0.2);
circle(19,18,12,75);

    /** tree body **/
glColor3f (0.8,0.4,0.2);
glBegin(GL_POLYGON);
glVertex2f(15,60);
glVertex2f(23,70);
glVertex2f(2,75);
glVertex2f(6,60);
glVertex2f(7,32);
glVertex2f(14,32);
glEnd();

glColor3f (0.8,0.4,0.2);
glBegin(GL_POLYGON);
glVertex2f(7,32);
glVertex2f(10,22);
glVertex2f(14,32);
glEnd();

glColor3f (0.8,0.4,0.2);
glBegin(GL_POLYGON);
glVertex2f(7,32);
glVertex2f(4,20);
glVertex2f(14,32);
glEnd();

glColor3f (0.8,0.4,0.2);
glBegin(GL_POLYGON);
glVertex2f(7,32);
glVertex2f(18,22);
glVertex2f(14,32);
glEnd();



     /** tree leaf **/
 glColor3f(0.3,0.6,0.2);
circle(5,8,12,74);
}

void eggs(){
/** Egg nst */
glColor3f(0.4,0.4,0.5);
circle(9,7,25,30);

glColor3f(0.4,0.4,0.2);
circle(7.5,5.5,25,30);

   /** EGG **/
glColor3f(1.0,1.0,1.0);
circle(1,2,25,30);

glColor3f(1.0,1.0,1.0);
circle(1,2,23,29.5);

glColor3f(1.0,1.0,1.0);
circle(1,2,22,34);

glColor3f(1.0,1.0,1.0);
circle(1,2,20,29);

glColor3f(1.0,1.0,1.0);
circle(1,2,26,28);

glColor3f(1.0,1.0,1.0);
circle(2,1.5,30,29);

glColor3f(1.0,1.0,1.0);
circle(1,2,28,33);

}

void hattimatim(){
/**Hatti matim tim */


//leg
glColor3f(0.9,0.1,0.2);
circle(1,3.5,43+hx,43);

glColor3f(0.9,0.1,0.2);
circle(1,3.5,47+hx,43);


/**Hornn**/
glColor3f(0,0,0);
circle(.5,3,43+hx,60);

/**Hornn**/
glColor3f(0,0,0);
circle(.5,3,47.2+hx,60);

glColor3f(0.9,0.1,0.2);
circle(5,9,45+hx,50);//deho


glColor3f(0.9,0.1,0.2);
circle(4,5,45+hx,55.5);//head

glColor3f(0.9,0.1,0.2);
circle(4.4,5,45+hx,53.8);//head

glColor3f(0.0,.0,.0);
circle(4.1,5.1,45+hx,48);// bell1

glColor3f(1.0,.5,0.5);
circle(4,5,45+hx,48);// bell2

glColor3f(0.0,0.0,0.0);
circle(1,2,43+hx,57);//eye

glColor3f(1.0,1.0,1.0);
circle(1,1.5,43+hx,57);//eye

glColor3f(.0,.0,.0);
circle(1,2,47+hx,57);//eye

glColor3f(1.0,1.0,1.0);
circle(1,1.5,47+hx,57);//eye

glColor3f(0.0,0.0,0.0);
circle(1,1,43+hx,57);//eye

glColor3f(0.0,0.0,0.0);
circle(1,1,47+hx,57);//eye

glColor3f(1,.8,0.8);
circle(.5,.5,43+hx,57);//eye

glColor3f(1,.8,0.8);
circle(.5,.5,47+hx,57);//eye

glColor3f(0.0,0.0,0.0);
circle(.1,.1,43+hx,57);//eye

glColor3f(0.0,0.0,0.0);
circle(.1,.1,47+hx,57);//eye

glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(44.8+hx,56);
glVertex2f(45.8+hx,55);// lip
glVertex2f(43.8+hx,54);
glEnd();


}

void weve(){

glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+1);
glVertex2f(80,web_y+1);
glVertex2f(60,web_y+2);
glVertex2f(50,web_y+2);
glVertex2f(50,web_y+1);
glVertex2f(60,web_y+1);
glVertex2f(80,web_y+2);
glVertex2f(100,web_y);
glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11);
glVertex2f(80,web_y+11);
glVertex2f(60,web_y+12);
glVertex2f(50,web_y+12);
glVertex2f(50,web_y+11);
glVertex2f(60,web_y+11);
glVertex2f(80,web_y+12);
glVertex2f(100,web_y+10);
glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10);
glVertex2f(80,web_y+11+10);
glVertex2f(60,web_y+12+10);
glVertex2f(50,web_y+12+10);
glVertex2f(50,web_y+11+10);
glVertex2f(60,web_y+11+10);
glVertex2f(80,web_y+12+10);
glVertex2f(100,web_y+10+10);
glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10);
glVertex2f(80,web_y+11+10+10);
glVertex2f(60,web_y+12+10+10);
glVertex2f(50,web_y+12+10+10);
glVertex2f(50,web_y+11+10+10);
glVertex2f(60,web_y+11+10+10);
glVertex2f(80,web_y+12+10+10);
glVertex2f(100,web_y+10+10+10);
glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10);
glVertex2f(80,web_y+11+10+10+10);
glVertex2f(60,web_y+12+10+10+10);
glVertex2f(50,web_y+12+10+10+10);
glVertex2f(50,web_y+11+10+10+10);
glVertex2f(60,web_y+11+10+10+10);
glVertex2f(80,web_y+12+10+10+10);
glVertex2f(100,web_y+10+10+10+10);
glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10);
glVertex2f(60,web_y+12+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10);
glVertex2f(60,web_y+11+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10);
glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10);
glEnd();
//1
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10+10);
glEnd();

//2
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10+10+10);
glEnd();

//3
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10+10+10+10);
glEnd();

//3  +10
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10+10+10+10+10);
glEnd();

//4  +10
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10+10+10+10+10+10);
glEnd();

//5  +10
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10+10+10+10+10+10+10);
glEnd();

//6  +10
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10+10+10+10+10+10+10+10);
glEnd();

//7  +10
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glEnd();

//8  +10
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glEnd();

//89 +10
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glEnd();

//89 +10
glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(100,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(50,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(65,web_y+11+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(80,web_y+12+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glVertex2f(100,web_y+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10+10);
glEnd();

}

groundbot(){
glColor3f(0.69,0.75,0.10); // 0.69,0.75,0.10  0.35,0.38,0.05
glBegin(GL_POLYGON);
glVertex2f(0,15);
glVertex2f(0,10);
glVertex2f(10,14);
glVertex2f(10,18);
glEnd();


glColor3f(0.70,0.65,0.10); // 0.69,0.75,0.10  0.35,0.38,0.05 0.70,0.65,0.10
glBegin(GL_POLYGON);
glVertex2f(10,18);
glVertex2f(10,14);
glVertex2f(15,14);
glVertex2f(15,18.5);
glEnd();

glColor3f(0.68,0.74,0.10); // 0.69,0.75,0.10  0.35,0.38,0.05 0.70,0.65,0.10
glBegin(GL_POLYGON);
glVertex2f(15,18.5);
glVertex2f(15,14);
glVertex2f(35,22);
glVertex2f(35,24.5);
glEnd();

glColor3f(0.70,0.65,0.10); // 0.69,0.75,0.10  0.35,0.38,0.05 0.70,0.65,0.10
glBegin(GL_POLYGON);
glVertex2f(35,24.5);
glVertex2f(35,22);
glVertex2f(39,22);
glVertex2f(39,24.5);
glEnd();

glColor3f(0.69,0.75,0.10); // 0.69,0.75,0.10  0.35,0.38,0.05 0.70,0.65,0.10
glBegin(GL_POLYGON);
glVertex2f(39,24.5);
glVertex2f(39,22);
glVertex2f(45,25);
glEnd();

/** ground mid border **/

glColor3f(0.69,0.75,0.10); // 0.69,0.75,0.10  0.35,0.38,0.05
glBegin(GL_POLYGON);
glVertex2f(0,65);
glVertex2f(0,60);
glVertex2f(10,64);
glVertex2f(10,68);
glEnd();


glColor3f(0.70,0.65,0.10); // 0.69,0.75,0.10  0.35,0.38,0.05 0.70,0.65,0.10
glBegin(GL_POLYGON);
glVertex2f(10,68);
glVertex2f(10,64);
glVertex2f(15,64);
glVertex2f(15,68.5);
glEnd();

glColor3f(0.68,0.74,0.10); // 0.69,0.75,0.10  0.35,0.38,0.05 0.70,0.65,0.10
glBegin(GL_POLYGON);
glVertex2f(15,68.5);
glVertex2f(15,64);
glVertex2f(35,72);
glVertex2f(35,74.5);
glEnd();

glColor3f(0.70,0.65,0.10); // 0.69,0.75,0.10  0.35,0.38,0.05 0.70,0.65,0.10
glBegin(GL_POLYGON);
glVertex2f(35,74.5);
glVertex2f(35,72);
glVertex2f(55,72);
glVertex2f(55,74.5);
glEnd();

glColor3f(0.69,0.75,0.10); // 0.69,0.75,0.10  0.35,0.38,0.05 0.70,0.65,0.10
glBegin(GL_POLYGON);
glVertex2f(55,74.5);
glVertex2f(55,72);
glVertex2f(60,75);
glVertex2f(60.2,76);

glEnd();


}

flowers(){

glColor3f(1,1,1);
circle(3,.9,55,45);
glColor3f(1,1,1);
circle(.9,3,55,45);
glColor3f(1,.75,0);///orange+white
circle(.9,.9,55,45);

glColor3f(1,1,1);
circle(3,.9,55,65);
glColor3f(1,1,1);
circle(.9,3,55,65);
glColor3f(1,.75,0);///orange+white
circle(.9,.9,55,65);

glColor3f(1,1,1);
circle(3,.9,61,85);
glColor3f(1,1,1);
circle(.9,3,61,85);
glColor3f(1,.75,0);///orange+white
circle(.9,.9,61,85);

glColor3f(1,1,1);
circle(3,.9,95,90);
glColor3f(1,1,1);
circle(.9,3,95,90);
glColor3f(1,.75,0);///orange+white
circle(.9,.9,95,90);

glColor3f(1,1,1);
circle(3,.9,95,40);
glColor3f(1,1,1);
circle(.9,3,95,40);
glColor3f(1,.75,0);///orange+white
circle(.9,.9,95,40);

glColor3f(1,1,0);
circle(3,.9,90,45);
glColor3f(1,1,0);
circle(.9,3,90,45);
glColor3f(1,.75,0);///orange+yellow
circle(.9,.9,90,45);

glColor3f(1,1,0);
circle(3,.9,96,72);
glColor3f(1,1,0);
circle(.9,3,96,72);
glColor3f(1,.75,0);///orange+yellow
circle(.9,.9,96,72);

glColor3f(1,1,0);
circle(3,.9,60,70);
glColor3f(1,1,0);
circle(.9,3,60,70);
glColor3f(1,.75,0);///orange+yellow
circle(.9,.9,60,70);

}

fruits(){

glColor3f(1,0,0);
circle(.9,1.4,20.7,90);
glColor3f(1,0,0);
circle(.9,1.3,20,90);

glColor3f(1,0,0);
circle(.9,1.3,11.7,89);
glColor3f(1,0,0);
circle(.9,1.3,11,89);

glColor3f(1,0,0);
circle(.9,1.3,15.7,80);
glColor3f(1,0,0);
circle(.9,1.4,15,80);

glColor3f(1,0,0);
circle(.9,1.4,24.7,77);
glColor3f(1,0,0);
circle(.9,1.4,24,77);

glColor3f(1,0,0);
circle(.9,1.4,20.7,57);
glColor3f(1,0,0);
circle(.9,1.4,20,57);

glColor3f(1,0,0);
circle(.9,1.5,3.7,80);
glColor3f(1,0,0);
circle(.9,1.4,3,80);

}

hattimatim_hand(){


//////////1
glLineWidth(90);
glColor3f(.9,.1,.2);
glBegin(GL_LINES);
glVertex2f(37+5,48);
glVertex2f(31+18,53+w);
glEnd();


glLineWidth(90);
glColor3f(.9,.1,.2);
glBegin(GL_LINES);
glVertex2f(37+5,48);
glVertex2f(31+18,48+w);
glEnd();

glLineWidth(90);
glColor3f(.9,.1,.2);
glBegin(GL_LINES);
glVertex2f(37+5,48);
glVertex2f(30+18,43+w);
glEnd();
/////////////2

glLineWidth(90);
glColor3f(.9,.1,.2);
glBegin(GL_LINES);
glVertex2f(37,48);
glVertex2f(31,53+w);
glEnd();


glLineWidth(90);
glColor3f(.9,.1,.2);
glBegin(GL_LINES);
glVertex2f(37,48);
glVertex2f(31,48+w);
glEnd();

glLineWidth(90);
glColor3f(.9,.1,.2);
glBegin(GL_LINES);
glVertex2f(37,48);
glVertex2f(30,43+w);
glEnd();


}

void display(void){
glClear (GL_COLOR_BUFFER_BIT);

             weve();
             sky();
             hils();
             ground();
             eggs();
             hattimatim_hand();
             hattimatim();
             groundbot();
             flowers();
             tree();
             fruits();


glutSwapBuffers();
}

void init (void){

glClearColor (.2, 0.7, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 100.0, 0.0, 100.0, -100.0, 100.0);//glOrtho(left, right, bottom, top, near, far)

}

int main(int argc, char** argv){

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (1200, 800);
glutInitWindowPosition (90, 90);
glutCreateWindow ("Hatti Matim Tim");
init ();
glutDisplayFunc(display);
glutTimerFunc(0,timer1,0);
glutTimerFunc(0,timer2,0);
glutTimerFunc(0,timerw,0);

//PlaySound(TEXT("a.wav"),NULL, SND_ASYNC|SND_FILENAME);
//sndPlaySound("a.wav",SND_ASYNC);
//PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

glutMainLoop();
return 0;
}
