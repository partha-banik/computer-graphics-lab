#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
    glClearColor(0.1, 0.3, 0.1,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,500.0,0.0,600.0);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.1, 0.3, 0.9);
    glBegin(GL_POLYGON);

    glVertex2d(0,0);
    glVertex2d(500,0);
    glVertex2d(500,39);
    glVertex2d(0,39);

    glEnd();

    glColor3f(0.9, 0.3, 01);
    glBegin(GL_TRIANGLES);

    glVertex2d(0,40);
    glVertex2d(500,40);
    glVertex2d(250,180);

    glEnd();

    glColor3f(0.1, 0.9, 0.3);
    glBegin(GL_TRIANGLES);

    glVertex2d(40,40);
    glVertex2d(460,40);
    glVertex2d(250,220);

    glEnd();

    glColor3f(0.3, 0.9, 0.1);
    glBegin(GL_TRIANGLES);

    glVertex2d(80,40);
    glVertex2d(420,40);
    glVertex2d(250,260);

    glEnd();

    glColor3f(0.3, 0.1, 0.9);
    glBegin(GL_TRIANGLES);

    glVertex2d(120,40);
    glVertex2d(380,40);
    glVertex2d(250,300);

    glEnd();

    glColor3f(0.9, 0.1, 0.3);
    glBegin(GL_TRIANGLES);

    glVertex2d(160,40);
    glVertex2d(340,40);
    glVertex2d(250,350);

    glEnd();

    glColor3f(0.3, 0.9, 0.1);
    glBegin(GL_TRIANGLES);

    glVertex2d(200,40);
    glVertex2d(300,40);
    glVertex2d(250,400);

    glEnd();

    glColor3f(0.9, 0.3, 0.1);
    glBegin(GL_TRIANGLES);

    glVertex2d(235,40);
    glVertex2d(265,40);
    glVertex2d(250,450);

    glEnd();

    glFlush();
    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lab-5");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
