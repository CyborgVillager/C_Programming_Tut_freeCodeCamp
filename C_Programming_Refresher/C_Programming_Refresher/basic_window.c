#include <GLFW/glfw3.h>
//Youtube Tutorial on activiting glfw3 https://youtu.be/HzFatL3WT6g?si=52M_0js2bapONIgQ  &
//  https://youtu.be/vGptI11wRxE?si=f7r5ZBWRnYVSrEud
/*
How to create first C/C++ application using OpenGL and Visual Studio 2022.
To build and link the application statically, we need to add the follwing lib files to the project:
glfw3.lib; opengl32.lib; user32.lib; gdi32.lib; shell32.lib

https://www.glfw.org/documentation.html

https://www.glfw.org/download.html

*/
int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}