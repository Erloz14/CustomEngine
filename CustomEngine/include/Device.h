#pragma once
#include "Prerequisites.h"

// Clase Device
// Esta clase encapsula la funcionalidad relacionada con el dispositivo de gráficos.
class Device {
public:
    Device() = default; // Constructor predeterminado
    ~Device() = default; // Destructor predeterminado

    // Inicializa el dispositivo de gráficos.
    void init();

    // Realiza las actualizaciones necesarias del dispositivo de gráficos.
    void update();

    // Renderiza los objetos en la pantalla utilizando el dispositivo de gráficos.
    void render();

    // Destruye el dispositivo de gráficos y libera los recursos asociados.
    void destroy();

    // Crea una vista de destino de representación para un recurso.
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
    ID3D11Device* m_device = nullptr; // Puntero al dispositivo de gráficos
};