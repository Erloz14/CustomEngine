#pragma once
#include "Prerequisites.h"

// Clase Window
// Esta clase encapsula la funcionalidad relacionada con la creaci�n y gesti�n de una ventana de aplicaci�n.
class Window {
public:
    // Constructor y destructor de la ventana.
    Window();
    ~Window();

    // Inicializa la ventana de la aplicaci�n.
    HRESULT init(HINSTANCE hInstance, int nCmdShow, WNDPROC wndproc);

    // Actualiza la ventana de la aplicaci�n.
    void update();

    // Renderiza contenido en la ventana de la aplicaci�n.
    void render();

    // Destruye la ventana de la aplicaci�n.
    void destroy();

public:
    HWND m_hWnd = nullptr; // Puntero a la ventana de la aplicaci�n
    unsigned int m_width; // Ancho de la ventana
    unsigned int m_height; // Altura de la ventana

private:
    HINSTANCE m_hInst = nullptr; // Instancia de la aplicaci�n
    RECT m_rect; // Rect�ngulo que define las dimensiones de la ventana
    std::string m_windowNamw = "Custom Engine"; // Nombre de la ventana de la aplicaci�n
};