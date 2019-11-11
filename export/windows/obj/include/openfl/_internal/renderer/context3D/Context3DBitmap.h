// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DBitmap
#define INCLUDED_openfl__internal_renderer_context3D_Context3DBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,renderer,context3D,Context3DBitmap)
HX_DECLARE_CLASS4(openfl,_internal,renderer,context3D,Context3DRenderer)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{


class HXCPP_CLASS_ATTRIBUTES Context3DBitmap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Context3DBitmap_obj OBJ_;
		Context3DBitmap_obj();

	public:
		enum { _hx_ClassId = 0x6f3e2682 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.context3D.Context3DBitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.context3D.Context3DBitmap"); }

		inline static hx::ObjectPtr< Context3DBitmap_obj > __new() {
			hx::ObjectPtr< Context3DBitmap_obj > __this = new Context3DBitmap_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Context3DBitmap_obj > __alloc(hx::Ctx *_hx_ctx) {
			Context3DBitmap_obj *__this = (Context3DBitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Context3DBitmap_obj), false, "openfl._internal.renderer.context3D.Context3DBitmap"));
			*(void **)__this = Context3DBitmap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DBitmap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DBitmap",4f,70,e2,50); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void render( ::openfl::display::Bitmap bitmap, ::openfl::_internal::renderer::context3D::Context3DRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderMask( ::openfl::display::Bitmap bitmap, ::openfl::_internal::renderer::context3D::Context3DRenderer renderer);
		static ::Dynamic renderMask_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D

#endif /* INCLUDED_openfl__internal_renderer_context3D_Context3DBitmap */ 
