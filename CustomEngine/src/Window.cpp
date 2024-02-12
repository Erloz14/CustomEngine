#include "Window.h" // Incluye el archivo de encabezado de la clase Window

Window::Window() {
    // Constructor de la clase Window
}

Window::~Window() {
    // Destructor de la clase Window
}

HRESULT Window::init(HINSTANCE hInstance, int nCmdShow, WNDPROC wndproc) {
    // Inicializa la ventana
    m_hInst = hInstance;

    // Configuraci�n de la estructura WNDCLASSEX para registrar la clase de ventana
    WNDCLASSEX wcex;
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = wndproc; // Procedimiento de ventana para manejar los mensajes
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = m_hInst;
    wcex.hIcon = LoadIcon(m_hInst, (LPCTSTR)IDI_TUTORIAL1); // Icono de la ventana
    wcex.hCursor = LoadCursor(nullptr, IDC_ARROW); // Cursor de la ventana
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1); // Fondo de la ventana
    wcex.lpszMenuName = nullptr;
    wcex.lpszClassName = "TutorialWindowClass"; // Nombre de la clase de ventana
    wcex.hIconSm = LoadIcon(wcex.hInstance, (LPCTSTR)IDI_TUTORIAL1); // Icono peque�o de la ventana

    // Registra la clase de ventana
    if (!RegisterClassEx(&wcex))
        return E_FAIL;

    // Crea la ventana
    RECT rc = { 0, 0, 1500, 840 }; // Tama�o inicial de la ventana
    m_rect = rc;
    AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW, FALSE);
    m_hWnd = CreateWindow("TutorialWindowClass", // Nombre de la clase de ventana registrada previamente
        "Direct3D 11 Tutorial 7", // T�tulo de la ventana
        WS_OVERLAPPEDWINDOW, // Estilo de la ventana
        CW_USEDEFAULT, CW_USEDEFAULT,
        m_rect.right - m_rect.left,
        m_rect.bottom - m_rect.top,
        nullptr,
        nullptr,
        hInstance,
        nullptr);
    if (!m_hWnd)
        return E_FAIL;

    // Muestra la ventana
    ShowWindow(m_hWnd, nCmdShow);

    // Obtiene el tama�o de la ventana
    GetClientRect(m_hWnd, &m_rect);
    m_width = m_rect.right - m_rect.left;
    m_height = m_rect.bottom - m_rect.top;

    return S_OK;
}

void Window::update() {
    // L�gica de actualizaci�n de la ventana
}

void Window::render() {
    // L�gica de renderizado de la ventana
}

void Window::destroy() {
    // L�gica de destrucci�n de la ventana
}