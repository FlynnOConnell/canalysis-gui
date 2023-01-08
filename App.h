#pragma once

#ifndef NOMINMAX
#define NOMINMAX
#endif

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <implot.h>
#include <string>
#include <map>

#include "common/Native.h"
#include "common/Helpers.h"
#include "lib/cxxopts/cxxopts.hpp"

/// Macro to disable console on Windows
#if defined(_WIN32) && defined(APP_NO_CONSOLE)
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

// Barebones Application Framework
class Gui
{
    // Constructor.
    Gui(std::string title, int w, int h, int argc, char const* argv[]);
    // Destructor.
    virtual ~Gui();
    // Called at top of run
    virtual void Start() { }
    // Update, called once per frame.
    virtual void Update() { /*implement me*/ }
    // Runs the app.
    void Run();
    // Get window size
    ImVec2 GetWindowSize() const;

    ImVec4 ClearColor;                    // background clear color
    GLFWwindow* Window;                   // GLFW window handle
    std::map<std::string, ImFont*> Fonts;  // font map
    bool UsingDGPU;                       // using discrete gpu (laptops only)
};
