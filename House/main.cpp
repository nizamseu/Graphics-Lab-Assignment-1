#include<Windows.h>       // for MS Windows
#include<GL\glut.h>       // GLUT, include glu.h and gl.h
//Note: GLglut.h path depending on the system in use
void init()
{
    // Set display window color to as glClearColor(R,G,B,Alpha)
    glClearColor(0.5, 0.9, 0.4, 0.0);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, Max Height)
    gluOrtho2D(0.0, 800, 0.0, 600);
}
void home()
{
    //Roof
    glClear(GL_COLOR_BUFFER_BIT);



    // Triangle
    glColor3f(0.0, 0.0, 0.150);
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 500);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glEnd();

    // Front Wall
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glVertex2i(300, 100);
    glVertex2i(100, 100);
    glEnd();


//window 1
     glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(110, 260);
    glVertex2i(160, 260);
    glVertex2i(160, 200);
    glVertex2i(110, 200);
    glEnd();




//window 2
     glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(220, 260);
    glVertex2i(280, 260);
    glVertex2i(280, 200);
    glVertex2i(220, 200);
    glEnd();



    // Door
     glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(170, 300);
    glVertex2i(210, 300);
    glVertex2i(210, 150);
    glVertex2i(170, 150);
    glEnd();





    glFlush();
}
int main(int argc, char ** argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);
    // Set display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // Set top - left display window position.
    glutInitWindowPosition(100, 100);
    // Set display window width and height
    glutInitWindowSize(1000, 1000);
    // Create display window with the given title
    glutCreateWindow("House By Nizam uddin ");
    // Execute initialization procedure
    init();
    // Send graphics to display window
    glutDisplayFunc(home);
    // Display everything and wait.
    glutMainLoop();
}
