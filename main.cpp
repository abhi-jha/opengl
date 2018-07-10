#include <iostream>
#include "GL/glew.h"
#include "GL/freeglut.h"

void changeViewPort(int w, int h){
    std::cout<<" w : "<<w<<" h : "<<h<<"\n";
    glViewport(0, 0, w, h);
}

void render(){
    std::cout<<"Render\n";
    glClear(GL_COLOR_BUFFER_BIT |  GL_DEPTH_BUFFER_BIT);
    glColor3i(255,0,0);
    for(int  i = 0 ; i < 100; i++)
        glVertex2i(i,i);
    glutSwapBuffers();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(400,500);
    glutCreateWindow("Hello GL");
    glutReshapeFunc(changeViewPort);
    glutDisplayFunc(render);

    GLenum err = glewInit();
    if(GLEW_OK!= err){
        fprintf(stderr, "GLEW ERROR");
        return 1;
    }
    glutMainLoop();
    return 0;
}