// Generated by Haxe 4.0.1
#ifndef INCLUDED_flixel_tile_GraphicAutoAlt
#define INCLUDED_flixel_tile_GraphicAutoAlt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS2(flixel,tile,GraphicAutoAlt)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES GraphicAutoAlt_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicAutoAlt_obj OBJ_;
		GraphicAutoAlt_obj();

	public:
		enum { _hx_ClassId = 0x016a6b5c };

		void __construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tile.GraphicAutoAlt")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.tile.GraphicAutoAlt"); }
		static hx::ObjectPtr< GraphicAutoAlt_obj > __new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static hx::ObjectPtr< GraphicAutoAlt_obj > __alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicAutoAlt_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicAutoAlt",52,67,28,85); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_GraphicAutoAlt */ 
