#pragma once
#include "imgui.h"
#include <windows.h>
#include <optional>

struct RepentogonImGuiHookData{
    std::optional<LRESULT> (*MultiViewport_WndProcHandler)(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) = nullptr;
    bool shouldDisableMultiViewport;
};

extern IMGUI_API RepentogonImGuiHookData repentogonImGuiHookData;