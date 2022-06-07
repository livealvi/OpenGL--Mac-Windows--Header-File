//
//  main.cpp
//  Batman_GLUT
//
//  Created by Alvi Hasan on 5/30/22.
//


#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#include <stdlib.h>
#else
#include <GL/glut.h>
#include <windows.h>  // for MS Windows
#endif

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);         
    glPointSize(5.0);
    
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    for(int i=-90;i<100;i=i+10){
        glVertex2i(i, -100.0);
        glVertex2i(i, 100.0);


        glVertex2i(-100.0,i);
        glVertex2i(100.0,i);
    }
    glEnd();
    
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        
        glVertex2i(0, 60);
        glVertex2i(0, -70);
        glVertex2i(40, 0);
        
        glVertex2i(0, 60);
        glVertex2i(0, -70);
        glVertex2i(-40, 0);
        
        
        glVertex2i(20, 70);
        glVertex2i(-20, 70);
        glVertex2i(0, 0);
        
        
        glVertex2i(20, 85);
        glVertex2i(20, 0);
        glVertex2i(0, 50);
        
        glVertex2i(-20, 85);
        glVertex2i(-20, 0);
        glVertex2i(0, 50);
        
        
        glVertex2i(50, 70);
        glVertex2i(50, -60);
        glVertex2i(10, 0);
        
        glVertex2i(-50, 70);
        glVertex2i(-50, -60);
        glVertex2i(-10, 0);
        
        
        glVertex2i(50, 70);
        glVertex2i(50, -60);
        glVertex2i(90, 0);
        
        glVertex2i(-50, 70);
        glVertex2i(-50, -60);
        glVertex2i(-90, 0);
        
        
        glVertex2i(50, 70);
        glVertex2i(90, 20);
        glVertex2i(90, 0);
        
        glVertex2i(50, -60);
        glVertex2i(90, -15);
        glVertex2i(90, 0);
        
        
        glVertex2i(-50, 70);
        glVertex2i(-90, 20);
        glVertex2i(-90, 0);
        
        glVertex2i(-50, -60);
        glVertex2i(-90, -15);
        glVertex2i(-90, 0);
        
        
        glVertex2i(-50, 70);
        glVertex2i(-30, 70);
        glVertex2i(-50, 0);
        
        glVertex2i(50, 70);
        glVertex2i(30, 70);
        glVertex2i(50, 0);
        
        
        
        glVertex2i(-40, -70);
        glVertex2i(-60, 0);
        glVertex2i(-90, -15);
        
        glVertex2i(40, -70);
        glVertex2i(60, 0);
        glVertex2i(90, -15);
    
    glEnd();
    
    
    glFlush();  // Render now
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    //glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0, 100.0, -100.0, 100.0);
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("BATMAN"); // Create a window with the given title
    glutInitWindowSize(320, 320);   // Set the window's initial width & height
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    myInit();
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
