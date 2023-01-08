#pragma once

#include "resource.h"
#include "gui_canalysis.h"

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_vulkan.h"
#include <stdio.h>          
#include <stdlib.h>       
#define GLFW_INCLUDE_NONE
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

static int                      g_MinImageCount = 2;
static bool						g_SwapChainRebuild = false;


void ShowPlottingWindow(bool* p_open);