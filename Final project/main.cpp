#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>


void sun(double a, double b)
{
    float theta;
    int i;
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    for(i=0; i< 360; i++)
    {
        theta = i*3.142/180;
        glVertex2f(a+10*cos(theta), b+10*sin(theta));
    }
    glEnd();
}


void cloud (double a, double b)
{
    float theta;
    int i;
    glColor3f(100,100,100);
    glBegin(GL_POLYGON);
    for(i=0; i< 360; i++)
    {
        theta = i*3.142/180;
        glVertex2f(a+10*cos(theta), b+10*sin(theta));
    }
    glEnd();
}


void tire(double a, double b)
{
    float theta;
    int i;
    glColor3ub(28,28,28);
    glBegin(GL_POLYGON);
    for(i=0; i< 360; i++)
    {
        theta = i*3.142/180;
        glVertex2f(a+1.8*cos(theta), b+1.8*sin(theta));
    }
    glEnd();
}





void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_QUADS);
    glColor3ub(105,105,105);//road

    glVertex3f(0,55,0);
    glVertex3f(200,55,0);
    glVertex3f(200,0,0);
    glVertex3f(0,0,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,153,0);//road 1 grass

    glVertex3f(0,2,0);
    glVertex3f(200,2,0);
    glVertex3f(200,0,0);
    glVertex3f(0,0,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153,76,0);//road 1 mati boarder

    glVertex3f(0,2.5,0);
    glVertex3f(200,2.5,0);
    glVertex3f(200,1.5,0);
    glVertex3f(0,1.5,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 1  white line 1

    glVertex3f(0,4,0);
    glVertex3f(200,4,0);
    glVertex3f(200,3.4,0);
    glVertex3f(0,3.4,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 1 midel 1

    glVertex3f(2,8,0);
    glVertex3f(50,8,0);
    glVertex3f(50,7,0);
    glVertex3f(2,7,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 1 midel 2

    glVertex3f(70,8,0);
    glVertex3f(120,8,0);
    glVertex3f(120,7,0);
    glVertex3f(70,7,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 1 midel 3


    glVertex3f(141,8,0);
    glVertex3f(191,8,0);
    glVertex3f(191,7,0);
    glVertex3f(141,7,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 2  white line 2

    glVertex3f(0,12,0);
    glVertex3f(200,12,0);
    glVertex3f(200,11.5,0);
    glVertex3f(0,11.5,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19);//road 2 mati boarder

    glVertex3f(0,14,0);
    glVertex3f(200,14,0);
    glVertex3f(200,13,0);
    glVertex3f(0,13,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,153,0);//road 2 grass

    glVertex3f(0,16,0);
    glVertex3f(200,16,0);
    glVertex3f(200,14,0);
    glVertex3f(0,14,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 2 white line 1
    glVertex3f(0,17,0);
    glVertex3f(200,17,0);
    glVertex3f(200,17.5,0);
    glVertex3f(0,17.5,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 2 midel 1

    glVertex3f(2,22,0);
    glVertex3f(50,22,0);
    glVertex3f(50,21,0);
    glVertex3f(2,21,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 2 midel 2

    glVertex3f(70,22,0);
    glVertex3f(120,22,0);
    glVertex3f(120,21,0);
    glVertex3f(70,21,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 2 midel 3

    glVertex3f(141,22,0);
    glVertex3f(191,22,0);
    glVertex3f(191,21,0);
    glVertex3f(141,21,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 2 white line 2

    glVertex3f(0,26,0);
    glVertex3f(200,26,0);
    glVertex3f(200,25.5,0);
    glVertex3f(0,25.5,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153,76,0);//road 2 mati boarder

    glVertex3f(0,28,0);
    glVertex3f(200,28,0);
    glVertex3f(200,26.80,0);
    glVertex3f(0,26.80,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102,153,0);//road 2 grass

    glVertex3f(0,29.5,0);
    glVertex3f(200,29.5,0);
    glVertex3f(200,28,0);
    glVertex3f(0,28,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 3 white line 1

    glVertex3f(0,31,0);
    glVertex3f(200,31,0);
    glVertex3f(200,30.5,0);
    glVertex3f(0,30.5,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 3 midel 1

    glVertex3f(2,35,0);
    glVertex3f(50,35,0);
    glVertex3f(50,34,0);
    glVertex3f(2,34,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 3 midel 2

    glVertex3f(70,35,0);
    glVertex3f(120,35,0);
    glVertex3f(120,34,0);
    glVertex3f(70,34,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 3 midel 3

    glVertex3f(141,35,0);
    glVertex3f(191,35,0);
    glVertex3f(191,34,0);
    glVertex3f(141,34,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 3 white line 2

    glVertex3f(0,39,0);
    glVertex3f(200,39,0);
    glVertex3f(200,38.4,0);
    glVertex3f(0,38.4,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153,76,0); //road 3 mati boarder

    glVertex3f(0,40,0);
    glVertex3f(200,40,0);
    glVertex3f(200,41,0);
    glVertex3f(0,41,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102,153,0);//road 4 grass

    glVertex3f(0,42.5,0);
    glVertex3f(200,42.5,0);
    glVertex3f(200,41,0);
    glVertex3f(0,41,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 4 white line 1

    glVertex3f(0,44,0);
    glVertex3f(200,44,0);
    glVertex3f(200,43.4,0);
    glVertex3f(0,43.4,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 4 midel 1

    glVertex3f(2,48,0);
    glVertex3f(50,48,0);
    glVertex3f(50,47,0);
    glVertex3f(2,47,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 4 midel 2

    glVertex3f(70,48,0);
    glVertex3f(120,48,0);
    glVertex3f(120,47,0);
    glVertex3f(70,47,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 4 midel 3

    glVertex3f(141,48,0);
    glVertex3f(191,48,0);
    glVertex3f(191,47,0);
    glVertex3f(141,47,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//road 4 white line 2

    glVertex3f(0,51,0);
    glVertex3f(200,51,0);
    glVertex3f(200,51.5,0);
    glVertex3f(0,51.5,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153,76,0); //road 4 mati boarder

    glVertex3f(0,52,0);
    glVertex3f(200,52,0);
    glVertex3f(200,53.2,0);
    glVertex3f(0,53.2,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102,153,0);//road 4 grass

    glVertex3f(0,53.2,0);
    glVertex3f(200,53.2,0);
    glVertex3f(200,55,0);
    glVertex3f(0,55,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,255,255);//Glass

    glVertex3f(0,200,0);
    glVertex3f(200,200,0);
    glVertex3f(200,55,0);
    glVertex3f(0,55,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,0,0);//trafic signal

    glVertex3f(145,72,0);
    glVertex3f(144,72,0);
    glVertex3f(144,14,0);
    glVertex3f(145,14,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//trafic signal 1st white

    glVertex3f(145,44,0);
    glVertex3f(144,44,0);
    glVertex3f(144,30,0);
    glVertex3f(145,30,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);//trafic signal 2nd white

    glVertex3f(145,72,0);
    glVertex3f(144,72,0);
    glVertex3f(144,58,0);
    glVertex3f(145,58,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);//trafic signal top red

    glVertex3f(142,72,0);
    glVertex3f(147,72,0);
    glVertex3f(147,70.5,0);
    glVertex3f(142,70.5,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);//trafic signal top black

    glVertex3f(145,75,0);
    glVertex3f(144,75,0);
    glVertex3f(144,72,0);
    glVertex3f(145,72,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,0,0); // car1 body1

    glVertex3f(20,19,0);
    glVertex3f(35,19,0);
    glVertex3f(35,23,0);
    glVertex3f(20,23,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0); // car1 body2

    glVertex3f(35,23,0);
    glVertex3f(36,21,0);
    glVertex3f(36,19,0);
    glVertex3f(35,19,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0); // car1 roof

    glVertex3f(20,23,0);
    glVertex3f(35,23,0);
    glVertex3f(30,26,0);
    glVertex3f(25,26,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // car1 left window

    glVertex3f(23,23.5,0);
    glVertex3f(27,23.5,0);
    glVertex3f(27,25.5,0);
    glVertex3f(25,25.5,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // car1 right window

    glVertex3f(28,23.5,0);
    glVertex3f(32,23.5,0);
    glVertex3f(30,25.5,0);
    glVertex3f(28,25.5,0);
    glEnd();

    tire(23.75,19.5);
    tire(30.8,19.5);






    glBegin(GL_QUADS);
    glColor3ub(47,79,79); // car2 body1

    glVertex3f(120,5,0);
    glVertex3f(135,5,0);
    glVertex3f(135,9,0);
    glVertex3f(120,9,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(47,79,79); // car2 body2

    glVertex3f(135,9,0);
    glVertex3f(136,7,0);
    glVertex3f(136,5,0);
    glVertex3f(135,5,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(47,79,79); // car2 roof

    glVertex3f(120,9,0);
    glVertex3f(135,9,0);
    glVertex3f(130,12,0);
    glVertex3f(125,12,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // car2 left window

    glVertex3f(123,9.5,0);
    glVertex3f(127,9.5,0);
    glVertex3f(127,11.5,0);
    glVertex3f(125,11.5,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // car2 right window

    glVertex3f(128,9.5,0);
    glVertex3f(132,9.5,0);
    glVertex3f(130,11.5,0);
    glVertex3f(128,11.5,0);
    glEnd();

    tire(123.75,5.5);
    tire(130.8,5.5);




    glBegin(GL_QUADS);
    glColor3ub(139,69,19); // car3 body1

    glVertex3f(90,32,0);
    glVertex3f(105,32,0);
    glVertex3f(105,36,0);
    glVertex3f(90,36,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19); // car3 body2

    glVertex3f(90,36,0);
    glVertex3f(89,34,0);
    glVertex3f(89,32,0);
    glVertex3f(90,32,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19); // car3 roof

    glVertex3f(90,36,0);
    glVertex3f(105,36,0);
    glVertex3f(100,39,0);
    glVertex3f(95,39,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // car3 left window

    glVertex3f(93,36.5,0);
    glVertex3f(97,36.5,0);
    glVertex3f(97,38.5,0);
    glVertex3f(95,38.5,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // car3 right window

    glVertex3f(98,36.5,0);
    glVertex3f(102,36.5,0);
    glVertex3f(100,38.5,0);
    glVertex3f(98,38.5,0);
    glEnd();

    tire(93.75,32.5);
    tire(100.8,32.5);







    glBegin(GL_QUADS);
    glColor3ub(0,0,128); // car4 body1

    glVertex3f(170,45,0);
    glVertex3f(185,45,0);
    glVertex3f(185,49,0);
    glVertex3f(170,49,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,128); // car4 body2

    glVertex3f(170,49,0);
    glVertex3f(169,47,0);
    glVertex3f(169,45,0);
    glVertex3f(170,45,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,128); // car4 roof

    glVertex3f(170,49,0);
    glVertex3f(185,49,0);
    glVertex3f(180,52,0);
    glVertex3f(175,52,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // car4 left window

    glVertex3f(173,49.5,0);
    glVertex3f(177,49.5,0);
    glVertex3f(177,51.5,0);
    glVertex3f(175,51.5,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // car4 right window

    glVertex3f(178,49.5,0);
    glVertex3f(182,49.5,0);
    glVertex3f(180,51.5,0);
    glVertex3f(178,51.5,0);
    glEnd();

    tire(173.75,45.5);
    tire(180.8,45.5);























    cloud(30,160);
    cloud(36,165);
    cloud(40,160);


    cloud(120,158);
    cloud(126,163);
    cloud(130,158);










    glBegin(GL_QUADS);
    glColor3ub(128,0,0);//home 1 pilar 1

    glVertex3f(0,55,0);
    glVertex3f(20,55,0);
    glVertex3f(20,57,0);
    glVertex3f(0,57,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(128,0,0);//home 1 pilar 2

    glVertex3f(0,120,0);
    glVertex3f(20,120,0);
    glVertex3f(20,122,0);
    glVertex3f(0,122,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,0,0);//home 1 pilar 3

    glVertex3f(19,57,0);
    glVertex3f(20,57,0);
    glVertex3f(20,120,0);
    glVertex3f(19,120,0);
    glEnd();





    glBegin(GL_QUADS);
    glColor3ub(255,69,0);//home 1 inside color

    glVertex3f(0,57,0);
    glVertex3f(19,57,0);
    glVertex3f(19,120,0);
    glVertex3f(0,120,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(128,0,0);//home 1 line 4

    glVertex3f(7,57,0);
    glVertex3f(6,57,0);
    glVertex3f(6,120,0);
    glVertex3f(7,120,0);
    glEnd();





    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 2 pilar 1

    glVertex3f(20,55,0);
    glVertex3f(36,55,0);
    glVertex3f(36,57,0);
    glVertex3f(20,57,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 2 pilar 2

    glVertex3f(20,100,0);
    glVertex3f(30,100,0);
    glVertex3f(30,102,0);
    glVertex3f(20,102,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 2 pilar 3

    glVertex3f(21,57,0);
    glVertex3f(20,57,0);
    glVertex3f(20,102,0);
    glVertex3f(21,102,0);
    glEnd();






    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 2 pilar 3

    glVertex3f(22,57,0);
    glVertex3f(20,57,0);
    glVertex3f(20,102,0);
    glVertex3f(22,102,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(192,192,192);//home 2 inside color 1

    glVertex3f(21,57,0);
    glVertex3f(30,57,0);
    glVertex3f(30,100,0);
    glVertex3f(21,100,0);
    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(192,192,192);//home 2 inside color 2

    glVertex3f(30,57,0);
    glVertex3f(36,57,0);
    glVertex3f(36,90,0);
    glVertex3f(30,90,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 2 pilar 4

    glVertex3f(29,57,0);
    glVertex3f(30,57,0);
    glVertex3f(30,102,0);
    glVertex3f(29,102,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 2 line 5

    glVertex3f(37,55,0);
    glVertex3f(36,55,0);
    glVertex3f(36,90,0);
    glVertex3f(37,90,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 2 pilar 6

    glVertex3f(29,90,0);
    glVertex3f(37,90,0);
    glVertex3f(37,92,0);
    glVertex3f(29,92,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(192,192,192);//home 3 nicher rekha 1

    glVertex3f(37,55,0);
    glVertex3f(55,55,0);
    glVertex3f(55,57,0);
    glVertex3f(37,57,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(192,192,192);//home 3 uporer rekha 2

    glVertex3f(37,132,0);
    glVertex3f(55,132,0);
    glVertex3f(55,130,0);
    glVertex3f(37,130,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(192,192,192);//home 3 pilar left

    glVertex3f(38,57,0);
    glVertex3f(37,57,0);
    glVertex3f(37,130,0);
    glVertex3f(38,130,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(192,192,192);//home 3 pilar right

    glVertex3f(54,56,0);
    glVertex3f(55,56,0);
    glVertex3f(55,130,0);
    glVertex3f(54,130,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153,255,255);//home 3 inside color

    glVertex3f(38,57,0);
    glVertex3f(54,57,0);
    glVertex3f(54,130,0);
    glVertex3f(38,130,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(192,192,192);//home 3 pilar 4

    glVertex3f(42,57,0);
    glVertex3f(43,57,0);
    glVertex3f(43,130,0);
    glVertex3f(42,130,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(95,158,160);//home 4 inside color 1

    glVertex3f(55,55,0);
    glVertex3f(64,55,0);
    glVertex3f(64,110,0);
    glVertex3f(55,110,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(32,178,370);//home 5 inside color 2

    glVertex3f(64,55,0);
    glVertex3f(73,55,0);
    glVertex3f(73,110,0);
    glVertex3f(64,110,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha 1

    glVertex3f(65,57,0);
    glVertex3f(72,57,0);
    glVertex3f(72,56,0);
    glVertex3f(65,56,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  2

    glVertex3f(65,59,0);
    glVertex3f(72,59,0);
    glVertex3f(72,58,0);
    glVertex3f(65,58,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  3

    glVertex3f(65,60,0);
    glVertex3f(72,60,0);
    glVertex3f(72,61,0);
    glVertex3f(65,61,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  4

    glVertex3f(65,62,0);
    glVertex3f(72,62,0);
    glVertex3f(72,63,0);
    glVertex3f(65,63,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  5

    glVertex3f(65,64,0);
    glVertex3f(72,64,0);
    glVertex3f(72,65,0);
    glVertex3f(65,65,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  6

    glVertex3f(65,66,0);
    glVertex3f(72,66,0);
    glVertex3f(72,67,0);
    glVertex3f(65,67,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  7

    glVertex3f(65,68,0);
    glVertex3f(72,68,0);
    glVertex3f(72,69,0);
    glVertex3f(65,69,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  8

    glVertex3f(65,70,0);
    glVertex3f(72,70,0);
    glVertex3f(72,71,0);
    glVertex3f(65,71,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  9

    glVertex3f(65,72,0);
    glVertex3f(72,72,0);
    glVertex3f(72,73,0);
    glVertex3f(65,73,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  10

    glVertex3f(65,74,0);
    glVertex3f(72,74,0);
    glVertex3f(72,75,0);
    glVertex3f(65,75,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  11

    glVertex3f(65,76,0);
    glVertex3f(72,76,0);
    glVertex3f(72,77,0);
    glVertex3f(65,77,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  12

    glVertex3f(65,78,0);
    glVertex3f(72,78,0);
    glVertex3f(72,79,0);
    glVertex3f(65,79,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  13

    glVertex3f(65,80,0);
    glVertex3f(72,80,0);
    glVertex3f(72,81,0);
    glVertex3f(65,81,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  14

    glVertex3f(65,82,0);
    glVertex3f(72,82,0);
    glVertex3f(72,83,0);
    glVertex3f(65,83,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  15

    glVertex3f(65,84,0);
    glVertex3f(72,84,0);
    glVertex3f(72,85,0);
    glVertex3f(65,85,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  16

    glVertex3f(65,86,0);
    glVertex3f(72,86,0);
    glVertex3f(72,87,0);
    glVertex3f(65,87,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  17

    glVertex3f(65,88,0);
    glVertex3f(72,88,0);
    glVertex3f(72,89,0);
    glVertex3f(65,89,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  18

    glVertex3f(65,90,0);
    glVertex3f(72,90,0);
    glVertex3f(72,91,0);
    glVertex3f(65,91,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  19

    glVertex3f(65,92,0);
    glVertex3f(72,92,0);
    glVertex3f(72,93,0);
    glVertex3f(65,93,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  20

    glVertex3f(65,94,0);
    glVertex3f(72,94,0);
    glVertex3f(72,95,0);
    glVertex3f(65,95,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  21

    glVertex3f(65,96,0);
    glVertex3f(72,96,0);
    glVertex3f(72,97,0);
    glVertex3f(65,97,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  22

    glVertex3f(65,98,0);
    glVertex3f(72,98,0);
    glVertex3f(72,99,0);
    glVertex3f(65,99,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  23

    glVertex3f(65,100,0);
    glVertex3f(72,100,0);
    glVertex3f(72,101,0);
    glVertex3f(65,101,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  24

    glVertex3f(65,102,0);
    glVertex3f(72,102,0);
    glVertex3f(72,103,0);
    glVertex3f(65,103,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  25

    glVertex3f(65,104,0);
    glVertex3f(72,104,0);
    glVertex3f(72,105,0);
    glVertex3f(65,105,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  26

    glVertex3f(65,106,0);
    glVertex3f(72,106,0);
    glVertex3f(72,107,0);
    glVertex3f(65,107,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 5 nicher rekha  27

    glVertex3f(65,108,0);
    glVertex3f(72,108,0);
    glVertex3f(72,109,0);
    glVertex3f(65,109,0);
    glEnd();











    glBegin(GL_QUADS);
    glColor3ub(102,205,170);//home 5 inside color 1 main

    glVertex3f(78,55,0);
    glVertex3f(115,55,0);
    glVertex3f(115,140,0);
    glVertex3f(78,140,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,250,154);//home 6 r8 pilar

    glVertex3f(104,55.5,0);
    glVertex3f(105,55.5,0);
    glVertex3f(105,125,0);
    glVertex3f(104,125,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,250,154);//home 6  pilar

    glVertex3f(88,55.5,0);
    glVertex3f(89,55.5,0);
    glVertex3f(89,125,0);
    glVertex3f(88,125,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer

    glVertex3f(78,135.5,0);
    glVertex3f(115,135.5,0);
    glVertex3f(115,140,0);
    glVertex3f(78,140,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop

    glVertex3f(80,135.5,0);
    glVertex3f(82,135.5,0);
    glVertex3f(82,140,0);
    glVertex3f(80,140,0);
    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop

    glVertex3f(86,135.5,0);
    glVertex3f(88,135.5,0);
    glVertex3f(88,140,0);
    glVertex3f(86,140,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop

    glVertex3f(94,135.5,0);
    glVertex3f(92,135.5,0);
    glVertex3f(92,140,0);
    glVertex3f(94,140,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop

    glVertex3f(100,135.5,0);
    glVertex3f(98,135.5,0);
    glVertex3f(98,140,0);
    glVertex3f(100,140,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop

    glVertex3f(106,135.5,0);
    glVertex3f(104,135.5,0);
    glVertex3f(104,140,0);
    glVertex3f(106,140,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop

    glVertex3f(110,135.5,0);
    glVertex3f(112,135.5,0);
    glVertex3f(112,140,0);
    glVertex3f(110,140,0);
    glEnd();













    glBegin(GL_QUADS);
    glColor3ub(0,128,0);//home 5 pilar uporer

    glVertex3f(78,132,0);
    glVertex3f(115,132,0);
    glVertex3f(115,135.5,0);
    glVertex3f(78,135.5,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 5 pilar uporer

    glVertex3f(78,128.5,0);
    glVertex3f(115,128.5,0);
    glVertex3f(115,132,0);
    glVertex3f(78,132,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,128,0);//home 5 pilar uporer

    glVertex3f(78,128.5,0);
    glVertex3f(115,128.5,0);
    glVertex3f(115,125,0);
    glVertex3f(78,125,0);
    glEnd();






    glBegin(GL_QUADS);
    glColor3ub(0,0,0);//home 5 pilar nicer

    glVertex3f(78,55,0);
    glVertex3f(115,55,0);
    glVertex3f(115,55.5,0);
    glVertex3f(78,55.5,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);//home 6 pilar uporer

    glVertex3f(78,140,0);
    glVertex3f(115,140,0);
    glVertex3f(115,139.5,0);
    glVertex3f(78,139.5,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 2

    glVertex3f(80,135.5,0);
    glVertex3f(82,135.5,0);
    glVertex3f(82,132,0);
    glVertex3f(80,132,0);
    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 2

    glVertex3f(86,135.5,0);
    glVertex3f(88,135.5,0);
    glVertex3f(88,132,0);
    glVertex3f(86,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 2

    glVertex3f(94,135.5,0);
    glVertex3f(92,135.5,0);
    glVertex3f(92,132,0);
    glVertex3f(94,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 2

    glVertex3f(100,135.5,0);
    glVertex3f(98,135.5,0);
    glVertex3f(98,132,0);
    glVertex3f(100,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 2

    glVertex3f(106,135.5,0);
    glVertex3f(104,135.5,0);
    glVertex3f(104,132,0);
    glVertex3f(106,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 2

    glVertex3f(110,135.5,0);
    glVertex3f(112,135.5,0);
    glVertex3f(112,132,0);
    glVertex3f(110,132,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 3

    glVertex3f(80,128.5,0);
    glVertex3f(82,128.5,0);
    glVertex3f(82,132,0);
    glVertex3f(80,132,0);
    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 3

    glVertex3f(86,128.5,0);
    glVertex3f(88,128.5,0);
    glVertex3f(88,132,0);
    glVertex3f(86,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 3

    glVertex3f(94,128.5,0);
    glVertex3f(92,128.5,0);
    glVertex3f(92,132,0);
    glVertex3f(94,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 3

    glVertex3f(100,128.5,0);
    glVertex3f(98,128.5,0);
    glVertex3f(98,132,0);
    glVertex3f(100,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 3

    glVertex3f(106,128.5,0);
    glVertex3f(104,128.5,0);
    glVertex3f(104,132,0);
    glVertex3f(106,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 3

    glVertex3f(110,128.5,0);
    glVertex3f(112,128.5,0);
    glVertex3f(112,132,0);
    glVertex3f(110,132,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 4

    glVertex3f(80,128.4,0);
    glVertex3f(82,128.4,0);
    glVertex3f(82,124.9,0);
    glVertex3f(80,124.9,0);
    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 4

    glVertex3f(86,128.4,0);
    glVertex3f(88,128.4,0);
    glVertex3f(88,124.9,0);
    glVertex3f(86,124.9,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 4

    glVertex3f(94,128.4,0);
    glVertex3f(92,128.4,0);
    glVertex3f(92,124.9,0);
    glVertex3f(94,124.9,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 4

    glVertex3f(100,128.4,0);
    glVertex3f(98,128.4,0);
    glVertex3f(98,124.9,0);
    glVertex3f(100,124.9,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 4

    glVertex3f(106,128.4,0);
    glVertex3f(104,128.4,0);
    glVertex3f(104,124.9,0);
    glVertex3f(106,124.9,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar uporer loop 4

    glVertex3f(110,128.4,0);
    glVertex3f(112,128.4,0);
    glVertex3f(112,124.9,0);
    glVertex3f(110,124.9,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 2 blue

    glVertex3f(84,135.5,0);
    glVertex3f(86,135.5,0);
    glVertex3f(86,132,0);
    glVertex3f(84,132,0);
    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 2

    glVertex3f(90,135.5,0);
    glVertex3f(88,135.5,0);
    glVertex3f(88,132,0);
    glVertex3f(90,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 2

    glVertex3f(98,135.5,0);
    glVertex3f(96,135.5,0);
    glVertex3f(96,132,0);
    glVertex3f(98,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 2

    glVertex3f(100,135.5,0);
    glVertex3f(102,135.5,0);
    glVertex3f(102,132,0);
    glVertex3f(100,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 2

    glVertex3f(110,135.5,0);
    glVertex3f(108,135.5,0);
    glVertex3f(108,132,0);
    glVertex3f(110,132,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,255);//home 6 pilar uporer loop 2

    glVertex3f(112,135.5,0);
    glVertex3f(113.5,135.5,0);
    glVertex3f(113.5,132,0);
    glVertex3f(112,132,0);
    glEnd();






    glBegin(GL_QUADS);
    glColor3ub(0,100,0);//home 6 r8 pilar

    glVertex3f(102,55,0);
    glVertex3f(103.8,55,0);
    glVertex3f(103.8,125,0);
    glVertex3f(102,125,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,100,0);//home 6 left 8 pilar

    glVertex3f(89,55,0);
    glVertex3f(90.8,55,0);
    glVertex3f(90.8,125,0);
    glVertex3f(89,125,0);
    glEnd();











    glBegin(GL_QUADS);
    glColor3ub(0,0,0);//home 5 r8 pilar

    glVertex3f(115,55,0);
    glVertex3f(114.7,55,0);
    glVertex3f(114.7,140,0);
    glVertex3f(115,140,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,100,0);//home 5 left pilar

    glVertex3f(78,55,0);
    glVertex3f(77.7,55,0);
    glVertex3f(77.7,140,0);
    glVertex3f(78,140,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,128,0);//home 5 pilar nicer

    glVertex3f(78,73,0);
    glVertex3f(89,73,0);
    glVertex3f(89,70,0);
    glVertex3f(78,70,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,128,0);//home 5 pilar nicer

    glVertex3f(103.8,73,0);
    glVertex3f(114.7,73,0);
    glVertex3f(114.7,70,0);
    glVertex3f(103.8,70,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,128);//home 5 pilar nicer

    glVertex3f(78,84,0);
    glVertex3f(89,84,0);
    glVertex3f(89,81,0);
    glVertex3f(78,81,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,128);//home 5 pilar nicer

    glVertex3f(103.8,84,0);
    glVertex3f(115,84,0);
    glVertex3f(115,81,0);
    glVertex3f(103.8,81,0);
    glEnd();





    glBegin(GL_QUADS);
    glColor3ub(0,128,0);//home 6 pilar uporer

    glVertex3f(89,117,0);
    glVertex3f(78,117,0);
    glVertex3f(78,119,0);
    glVertex3f(89,119,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,128);//home 6 pilar middle

    glVertex3f(89,114,0);
    glVertex3f(78,114,0);
    glVertex3f(78,112,0);
    glVertex3f(89,112,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar nicer

    glVertex3f(89,106,0);
    glVertex3f(78,106,0);
    glVertex3f(78,107.8,0);
    glVertex3f(89,107.8,0);
    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(0,128,0);//home 6 pilar uporer

    glVertex3f(103.8,117,0);
    glVertex3f(115,117,0);
    glVertex3f(115,119,0);
    glVertex3f(103.8,119,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,128);//home 6 pilar middle

    glVertex3f(103.8,114,0);
    glVertex3f(115,114,0);
    glVertex3f(115,112,0);
    glVertex3f(103.8,112,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,255,255);//home 6 pilar nicer

    glVertex3f(103.8,106,0);
    glVertex3f(114.7,106,0);
    glVertex3f(114.7,107.8,0);
    glVertex3f(103.8,107.8,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 5 pilar nicer

    glVertex3f(90.8,125,0);
    glVertex3f(90.8,120,0);
    glVertex3f(102,120,0);
    glVertex3f(102,125,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 5 pilar nicer

    glVertex3f(90.8,85,0);
    glVertex3f(90.8,80,0);
    glVertex3f(102,80,0);
    glVertex3f(102,85,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(230,230,250);//home 5 pilar nicer

    glVertex3f(90.8,56,0);
    glVertex3f(90.8,80,0);
    glVertex3f(102,80,0);
    glVertex3f(102,56,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(176,196,222);//trafic signal top red

    glVertex3f(95.8,55.5,0);
    glVertex3f(95.8,80,0);
    glVertex3f(96.5,80,0);
    glVertex3f(96.5,55.5,0);
    glEnd();














































    glBegin(GL_QUADS);
    glColor3ub(0,20,139);//home 6 inside color 1

    glVertex3f(120,55,0);
    glVertex3f(140,55,0);
    glVertex3f(140,135,0);
    glVertex3f(120,135,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,128,0);//home 6 inside color 2 green

    glVertex3f(120,125,0);
    glVertex3f(140,125,0);
    glVertex3f(140,135,0);
    glVertex3f(120,135,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);//home 6 pilar nicer

    glVertex3f(120,55,0);
    glVertex3f(140,55,0);
    glVertex3f(140,56.5,0);
    glVertex3f(120,56.5,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,0,0);//home 6 pilar uporer

    glVertex3f(120,135,0);
    glVertex3f(140,135,0);
    glVertex3f(140,134,0);
    glVertex3f(120,134,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,0,0);//home 6 pilar 3

    glVertex3f(119.6,55,0);
    glVertex3f(120,55,0);
    glVertex3f(120,135,0);
    glVertex3f(119.6,135,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);//home 6 pilar 3

    glVertex3f(139.5,55,0);
    glVertex3f(140,55,0);
    glVertex3f(140,135,0);
    glVertex3f(139.5,135,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 6 pilar nicer

    glVertex3f(120.2,58,0);
    glVertex3f(139.5,58,0);
    glVertex3f(139.5,56.5,0);
    glVertex3f(120.2,56.5,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 6 pilar nicer

    glVertex3f(120.2,63.5,0);
    glVertex3f(139.5,63.5,0);
    glVertex3f(139.5,62,0);
    glVertex3f(120.2,62,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 6 pilar nicer

    glVertex3f(120.2,69,0);
    glVertex3f(139.5,69,0);
    glVertex3f(139.5,67.8,0);
    glVertex3f(120.2,67.8,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 6 pilar nicer

    glVertex3f(120.2,75,0);
    glVertex3f(139.5,75,0);
    glVertex3f(139.5,73.5,0);
    glVertex3f(120.2,73.5,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 6 pilar nicer

    glVertex3f(120.2,81,0);
    glVertex3f(139.5,81,0);
    glVertex3f(139.5,79.8,0);
    glVertex3f(120.2,79.8,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 6 pilar nicer

    glVertex3f(120.2,86,0);
    glVertex3f(139.5,86,0);
    glVertex3f(139.5,87.4,0);
    glVertex3f(120.2,87.4,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 6 pilar nicer

    glVertex3f(120.2,92,0);
    glVertex3f(139.5,92,0);
    glVertex3f(139.5,93.4,0);
    glVertex3f(120.2,93.4,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 6 pilar nicer

    glVertex3f(120.2,100,0);
    glVertex3f(139.5,100,0);
    glVertex3f(139.5,98.8,0);
    glVertex3f(120.2,98.8,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 6 pilar nicer

    glVertex3f(120.2,106,0);
    glVertex3f(139.5,106,0);
    glVertex3f(139.5,104.5,0);
    glVertex3f(120.2,104.5,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 6 pilar nicer

    glVertex3f(120.2,111,0);
    glVertex3f(139.5,111,0);
    glVertex3f(139.5,112.5,0);
    glVertex3f(120.2,112.5,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(128,128,128);//home 6 pilar nicer

    glVertex3f(120.2,118,0);
    glVertex3f(139.5,118,0);
    glVertex3f(139.5,119.5,0);
    glVertex3f(120.2,119.5,0);
    glEnd();











    glBegin(GL_QUADS);
    glColor3ub(32,178,170);//home 8 inside color 2

    glVertex3f(148,55,0);
    glVertex3f(155,55,0);
    glVertex3f(155,105,0);
    glVertex3f(148,105,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(95,158,160);//home 9 inside color 1

    glVertex3f(155,55,0);
    glVertex3f(164,55,0);
    glVertex3f(164,105,0);
    glVertex3f(155,105,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 1

    glVertex3f(156,104,0);
    glVertex3f(163,104,0);
    glVertex3f(163,105,0);
    glVertex3f(156,105,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 2

    glVertex3f(156,103,0);
    glVertex3f(163,103,0);
    glVertex3f(163,102,0);
    glVertex3f(156,102,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 3

    glVertex3f(156,101,0);
    glVertex3f(163,101,0);
    glVertex3f(163,100,0);
    glVertex3f(156,100,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 4

    glVertex3f(156,99,0);
    glVertex3f(163,99,0);
    glVertex3f(163,98,0);
    glVertex3f(156,98,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 5

    glVertex3f(156,97,0);
    glVertex3f(163,97,0);
    glVertex3f(163,96,0);
    glVertex3f(156,96,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 6

    glVertex3f(156,95,0);
    glVertex3f(163,95,0);
    glVertex3f(163,94,0);
    glVertex3f(156,94,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 7

    glVertex3f(156,93,0);
    glVertex3f(163,93,0);
    glVertex3f(163,92,0);
    glVertex3f(156,92,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 8

    glVertex3f(156,90,0);
    glVertex3f(163,90,0);
    glVertex3f(163,91,0);
    glVertex3f(156,91,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 9

    glVertex3f(156,89,0);
    glVertex3f(163,89,0);
    glVertex3f(163,88,0);
    glVertex3f(156,88,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 10

    glVertex3f(156,87,0);
    glVertex3f(163,87,0);
    glVertex3f(163,86,0);
    glVertex3f(156,86,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 11

    glVertex3f(156,85,0);
    glVertex3f(163,85,0);
    glVertex3f(163,84,0);
    glVertex3f(156,84,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 12

    glVertex3f(156,83,0);
    glVertex3f(163,83,0);
    glVertex3f(163,82,0);
    glVertex3f(156,82,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 13

    glVertex3f(156,81,0);
    glVertex3f(163,81,0);
    glVertex3f(163,80,0);
    glVertex3f(156,80,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 14

    glVertex3f(156,79,0);
    glVertex3f(163,79,0);
    glVertex3f(163,78,0);
    glVertex3f(156,78,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 15

    glVertex3f(156,77,0);
    glVertex3f(163,77,0);
    glVertex3f(163,76,0);
    glVertex3f(156,76,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 16

    glVertex3f(156,75,0);
    glVertex3f(163,75,0);
    glVertex3f(163,74,0);
    glVertex3f(156,74,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 17

    glVertex3f(156,73,0);
    glVertex3f(163,73,0);
    glVertex3f(163,72,0);
    glVertex3f(156,72,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 18

    glVertex3f(156,71,0);
    glVertex3f(163,71,0);
    glVertex3f(163,70,0);
    glVertex3f(156,70,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 19

    glVertex3f(156,69,0);
    glVertex3f(163,69,0);
    glVertex3f(163,68,0);
    glVertex3f(156,68,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 20

    glVertex3f(156,67,0);
    glVertex3f(163,67,0);
    glVertex3f(163,66,0);
    glVertex3f(156,66,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 21

    glVertex3f(156,65,0);
    glVertex3f(163,65,0);
    glVertex3f(163,64,0);
    glVertex3f(156,64,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 22

    glVertex3f(156,63,0);
    glVertex3f(163,63,0);
    glVertex3f(163,62,0);
    glVertex3f(156,62,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 23

    glVertex3f(156,61,0);
    glVertex3f(163,61,0);
    glVertex3f(163,60,0);
    glVertex3f(156,60,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 24

    glVertex3f(156,59,0);
    glVertex3f(163,59,0);
    glVertex3f(163,58,0);
    glVertex3f(156,58,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,178,170);//home 9 uporer rekha 25

    glVertex3f(156,57,0);
    glVertex3f(163,57,0);
    glVertex3f(163,56,0);
    glVertex3f(156,56,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,128,128);//home 10 inside color 1

    glVertex3f(175,55,0);
    glVertex3f(165,55,0);
    glVertex3f(165,95,0);
    glVertex3f(175,95,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(192,192,192);//home 11 nicher rekha 1

    glVertex3f(175,55,0);
    glVertex3f(180,55,0);
    glVertex3f(180,57,0);
    glVertex3f(175,57,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(192,192,192);//home 11 uporer rekha 2

    glVertex3f(175,110,0);
    glVertex3f(180,110,0);
    glVertex3f(180,108,0);
    glVertex3f(175,108,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(147,112,219);//home 11 pilar left

    glVertex3f(175,57,0);
    glVertex3f(180,57,0);
    glVertex3f(180,108,0);
    glVertex3f(175,108,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(95,158,160);//home 12 inside color

    glVertex3f(180,110,0);
    glVertex3f(190,110,0);
    glVertex3f(190,70,0);
    glVertex3f(180,70,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(65,105,225);//home 13 inside color

    glVertex3f(180,55,0);
    glVertex3f(190,55,0);
    glVertex3f(190,70,0);
    glVertex3f(180,70,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(64,224,208);//home 14 inside color

    glVertex3f(195,55,0);
    glVertex3f(190,55,0);
    glVertex3f(190,90,0);
    glVertex3f(195,90,0);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,128,128);//home 15 inside color

    glVertex3f(200,55,0);
    glVertex3f(195,55,0);
    glVertex3f(195,100,0);
    glVertex3f(200,100,0);
    glEnd();

    //car4
    glBegin(GL_QUADS);
    glColor3ub(255, 77, 136);
    glVertex2f(.23,-0.68);
    glVertex2f(.23,-0.65);
    glVertex2f(.32,-0.65);
    glVertex2f(.32,-0.68);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 77, 136);
    glVertex2f(.29,-0.65);
    glVertex2f(.29,-0.61);
    glVertex2f(.24,-0.61);
    glVertex2f(.24,-0.65);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(.285,-0.65);
    glVertex2f(.285,-0.615);
    glVertex2f(.245,-0.615);
    glVertex2f(.245,-0.65);
    glEnd();

    sun(172,182);

    glFlush ();
}


void init (void)
{
    /* select clearing (background) color */
    glClearColor (255,255, 255, 0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();


    glOrtho(0, 200, 0, 200, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);


    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Independent");
    init ();
    glutDisplayFunc(display);



    glutMainLoop();


    return 0;
}
