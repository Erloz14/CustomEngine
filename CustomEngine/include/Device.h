#pragma once
#include "Prerequisites.h"

// Clase Device
// Esta clase encapsula la funcionalidad relacionada con el dispositivo de gr�ficos.
class Device {
public:
    Device() = default; // Constructor predeterminado
    ~Device() = default; // Destructor predeterminado

    // Inicializa el dispositivo de gr�ficos.
    void init();

    // Realiza las actualizaciones necesarias del dispositivo de gr�ficos.
    void update();

    // Renderiza los objetos en la pantalla utilizando el dispositivo de gr�ficos.
    void render();

    // Destruye el dispositivo de gr�ficos y libera los recursos asociados.
    void destroy();

    // Crea una vista de destino de representaci�n para un recurso.
    HRESULT CreateRenderTargetView(
        ID3D11Resource* pResource,
        const D3D11_RENDER_TARGET_VIEW_DESC* pDesc,
        ID3D11RenderTargetView** ppRTView);

    // Crea un objeto de textura 2D.
    HRESULT CreateTexture2D(
        const D3D11_TEXTURE2D_DESC* pDesc,
        const D3D11_SUBRESOURCE_DATA* pInitialData,
        ID3D11Texture2D** ppTexture2D);

    // Crea una vista de profundidad y de stencil.
    HRESULT CreateDepthStencilView(
        ID3D11Resource* pResource,
        D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc,
        ID3D11DepthStencilView** ppDepthStencilView);

public:
    ID3D11Device* m_device = nullptr; // Puntero al dispositivo de gr�ficos
};