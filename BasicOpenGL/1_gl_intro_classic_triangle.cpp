#include <pangolin/display/display.h>
#include <pangolin/gl/gl.h>

void sample()
{
    pangolin::CreateWindowAndBind("Classic GL Triangle", 500, 500);
 
    const float vertices[] = {
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.0f, 0.5f, 0.0f
    };
    
    glClearColor(0.65f, 0.5f, 0.81f, 0.0f);
    glColor3f(0.29f, 0.71f, 1.0f);
    
    while(!pangolin::ShouldQuit())
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glVertexPointer(3, GL_FLOAT, 0, vertices);
        glEnableClientState(GL_VERTEX_ARRAY);
        
        glDrawArrays(GL_TRIANGLES, 0, 3);
        
        glDisableClientState(GL_VERTEX_ARRAY);
        
        pangolin::FinishFrame();
    }
    
}

int main(int argc, char *argv[])
{
    sample();
    
    return 0;
}
