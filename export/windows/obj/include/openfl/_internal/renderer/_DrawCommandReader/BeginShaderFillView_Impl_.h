// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginShaderFillView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginShaderFillView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS3(openfl,_internal,renderer,ShaderBuffer)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,BeginShaderFillView_Impl_)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES BeginShaderFillView_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BeginShaderFillView_Impl__obj OBJ_;
		BeginShaderFillView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x743e2edc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.BeginShaderFillView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.BeginShaderFillView_Impl_"); }

		inline static hx::ObjectPtr< BeginShaderFillView_Impl__obj > __new() {
			hx::ObjectPtr< BeginShaderFillView_Impl__obj > __this = new BeginShaderFillView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< BeginShaderFillView_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			BeginShaderFillView_Impl__obj *__this = (BeginShaderFillView_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BeginShaderFillView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.BeginShaderFillView_Impl_"));
			*(void **)__this = BeginShaderFillView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BeginShaderFillView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BeginShaderFillView_Impl_",d6,07,10,c7); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static  ::openfl::_internal::renderer::ShaderBuffer get_shaderBuffer( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_shaderBuffer_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginShaderFillView_Impl_ */ 
