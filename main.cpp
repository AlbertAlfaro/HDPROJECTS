#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
//HOLA SOY ALGUIEN
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(30);
     
     glBegin(GL_QUADS);//CESPED
     glColor3f(0.0,1.0,0.0); 
     glVertex2d(-18,-1);
     glVertex2d(18,-1);
     glVertex2d(18,-15);
     glVertex2d(-18,-15);
     
     glEnd();
     
     glBegin(GL_QUADS);//ARBOL ATRAS 1
     glColor3f(0.60,0.40,0.12); 
     glVertex2d(-12.5,-1.0);
     glVertex2d(-6.5,-1.0);
     glVertex2d(-9.5,25);
     glVertex2d(-12.5,-1.0);
     
     glEnd();
     glBegin(GL_QUADS);//ARBOL ATRAS 2
     glColor3f(0.60,0.40,0.12); 
     glVertex2d(-4.5,-1.0);
     glVertex2d(1.5,-1.0);
     glVertex2d(-1.5,25);
     glVertex2d(-4.5,-1.0);
     
     glEnd();
     glBegin(GL_QUADS);//ARBOL ATRAS 3
     glColor3f(0.60,0.40,0.12); 
     glVertex2d(6.5,-1.0);
     glVertex2d(13.5,-1.0);
     glVertex2d(10.5,25);
     glVertex2d(6.5,-1.0);
     
     glEnd();
     
     glBegin(GL_QUADS);//ARBOL 1
     glColor3f(1.0,1.0,0.0); 
     glVertex2d(-17.5,-1.0);
     glVertex2d(-10.5,-1.0);
     glVertex2d(-14,25);
     glVertex2d(-17.5,-1.0);
     
     glEnd();
     
     glBegin(GL_QUADS);//ARBOL 2
     glColor3f(1.0,1.0,0.0); 
     glVertex2d(-8.5,-1.0);
     glVertex2d(-1.5,-1.0);
     glVertex2d(-5,25);
     glVertex2d(-8.5,-1.0);
     
     glEnd();
     
     glBegin(GL_QUADS);//ARBOL 3
     glColor3f(1.0,1.0,0.0); 
     glVertex2d(0.5,-1.0);
     glVertex2d(7.5,-1.0);
     glVertex2d(4,25);
     glVertex2d(0.5,-1.0);
     
     glEnd();
     glBegin(GL_QUADS);//ARBOL 3
     glColor3f(1.0,1.0,0.0); 
     glVertex2d(9.5,-1.0);
     glVertex2d(16.5,-1.0);
     glVertex2d(13,25);
     glVertex2d(9.5,-1.0);
     
     glEnd();
     
     glBegin(GL_QUADS);//CUADRO CASA
     glColor3f(0.60,0.45,0.12); 
     glVertex2d(7,7);
     glVertex2d(13,7);
     glVertex2d(13,-7);
     glVertex2d(7,-7);
     
     glEnd();
     glBegin(GL_QUADS);//PUERTA
     glColor3f(0.0,0.0,0.0); 
     glVertex2d(8.6,1);
     glVertex2d(11.3,1);
     glVertex2d(11.3,-7);
     glVertex2d(8.6,-7);
     
     glEnd();
     glBegin(GL_QUADS);//CHOZA
     glColor3f(0.25,0.25,0.25); 
     glVertex2d(6.5,7.0);
     glVertex2d(13.5,7.0);
     glVertex2d(10,15);
     glVertex2d(6.5,7.0);
     
     glEnd();
     
     double px=17,py=35, cx=0,cy=0;
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	for(double j=0.0;j<360;j+=0.01){
		cx=2*cos(j)+px;
		cy=2*sin(j)+py;
		glVertex3f(cx,cy,0);
		}		
    glEnd();





    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-20, 20, -20, 40, -5, 5);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (350, 100);
    glutCreateWindow ("Bosque de la china");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
