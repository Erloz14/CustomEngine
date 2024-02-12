#pragma once
#include "Prerequisites.h"

// Clase Window
// Esta clase encapsula la funcionalidad relacionada con la creación y gestión de una ventana de aplicación.
class Window {
public:
    // Constructor y destructor de la ventana.
    Window();
    ~Window();

    // Inicializa la ventana de la aplicación.
    HRESULT init(HINSTANCE hInstance, int nCmdShow, WNDPROC wndproc);

    // Actualiza la ventana de la aplicación.
    void update();

    // Renderiza contenido en la ventana de la aplicación.
    void render();

    // Destruye la ventana de la aplicación.
    void destroy();

public:
    HWND m_hWnd = nullptr; // Puntero a la ventana de la aplicación
    unsigned int m_width; // Ancho de la ventana
    unsigned int m_height; // Altura de la ventana

private:
    HINSTANCE m_hInst = nullptr; // Instancia de la aplicación
    RECT m_rect; // Rectángulo que define las dimensiones de la ventana
    std::string m_windowNamw = "Custom Engine"; // Nombre de la ventana de la aplicación
};