// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#define INCLUDED_openfl_display_DisplayObjectRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES DisplayObjectRenderer_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef DisplayObjectRenderer_obj OBJ_;
		DisplayObjectRenderer_obj();

	public:
		enum { _hx_ClassId = 0x7cdf41d6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.DisplayObjectRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.DisplayObjectRenderer"); }
		static hx::ObjectPtr< DisplayObjectRenderer_obj > __new();
		static hx::ObjectPtr< DisplayObjectRenderer_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObjectRenderer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DisplayObjectRenderer",e4,f4,5f,fb); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool _hx___allowSmoothing;
		 ::Dynamic _hx___blendMode;
		bool _hx___cleared;
		 ::Dynamic _hx___overrideBlendMode;
		bool _hx___roundPixels;
		 ::openfl::display::Stage _hx___stage;
		bool _hx___transparent;
		::String _hx___type;
		Float _hx___worldAlpha;
		 ::openfl::geom::ColorTransform _hx___worldColorTransform;
		 ::openfl::geom::Matrix _hx___worldTransform;
		virtual void _hx___clear();
		::Dynamic _hx___clear_dyn();

		virtual void _hx___drawBitmapData( ::openfl::display::BitmapData bitmapData,::Dynamic source, ::openfl::geom::Rectangle clipRect);
		::Dynamic _hx___drawBitmapData_dyn();

		virtual void _hx___render(::Dynamic object);
		::Dynamic _hx___render_dyn();

		virtual void _hx___resize(int width,int height);
		::Dynamic _hx___resize_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DisplayObjectRenderer */ 
