#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


glBegin(GL_QUADS);
glColor3ub(128, 0, 128);
glVertex2f( -0.5, 0.6);
glVertex2f( -0.5, -0.6);
glVertex2f( 0.4, -0.6 );
glVertex2f( 0.4, 0.6 );
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f( -0.32, 0.23);
glVertex2f( -0.32, -0.37);
glVertex2f( -0.26, -0.4 );
glVertex2f( -0.26, 0.3 );
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f( -0.26, -0.35);
glVertex2f( -0.26, -0.40);
glVertex2f( 0.16, 0.167 );
glVertex2f( 0.16, 0.42 );
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f( -0.26, 0.30);
glVertex2f( -0.26, 0.22);
glVertex2f( 0.16, -0.48 );
glVertex2f( 0.16, -0.27 );
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f( 0.16, 0.42);
glVertex2f( 0.16, -0.48);
glVertex2f( 0.25, -0.45 );
glVertex2f( 0.25, 0.35 );
glEnd();

glEnd();

	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}
