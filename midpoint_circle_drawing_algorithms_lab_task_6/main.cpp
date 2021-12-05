#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>
void init(void)
{
    glClearColor(0.1,0.2,0.0,0.3);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-400.0, 400.0, -400.0, 400.0, -1.0, 1.0);
}
void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 1, 0);
    glBegin(GL_POINTS);
    for (int i=-200; i<=200; i++)
    {
        glVertex2d(0,i);
        glVertex2d(i,0);
        glVertex2d(i,i);
        glVertex2d(i,-i);
    }

    //2138%157 reminder 41
    double m=0, n=0, r=41;
    double pk=1-r;
    double pkk;
    double x=m, y=n+r;
    glBegin(GL_POINTS);
    glVertex2d(x,y);

    while(1)
    {
        if(pk<0)
        {
            x++;
            pkk=pk +(2*x)+1;
        }
        else if(pk>=0)
        {
            x++;
            y--;
            pkk=pk +(2*x)+1-(2*y);
        }

        pk=pkk;

        glColor3f(0.0, 0.3, 0.9);
        glVertex2d(x,y);
        glColor3f(0.0, 0.9, 0.3);
        glVertex2d(x,-y);
        glColor3f(0.3, 0.0, 0.9);
        glVertex2d(-x,y);
        glColor3f(0.3, 0.9, 0.0);
        glVertex2d(-x,-y);
        glColor3f(0.9, 0.0, 0.3);
        glVertex2d(y,x);
        glColor3f(0.9, 0.3, 0.0);
        glVertex2d(-y,x);
        glColor3f(0.0, 0.3, 0.9);
        glVertex2d(y,-x);
        glColor3f(0.0, 0.9, 0.3);
        glVertex2d(-y,-x);
        if(x>=y)
        {
            break;
        }
    }
    glEnd();
    glFlush();
    glutSwapBuffers();
}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,1);
    glutInitWindowSize(400,400);
    glutCreateWindow("partha_182-15-2139");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
