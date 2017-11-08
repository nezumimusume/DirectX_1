#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <memory>
#include <D3Dcompiler.h>
#include <Windows.h>
#include <d3d11.h>

#include "DirectXTK/Inc/Model.h"
#include "DirectXTK/Inc/Effects.h"	
#include "DirectXTK/Inc/CommonStates.h"
#include "DirectXTK/Inc/SpriteFont.h"
#include "DirectXTK/Inc/DDSTextureLoader.h"


extern ID3D11Device* g_pd3dDevice ;			//D3D11�f�o�C�X�B
extern ID3D11DeviceContext* g_pd3dDeviceContext;	//D3D11�f�o�C�X�R���e�L�X�g�B