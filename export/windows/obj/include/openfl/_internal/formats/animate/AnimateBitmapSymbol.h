// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl__internal_formats_animate_AnimateBitmapSymbol
#define INCLUDED_openfl__internal_formats_animate_AnimateBitmapSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_formats_animate_AnimateSymbol
#include <openfl/_internal/formats/animate/AnimateSymbol.h>
#endif
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateBitmapSymbol)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateLibrary)
HX_DECLARE_CLASS4(openfl,_internal,formats,animate,AnimateSymbol)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)

namespace openfl{
namespace _internal{
namespace formats{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES AnimateBitmapSymbol_obj : public  ::openfl::_internal::formats::animate::AnimateSymbol_obj
{
	public:
		typedef  ::openfl::_internal::formats::animate::AnimateSymbol_obj super;
		typedef AnimateBitmapSymbol_obj OBJ_;
		AnimateBitmapSymbol_obj();

	public:
		enum { _hx_ClassId = 0x36b78f57 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.formats.animate.AnimateBitmapSymbol")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.formats.animate.AnimateBitmapSymbol"); }
		static hx::ObjectPtr< AnimateBitmapSymbol_obj > __new();
		static hx::ObjectPtr< AnimateBitmapSymbol_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimateBitmapSymbol_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimateBitmapSymbol",c8,dc,a7,a5); }

		::String alpha;
		::String path;
		 ::Dynamic smooth;
		 ::openfl::display::DisplayObject _hx___createObject( ::openfl::_internal::formats::animate::AnimateLibrary library);

};

} // end namespace openfl
} // end namespace _internal
} // end namespace formats
} // end namespace animate

#endif /* INCLUDED_openfl__internal_formats_animate_AnimateBitmapSymbol */ 