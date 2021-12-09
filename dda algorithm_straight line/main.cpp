#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init(void)
{
    glClearColor(0.1,0.0,0.2,0.1); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(0.0, 300.0, 0.0, 300.0, -1.0, 1.0);
}

void Draw()
{
    //starting and ending point
    int x1=21, y1=87, x2=387, y2=321;
    double x, y, m;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f (0.1, 0.0, 1.0);

    // slope calculate
    m = (y2-y1)/(x2-x1);
    if(x2>x1){
        //check case 1
        if(m<=1){
            x = 1;
            y = m;
        }

        //check case 2
        else if(m>1){
            y = 1;
            x = 1/m;
        }
    }

    else if(x1>x2){
        //check case 3
        if(m<=1){
            x = -1;
            y = -m;
        }

        //check case 4
        else if(m>1){
            x = (-1)/m;
            y = -1;
        }
    }

    glBegin(GL_POINTS);
    glVertex2i(round(x1), round(y1));

    while(1){
        x1 = x1+x;
        y1 = y1+y;

        glVertex2i(round(x1), round(y1));

        if( x1==x2 || y1==y2 ) {
            break;
        }
    }
    glEnd();
    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,200);
    glutCreateWindow("Lab Week_3_partha_182-15-2139");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
