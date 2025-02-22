#define GLEW_DLL
#define GLFW_DLL

#include "Gl\glew.h"
#include "GLFW/glfw3.h"

int main()
{
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 1);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    GLFWwindow* window;
    window = glfwCreateWindow(512, 512, "HEX", NULL, NULL);

    glfwMakeContextCurrent(window);
    glewExperimental = GL_TRUE;
    glewInit();

    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.5, 0.2, 0.7, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-0.0, 1.0);
        glVertex2f(-0.951, 0.309);
        glVertex2f(-0.588, -0.809);
        glVertex2f(0.588, -0.809);
        glVertex2f(0.951, 0.309);

        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}