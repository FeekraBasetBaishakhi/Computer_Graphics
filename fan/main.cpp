#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

 GLfloat o = 0.0f;
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void speed(void)
{
   o +=.07;
			glutPostRedisplay();
			glRotatef(o, 0.0, 0.0, 1.0);
}

void speed2(void)
{
   o +=.8;
			glutPostRedisplay();
			glRotatef(o, 0.0, 0.0, 1.0);
}

int k=0;
void keyboardHandle(unsigned char key, int x, int y)
{

	switch (key) {

		case 'q':
                {
                    if(k==0)
                {
		            glutIdleFunc(speed);
                    k=1;
                }

        else
        {
             glutIdleFunc(speed2);
             k=1;
        }
        }

	}
}



void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

glLoadIdentity();
glBegin(GL_QUADS);//stand
glColor3ub(143, 170, 195);
glVertex2f(-0.03, 0);
glVertex2f(-0.04, -0.8);
glVertex2f(0.04, -0.8);
glVertex2f(0.03, 0);
glEnd();
glLoadIdentity();
glBegin(GL_QUADS);//stand_shadow
glColor3ub(82, 109, 136);
glVertex2f(-0.03, 0);
glVertex2f(-0.04, -0.8);
glVertex2f(-0.018, -0.8);
glVertex2f(-0.018, 0);
glEnd();
glLoadIdentity();
glBegin(GL_POLYGON);//stand_lower
glColor3ub(82, 109, 136);
glVertex2f(-0.195, -0.85);
glVertex2f(-0.195, -0.95);
glVertex2f(0.18, -0.95);
glVertex2f(0.18, -0.85);
glVertex2f(0.04, -0.8);
glVertex2f(-0.04, -0.8);
glVertex2f(-0.195, -0.85);
glEnd();
glLoadIdentity();
glBegin(GL_QUADS);//switch
glColor3ub(247, 205, 49);
glVertex2f(0.05, -0.88);
glVertex2f(0.05, -0.9);
glVertex2f(0.07, -0.9);
glVertex2f(0.07, -0.88);
glEnd();
glLoadIdentity();
glBegin(GL_QUADS);//switch
glColor3ub(247, 205, 49);
glVertex2f(0.08, -0.88);
glVertex2f(0.08, -0.9);
glVertex2f(0.1, -0.9);
glVertex2f(0.1, -0.88);
glEnd();
glLoadIdentity();
glBegin(GL_QUADS);//switch
glColor3ub(247, 205, 49);
glVertex2f(0.11, -0.88);
glVertex2f(0.11, -0.9);
glVertex2f(0.13, -0.9);
glVertex2f(0.13, -0.88);
glEnd();
glLoadIdentity();

glPushMatrix();
glTranslatef(0.0,0.0,0);
speed();

glBegin(GL_POLYGON);
glColor3ub(143, 170, 195);
glVertex2f(0.0, 0.0);
glVertex2f(0.05, 0.3);
glVertex2f( 0.1, 0.34);
glVertex2f( 0.17, 0.33);
glVertex2f( 0.22, 0.28);
glVertex2f( 0.24, 0.2);
glVertex2f(0.22, 0.12);
glVertex2f( 0.0, 0.0);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(143, 170, 195);
glVertex2f(0.0, 0.0);
glVertex2f(-0.076, -0.3);
glVertex2f( -0.06, -0.35);
glVertex2f( -0.005, -0.39);
glVertex2f( 0.06, -0.38);
glVertex2f( 0.1, -0.36);
glVertex2f(0.125, -0.28);
glVertex2f( 0.0, 0.0);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(143, 170, 195);
glVertex2f(0.0, 0.0);
glVertex2f(-0.14, 0.25);
glVertex2f(-0.18, 0.3);
glVertex2f(-0.22, 0.3);
glVertex2f(-0.26, 0.25);
glVertex2f(-0.27, 0.15);
glVertex2f(-0.24, 0.06);
glVertex2f( 0.0, 0.0);
glEnd();

glPopMatrix();








int i;
  GLfloat a1=0.0; GLfloat b1=0.0; GLfloat radius1 =.08f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(202, 225, 244); // clock
		glVertex2f(a1, b1); // center of circle
		for(i = 0;i <= triangleAmount1;i++) {
			glVertex2f(
		            a1 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
			    b1+ (radius1 * sin(i * twicePi1 / triangleAmount1))
			);
		}
	glEnd();
    GLfloat a=0.0; GLfloat b=0.0; GLfloat radius =.05f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(214, 233, 248); // clock
		glVertex2f(a, b); // center of circle
		for(i = 0;i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glLoadIdentity();
glBegin(GL_LINES);
glColor3ub(139, 191, 232);
glVertex2f(0, 0.46);
glVertex2f(-0.3, 0.38);
glVertex2f(-0.3, 0.38);
glVertex2f(-0.41, 0);
glVertex2f(-0.41, 0);
glVertex2f(-0.28, -0.36);
glVertex2f(-0.28, -0.36);
glVertex2f(0, -0.48);
glVertex2f(0, -0.48);
glVertex2f(0.28, -0.36);
glVertex2f(0.28, -0.36);
glVertex2f(0.41, 0);
glVertex2f(0.41, 0);
glVertex2f(0.28, 0.37);
glVertex2f(0.28, 0.37);
glVertex2f(0, 0.46);

glVertex2f(0, 0.46);
glVertex2f(0, 0.08);
glVertex2f(-0.3, 0.38);
glVertex2f(-0.055, 0.052);
glVertex2f(-0.41, 0);
glVertex2f(-0.08, 0);
glVertex2f(-0.28, -0.36);
glVertex2f(-0.054, -0.06);
glVertex2f(0, -0.48);
glVertex2f(0, -0.08);
glVertex2f(0.28, -0.36);
glVertex2f(0.055, -0.052);
glVertex2f(0.41, 0);
glVertex2f(0.08, 0);
glVertex2f(0.28, 0.37);
glVertex2f(0.054, 0.06);



glEnd();
glLineWidth(7.5);
glLoadIdentity();
	glFlush();
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Fan");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboardHandle);
	glutIdleFunc(Idle);
	glutKeyboardFunc(keyboardHandle);
	glutMainLoop();
	return 0;
}
