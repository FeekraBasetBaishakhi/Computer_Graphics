#include <windows.h>
#include <GL/glut.h>
# define PI           3.14159265358979323846
#include<math.h>>
GLfloat o = 0.0f;
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{    glClearColor(0.0f, 1.5f, 1.0f, 1.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    //windmill
glBegin(GL_LINES);
glColor3ub(26, 26, 0);
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.8, 0.27 );
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.7, 0.27 );
glVertex2f(-0.75, 0.5 );
glVertex2f(-0.75, 0.27 );
glVertex2f(-0.75, 0.5 );

glVertex2f(-0.736, 0.436 );
glVertex2f(-0.763, 0.436 );
glVertex2f(-0.736, 0.436 );
glVertex2f(-0.75, 0.41 );
glVertex2f(-0.736, 0.436 );
glVertex2f(-0.763, 0.436 );
glVertex2f(-0.75, 0.41 );


glVertex2f(-0.730, 0.407 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.730, 0.407 );
glVertex2f(-0.75, 0.36 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.730, 0.407 );
glVertex2f(-0.769, 0.407 );
glVertex2f(-0.75, 0.36 );

glVertex2f(-0.721, 0.36 );
glVertex2f(-0.78, 0.36 );
glVertex2f(-0.721, 0.36 );
glVertex2f(-0.75, 0.30 );
glVertex2f(-0.78, 0.36 );
glVertex2f(-0.721, 0.36);
glVertex2f(-0.78, 0.36);
glVertex2f(-0.75, 0.30 );

glEnd();
     int z;//windmill
    GLfloat c=-.75f; GLfloat d=.51f; GLfloat radius2 =.015f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 0, 0);
		glVertex2f(c, d); // center of circle
		for(z = 0; z <= triangleAmount2;z++) {
			glVertex2f(
		            c+ (radius2 * cos(z *  twicePi2 / triangleAmount2)),
			    d+ (radius2 * sin(z * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

        glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
glTranslatef(-0.75,0.51,0);
glRotatef(o,0.0,0.0,1.0);//i=how many degree you want to rotate around an axis




glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(-0.0007, 0.1);
glVertex2f(-0.05, 0.1 );


glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0, 0 );
glVertex2f(-0.1, 0.0);
glVertex2f(-0.093, 0.04 );




glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(0.093, -0.027 );
glVertex2f(0.09, 0.027 );
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(0.0, 0.0 );
glVertex2f(-0.014, -0.09 );
glVertex2f(0.032, -0.08 );
glEnd();


glEnd();
glPopMatrix();//glPopMatrix pops the top matrix off the stack
    o+=0.1f;//i=i+.1=.2
    glFlush();


}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;}
