#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

//house block
glBegin(GL_QUADS);
glColor3ub(255, 223, 128);
glVertex2f(-0.59, 0.27);
glVertex2f( -0.59, -0.6);
glVertex2f( 0.8, -0.6 );
glVertex2f( 0.8, 0.27 );
glEnd();


glBegin(GL_QUADS);
glColor3ub(128, 96, 0);
glVertex2f(-0.65, 0.27);
glVertex2f( -0.65, 0.23);
glVertex2f( 0.91, 0.23);
glVertex2f( 0.91, 0.27 );
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(204, 153, 0);
glVertex2f(-0.12, 0.68);
glVertex2f(-0.65, 0.27);
glVertex2f( 0.25, 0.27);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(204, 153, 0);
glVertex2f(0.09, 0.85);
glVertex2f(-0.12, 0.68);
glVertex2f( 0.27, 0.68);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 153, 0);
glVertex2f(-0.12, 0.68);
glVertex2f( 0.25, 0.27);
glVertex2f( 0.91, 0.27 );
glVertex2f( 0.53, 0.68);
glEnd();


//window
glBegin(GL_QUADS);
glColor3ub(96, 32, 32);
glVertex2f(-0.53, 0.19);
glVertex2f( -0.53, -0.39);
glVertex2f( -0.4, -0.39 );
glVertex2f( -0.4, 0.19);
glEnd();

glBegin(GL_QUADS);
glColor3ub(96, 32, 32);
glVertex2f(-0.34, 0.19);
glVertex2f( -0.34, -0.39);
glVertex2f( -0.21, -0.39 );
glVertex2f( -0.21, 0.19);
glEnd();

//window glass
glBegin(GL_QUADS);
glColor3ub(153, 230, 255);
glVertex2f(-0.51, 0.16);
glVertex2f( -0.51, -0.1);
glVertex2f( -0.41, -0.1);
glVertex2f( -0.41, 0.16);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 230, 255);
glVertex2f(-0.51, -0.14);
glVertex2f( -0.51, -0.34);
glVertex2f( -0.41, -0.34);
glVertex2f( -0.41, -0.14);
glEnd();

glBegin(GL_QUADS);
glColor3ub(153, 230, 255);
glVertex2f(-0.32, 0.16);
glVertex2f( -0.32, -0.1);
glVertex2f( -0.23, -0.1);
glVertex2f( -0.23, 0.16);
glEnd();

glBegin(GL_QUADS);
glColor3ub(153, 230, 255);
glVertex2f(-0.32, -0.15);
glVertex2f( -0.32, -0.34);
glVertex2f( -0.23, -0.34);
glVertex2f( -0.23, -0.15);
glEnd();

//garage
glBegin(GL_QUADS);
glColor3ub(153, 115, 0);
glVertex2f(0.2, 0.12);
glVertex2f(0.2, -0.57);
glVertex2f( 0.76, -0.57);
glVertex2f( 0.76, 0.12);
glEnd();

//door
glBegin(GL_QUADS);
glColor3ub(26, 26, 0);
glVertex2f(-0.15, 0.4);
glVertex2f(-0.15, -0.58);
glVertex2f(0.16, -0.58);
glVertex2f(0.16, 0.4);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 223, 128);
glVertex2f(-0.13, 0.37);
glVertex2f(-0.13, -0.5);
glVertex2f(0.14, -0.5);
glVertex2f(0.14, 0.37);
glEnd();


glBegin(GL_QUADS);
glColor3ub(183, 183, 149);
glVertex2f(-0.12, 0.12);
glVertex2f(-0.12, -0.5);
glVertex2f(0.12, -0.5);
glVertex2f(0.12, 0.12);
glEnd();


glBegin(GL_QUADS);
glColor3ub(128, 32, 0);
glVertex2f(-0.1, 0.1);
glVertex2f(-0.1, -0.5);
glVertex2f(0.1, -0.5);
glVertex2f(0.1, 0.1);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 223, 255);
glVertex2f(-0.07, -0.009);
glVertex2f(-0.07, -0.48);
glVertex2f(0.07, -0.48);
glVertex2f(0.07, -0.009);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 32, 0);
glVertex2f(-0.03, -0.08);
glVertex2f(-0.03, -0.4);
glVertex2f(0.03, -0.4);
glVertex2f(0.03, -0.08);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 223, 255);
glVertex2f(-0.016, -0.15);
glVertex2f(-0.016, -0.38);
glVertex2f(0.006, -0.38);
glVertex2f(0.006, -0.15);
glEnd();


glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.14, -0.52);
glVertex2f(-0.14, -0.57);
glVertex2f(0.15, -0.57);
glVertex2f(0.15, -0.52);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(153, 115, 0);
glVertex2f(0.0042, 0.56);
glVertex2f( -0.18, 0.4);
glVertex2f( 0.18, 0.4);
glEnd();

glBegin(GL_LINES);

glColor3ub(128, 96, 0);
glVertex2f(0.0042, 0.56);
glVertex2f(-0.12, 0.68);
glVertex2f(-0.12, 0.68);
glVertex2f(-0.65, 0.27);
glVertex2f(-0.12, 0.68);
glVertex2f(0.09, 0.85);
glVertex2f(0.09, 0.85);
glVertex2f(0.27, 0.68);
glVertex2f(0.27, 0.68);
glVertex2f(0.53, 0.68);
glVertex2f(0.53, 0.68);
glVertex2f(0.91, 0.27);

glVertex2f(0.2, 0);
glVertex2f(0.76, 0);




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
