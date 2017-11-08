/*!
 * @brief	�|���S���p�̃V�F�[�_�[�B
 */


struct VSInput{
	float4 pos : SV_Position;
	float2 uv : TEXCOORD0;
};

struct PSInput{
	float4 pos : SV_POSITION;
	float2 uv : TEXCOORD0;
};

Texture2D<float4> colorTexture : register(t0);	//�J���[�e�N�X�`���B
sampler Sampler : register(s0);


PSInput VSMain(VSInput In) 
{
	PSInput psIn;
	psIn.pos = In.pos;
	psIn.uv = In.uv;
	return psIn;
}
float4 PSMain( PSInput In ) : SV_Target0
{
	return colorTexture.Sample(Sampler, In.uv);
}