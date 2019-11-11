// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DAlphaMaskShader
#define INCLUDED_openfl__internal_renderer_context3D_Context3DAlphaMaskShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
HX_DECLARE_CLASS4(openfl,_internal,renderer,context3D,Context3DAlphaMaskShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderInput_openfl_display_BitmapData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)

namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{


class HXCPP_CLASS_ATTRIBUTES Context3DAlphaMaskShader_obj : public  ::openfl::display::Shader_obj
{
	public:
		typedef  ::openfl::display::Shader_obj super;
		typedef Context3DAlphaMaskShader_obj OBJ_;
		Context3DAlphaMaskShader_obj();

	public:
		enum { _hx_ClassId = 0x7eef410c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.context3D.Context3DAlphaMaskShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.context3D.Context3DAlphaMaskShader"); }
		static hx::ObjectPtr< Context3DAlphaMaskShader_obj > __new();
		static hx::ObjectPtr< Context3DAlphaMaskShader_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DAlphaMaskShader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DAlphaMaskShader",cf,4d,b9,c9); }

		 ::openfl::display::ShaderParameter_Float openfl_Position;
		 ::openfl::display::ShaderParameter_Float openfl_TextureCoord;
		 ::openfl::display::ShaderParameter_Float openfl_AlphaTextureMatrix;
		 ::openfl::display::ShaderParameter_Float openfl_Matrix;
		 ::openfl::display::ShaderInput_openfl_display_BitmapData openfl_AlphaTexture;
		 ::openfl::display::ShaderInput_openfl_display_BitmapData openfl_Texture;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D

#endif /* INCLUDED_openfl__internal_renderer_context3D_Context3DAlphaMaskShader */ 
